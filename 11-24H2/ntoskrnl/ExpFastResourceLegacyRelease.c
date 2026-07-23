/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x140462AF4
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140357AA0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease(_QWORD *BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // r14
  char v5; // si
  __int64 i; // rbx
  char v7; // cl
  char v8; // al

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  v5 = 1;
  if ( (*v3 & 1) == 0 || (struct _KTHREAD *)v3[10] != CurrentThread )
  {
    for ( i = (__int64)CurrentThread[1].WaitBlock[3].SparePtr;
          (unsigned __int64 *)i != &CurrentThread[1].LastXStateSaveDebugInfo;
          i = *(_QWORD *)i )
    {
      v7 = *(_BYTE *)(i + 37);
      if ( (v7 & 2) == 0 && *(_QWORD **)(i + 24) == v3 && (v7 & 1) != 0 )
        goto LABEL_12;
    }
LABEL_13:
    KeBugCheckEx(0xE3u, (ULONG_PTR)v3, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  i = (__int64)(v3 + 8);
LABEL_12:
  if ( !i )
    goto LABEL_13;
  v8 = *(_BYTE *)(i + 37);
  if ( (v8 & 2) != 0 )
    v5 = 0;
  else
    *(_BYTE *)(i + 37) = v8 & 0xFE;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(CurrentIrql);
  ExReleaseFastResource((ULONG_PTR)v3, (__int64 *)i);
  if ( v5 )
    ExFreePoolWithTag((PVOID)i, 0);
}
