/*
 * XREFs of ExReleaseFastResourceShared @ 0x1404F22A0
 * Callers:
 *     DifExReleaseFastResourceSharedWrapper @ 0x14061EE20 (DifExReleaseFastResourceSharedWrapper.c)
 * Callees:
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14028DCE0 (ExpReleaseFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  __int64 v6; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v5, 0LL);
  LOBYTE(v5) = *(_BYTE *)(a2 + 37) & 2;
  if ( !(_BYTE)v5 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 != BugCheckParameter2 )
    {
      if ( v6 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (v4 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (_BYTE)v5 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(*(_BYTE *)(a2 + 37) & 2) << 15, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    return ExpReleaseFastResourceExclusive((__int64 *)BugCheckParameter2, 0LL, a2, v5);
  else
    return ExpReleaseFastResourceShared((signed __int64 *)BugCheckParameter2, (__int64 *)a2, a2, v5);
}
