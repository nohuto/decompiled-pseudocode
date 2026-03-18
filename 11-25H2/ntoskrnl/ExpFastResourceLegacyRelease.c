/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x14046B870
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x1402FF5D0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  char v6; // si
  __int64 i; // rbx
  char v8; // cl
  char v9; // al

  CurrentThread = KeGetCurrentThread();
  v4 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2);
  }
  v6 = 1;
  if ( (*v4 & 1) == 0 || (struct _KTHREAD *)v4[10] != CurrentThread )
  {
    for ( i = (__int64)CurrentThread[1].WaitBlock[3].SparePtr;
          (unsigned __int64 *)i != &CurrentThread[1].LastXStateSaveDebugInfo;
          i = *(_QWORD *)i )
    {
      v8 = *(_BYTE *)(i + 37);
      if ( (v8 & 2) == 0 && *(_QWORD **)(i + 24) == v4 && (v8 & 1) != 0 )
        goto LABEL_12;
    }
LABEL_13:
    KeBugCheckEx(0xE3u, (ULONG_PTR)v4, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  i = (__int64)(v4 + 8);
LABEL_12:
  if ( !i )
    goto LABEL_13;
  v9 = *(_BYTE *)(i + 37);
  if ( (v9 & 2) != 0 )
    v6 = 0;
  else
    *(_BYTE *)(i + 37) = v9 & 0xFE;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(CurrentIrql);
  ExReleaseFastResource((ULONG_PTR)v4, (__int64 *)i, a3);
  if ( v6 )
    ExFreePoolWithTag((PVOID)i, 0);
}
