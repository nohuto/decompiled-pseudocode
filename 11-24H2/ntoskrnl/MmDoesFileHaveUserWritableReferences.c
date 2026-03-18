/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14022E6E0
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14022E880 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  char *DataSectionObject; // rsi
  unsigned __int64 v5; // rbx
  __int64 v7; // rdx
  int HaveUserWritableReferences; // eax
  volatile LONG *v9; // rcx
  _BOOL8 v10; // rsi
  __int64 v11; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2CC00);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    v5 = v2;
    if ( !SectionPointer->DataSectionObject )
    {
      if ( v2 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E2CC00 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CC00, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E2CC00 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CC00, retaddr);
        if ( KiIrqlFlags )
        {
          LOBYTE(v3) = v5;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
        }
        __writecr8(v5);
      }
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    LOBYTE(v7) = v5;
    MiReleaseSpinLockExclusive(&dword_140E2CC00, v7);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2CC00 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CC00, retaddr);
  HaveUserWritableReferences = MiDoesControlAreaHaveUserWritableReferences(DataSectionObject);
  v9 = (volatile LONG *)(DataSectionObject + 72);
  v10 = HaveUserWritableReferences != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( (_BYTE)v5 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = v5;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(v5);
  }
  return v10;
}
