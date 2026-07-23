/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x140A97B30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1403A5BE4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PoFxActivateDevice @ 0x1404909F4 (PoFxActivateDevice.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  char *v8; // rax
  char *v9; // rdi

  v1 = *(_QWORD *)(P + 16);
  v3 = (char *)KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v3, (__int64)&PopFxUpdateDripsConstraintContext);
  if ( v5 )
    v5[10] = 1;
  if ( byte_140F0DB38 )
  {
    v6 = (__int64 *)qword_140F0DB30;
    if ( *(__int64 **)qword_140F0DB30 != &qword_140F0DB28 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140F0DB28;
    *(_QWORD *)(P + 8) = v6;
    *v6 = P;
    qword_140F0DB30 = P;
  }
  else
  {
    ++dword_140F0DB3C;
    KeResetEvent(&stru_140F0DB40);
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
    v8 = (char *)KeAbPreAcquire((__int64)&PopFxUpdateDripsConstraintContext, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxUpdateDripsConstraintContext, 0LL);
    v9 = v8;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&PopFxUpdateDripsConstraintContext, v8, (__int64)&PopFxUpdateDripsConstraintContext);
    if ( v9 )
      v9[10] = 1;
    if ( !--dword_140F0DB3C )
      KeSetEvent(&stru_140F0DB40, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
