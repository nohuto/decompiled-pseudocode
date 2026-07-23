/*
 * XREFs of PopFxClearDeviceConstraints @ 0x1404CDF98
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1403A5BC0 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxReinitializeAccountingInstance @ 0x1403A5DA8 (PopFxReinitializeAccountingInstance.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x1405D86F4 (PopPepClearDripsDeviceVetoMask.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopFxClearDeviceConstraints(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // r14
  KIRQL v5; // bl
  unsigned int i; // r15d
  __int64 v7; // rdi
  KIRQL v8; // bl

  if ( (unsigned int)PpmGetDeepSleepPlatformStateIndex() == -1 )
    return (unsigned int)-1073741823;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741811;
  v3 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v3 && (*(_DWORD *)(v3 + 24) & 0x8000000) == 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    PopFxReferenceDevice(BugCheckParameter2, 2);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 0x10) != 0
      && *(_QWORD *)(BugCheckParameter2 + 56) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 32LL);
      PopFxActivateDevice(v4, 0, 0);
      v2 = PopPepClearDripsDeviceVetoMask(*(_QWORD *)(BugCheckParameter2 + 56));
      if ( v2 >= 0 )
      {
        v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 640));
        PopFxReinitializeAccountingInstance(BugCheckParameter2 + 640, 0);
        *(_DWORD *)(BugCheckParameter2 + 652) = 5;
        _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 864), 0xFFFFF7EF);
        KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 640), v5);
        for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 868); ++i )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * i) + 200LL;
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
          PopFxReinitializeAccountingInstance(v7, 0);
          *(_DWORD *)(v7 + 12) = -1;
          _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 864), 0xFFFFFEFF);
          KeReleaseSpinLock((PKSPIN_LOCK)v7, v8);
        }
      }
      PoFxIdleDevice(v4);
    }
    else
    {
      v2 = -1073741823;
    }
    PopFxDereferenceDevice(BugCheckParameter2, 2);
    if ( !v2 )
      ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v2;
}
