/*
 * XREFs of MiLockSectionControlArea @ 0x14034CE80
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14034DAEC (MiReferenceExistingControlArea.c)
 *     MmDisableModifiedWriteOfSection @ 0x14034DF60 (MmDisableModifiedWriteOfSection.c)
 *     MmEnoughMemoryForWrite @ 0x14034DFE0 (MmEnoughMemoryForWrite.c)
 *     MiForceSectionClosed @ 0x14034E348 (MiForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x14044F9DC (MmChangeSectionBackingFile.c)
 *     MmGetImageFileSignatureInformation @ 0x14044FBE0 (MmGetImageFileSignatureInformation.c)
 *     MiCopyHeaderIfResident @ 0x140476ABC (MiCopyHeaderIfResident.c)
 *     MmOnlySystemCacheViewsPresent @ 0x140483028 (MmOnlySystemCacheViewsPresent.c)
 *     MiFlushDataSection @ 0x140483684 (MiFlushDataSection.c)
 *     MmIsFileSectionActive @ 0x140489F00 (MmIsFileSectionActive.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x14034D580 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14034E284 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, char a2, unsigned __int8 *a3)
{
  int v3; // esi
  int v5; // edi
  __int64 v7; // rdx
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    }
    else
    {
      *a3 = ExAcquireSpinLockExclusive(&SpinLock);
    }
    v10 = v5 ? *a1 : a1[2];
    if ( !v10 )
      break;
    v13 = v10 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      v14 = TRY_ACQUIRE_EXLOCK_EXCLUSIVE(v13);
    else
      v14 = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13, v7, v8, v9);
    if ( v14 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        SpinLock = 0;
        return v10;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
        return v10;
      }
    }
    MiReleaseSpinLockExclusive(&SpinLock, *a3);
  }
  v11 = *a3;
  if ( (_BYTE)v11 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      SpinLock = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      SpinLock = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
  return 0LL;
}
