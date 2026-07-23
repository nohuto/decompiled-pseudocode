/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x140A966B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140355CD0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14047D544 (PoFxActivateDevice.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rdi

  v1 = *(_QWORD *)(P + 16);
  v3 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v3, (__int64)&PopFxUpdateDripsConstraintContext);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( byte_140F0D058 )
  {
    v6 = (__int64 *)qword_140F0D050;
    if ( *(__int64 **)qword_140F0D050 != &qword_140F0D048 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140F0D048;
    *(_QWORD *)(P + 8) = v6;
    *v6 = P;
    qword_140F0D050 = P;
  }
  else
  {
    ++dword_140F0D05C;
    KeResetEvent(&stru_140F0D060);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
    PoFxActivateDevice(v7);
    PopPepUpdateDripsDeviceVetoMask(v1, *(_DWORD *)(P + 24));
    PoFxIdleDevice(v7);
    PopFxDereferenceDevice(v1, 2);
    ExFreePoolWithTag((PVOID)P, 0x4D584650u);
    ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
    v8 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v9 = v8;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v8, (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( !--dword_140F0D05C )
      KeSetEvent(&stru_140F0D060, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
