/*
 * XREFs of MiLockSectionControlArea @ 0x1402BED40
 * Callers:
 *     MiReferenceExistingControlArea @ 0x1402BE814 (MiReferenceExistingControlArea.c)
 *     MiCopyHeaderIfResident @ 0x1403F0510 (MiCopyHeaderIfResident.c)
 *     MiForceSectionClosed @ 0x1403F2544 (MiForceSectionClosed.c)
 *     MmEnoughMemoryForWrite @ 0x140411550 (MmEnoughMemoryForWrite.c)
 *     MmChangeSectionBackingFile @ 0x14044663C (MmChangeSectionBackingFile.c)
 *     MmGetImageFileSignatureInformation @ 0x140446860 (MmGetImageFileSignatureInformation.c)
 *     MmDisableModifiedWriteOfSection @ 0x14044E780 (MmDisableModifiedWriteOfSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x14047EE60 (MmOnlySystemCacheViewsPresent.c)
 *     MiFlushDataSection @ 0x14047F468 (MiFlushDataSection.c)
 *     MmIsFileSectionActive @ 0x140484620 (MmIsFileSectionActive.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x1402BF400 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1404627C0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, char a2, unsigned __int8 *a3)
{
  int v3; // esi
  int v5; // edi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v10; // rcx
  int v11; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 & 2;
  v5 = a2 & 1;
  while ( 1 )
  {
    if ( v3 )
    {
      *a3 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CD40);
    }
    else
    {
      *a3 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
    }
    v7 = v5 ? *a1 : a1[2];
    if ( !v7 )
      break;
    v10 = v7 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      v11 = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(v10);
    else
      v11 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10);
    if ( v11 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        dword_140E2CD40 = 0;
        return v7;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CD40, retaddr);
        return v7;
      }
    }
    MiReleaseSpinLockExclusive(&dword_140E2CD40, *a3);
  }
  v8 = *a3;
  if ( (_BYTE)v8 == 17 )
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
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
    __writecr8(v8);
  }
  return 0LL;
}
