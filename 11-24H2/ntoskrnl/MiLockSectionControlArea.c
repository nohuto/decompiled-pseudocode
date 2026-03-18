/*
 * XREFs of MiLockSectionControlArea @ 0x140316190
 * Callers:
 *     MmOnlySystemCacheViewsPresent @ 0x140314B88 (MmOnlySystemCacheViewsPresent.c)
 *     MiForceSectionClosed @ 0x140315054 (MiForceSectionClosed.c)
 *     MmEnoughMemoryForWrite @ 0x1403157C0 (MmEnoughMemoryForWrite.c)
 *     MmDisableModifiedWriteOfSection @ 0x140315B50 (MmDisableModifiedWriteOfSection.c)
 *     MiReferenceExistingControlArea @ 0x140315C60 (MiReferenceExistingControlArea.c)
 *     MmChangeSectionBackingFile @ 0x1404511DC (MmChangeSectionBackingFile.c)
 *     MmGetImageFileSignatureInformation @ 0x1404514B0 (MmGetImageFileSignatureInformation.c)
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x140483F48 (MiFlushDataSection.c)
 *     MmIsFileSectionActive @ 0x140489910 (MmIsFileSectionActive.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140315720 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140316850 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, char a2, unsigned __int8 *a3)
{
  int v3; // esi
  int v5; // edi
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v13; // rcx
  int v14; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 & 2;
  v5 = a2 & 1;
  while ( 1 )
  {
    if ( v3 )
    {
      *a3 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CC00);
    }
    else
    {
      *a3 = ExAcquireSpinLockExclusive(&dword_140E2CC00);
    }
    v10 = v5 ? *a1 : a1[2];
    if ( !v10 )
      break;
    v13 = v10 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      v14 = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(v13, v7, v8, v9);
    else
      v14 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13, v7, v8, v9);
    if ( v14 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        dword_140E2CC00 = 0;
        return v10;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CC00, retaddr);
        return v10;
      }
    }
    MiReleaseSpinLockExclusive(&dword_140E2CC00, *a3);
  }
  v11 = *a3;
  if ( (_BYTE)v11 == 17 )
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
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
  return 0LL;
}
