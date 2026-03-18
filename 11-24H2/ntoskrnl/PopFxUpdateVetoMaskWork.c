/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x140A9C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PoFxIdleDevice @ 0x1403D76E4 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140496064 (PoFxActivateDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404A64E8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi

  v1 = *(_QWORD *)(P + 16);
  v3 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(
      &PopFxUpdateDripsConstraintContext,
      (__int64)v3,
      (__int64)&PopFxUpdateDripsConstraintContext);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( byte_140F0D9B8 )
  {
    v6 = (__int64 *)qword_140F0D9B0;
    if ( *(__int64 **)qword_140F0D9B0 != &qword_140F0D9A8 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140F0D9A8;
    *(_QWORD *)(P + 8) = v6;
    *v6 = P;
    qword_140F0D9B0 = P;
  }
  else
  {
    ++dword_140F0D9BC;
    KeResetEvent(&stru_140F0D9C0);
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
    ZwUpdateWnfStateData((__int64)&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL);
    v8 = KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v9 = v8;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(
        &PopFxUpdateDripsConstraintContext,
        (__int64)v8,
        (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( !--dword_140F0D9BC )
      KeSetEvent(&stru_140F0D9C0, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
