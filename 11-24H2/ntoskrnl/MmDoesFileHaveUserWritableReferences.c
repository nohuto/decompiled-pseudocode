/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x140301FF0
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140302190 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *DataSectionObject; // rsi
  unsigned __int64 v7; // rbx
  int HaveUserWritableReferences; // eax
  volatile LONG *v10; // rcx
  _BOOL8 v11; // rsi
  __int64 v12; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    v7 = v2;
    if ( !SectionPointer->DataSectionObject )
    {
      if ( v2 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E2CD40 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CD40, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E2CD40 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CD40, retaddr);
        if ( KiIrqlFlags )
        {
          LOBYTE(v3) = v7;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
        }
        __writecr8(v7);
      }
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72, v3, v4, v5) )
      break;
    MiReleaseSpinLockExclusive(&dword_140E2CD40, v7);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2CD40 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CD40, retaddr);
  HaveUserWritableReferences = MiDoesControlAreaHaveUserWritableReferences(DataSectionObject);
  v10 = (volatile LONG *)(DataSectionObject + 72);
  v11 = HaveUserWritableReferences != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( (_BYTE)v7 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = v7;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    __writecr8(v7);
  }
  return v11;
}
