/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x140218410
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140218514 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  KIRQL v2; // al
  char *DataSectionObject; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // rdx
  int HaveUserWritableReferences; // eax
  volatile LONG *v9; // rcx
  _BOOL8 v10; // rsi
  __int64 v11; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    v2 = ExAcquireSpinLockExclusive(&SpinLock);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    v4 = v2;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
      if ( (_BYTE)v4 != 17 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v5) = v4;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        }
        __writecr8(v4);
      }
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
    LOBYTE(v7) = v4;
    MiReleaseSpinLockExclusive(&SpinLock, v7);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    SpinLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
  HaveUserWritableReferences = MiDoesControlAreaHaveUserWritableReferences(DataSectionObject);
  v9 = (volatile LONG *)(DataSectionObject + 72);
  v10 = HaveUserWritableReferences != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( (_BYTE)v4 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(v4);
  }
  return v10;
}
