/*
 * XREFs of MiDecrementCloneBlockReference @ 0x140294D58
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140299180 (MiDecommitHandleProtoFormatPte.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 * Callees:
 *     MiDecrementCloneBlock @ 0x140294E14 (MiDecrementCloneBlock.c)
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a3)
{
  int v5; // r9d
  struct _KTHREAD *v6; // rcx
  unsigned int v7; // esi
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v6 = *(struct _KTHREAD **)(a3 + 624);
  if ( v6 && v6 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  LOBYTE(v5) = *(_QWORD *)(*(_QWORD *)(a3 + 1040) + 1064LL) > *(_QWORD *)(BugCheckParameter2 + 96);
  v7 = MiDecrementCloneBlock(
         *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL),
         (int)a3 + 1024,
         BugCheckParameter3,
         v5,
         (__int64)&v9);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteCloneDescriptor(a3);
  return v7;
}
