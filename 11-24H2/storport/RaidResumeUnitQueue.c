/*
 * XREFs of RaidResumeUnitQueue @ 0x140001948
 * Callers:
 *     RaidUnitPauseTimerDpcRoutine @ 0x140001010 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidSetUnitPauseTimer @ 0x1400012E8 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x14000189C (RaidAdapterResumeUnit.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitRequestPowerUp @ 0x140036CD0 (RaUnitRequestPowerUp.c)
 *     RaidCompletionDpcRoutine @ 0x140064FD0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUpForPLDR @ 0x140077638 (RaUnitRequestPowerUpForPLDR.c)
 * Callees:
 *     RaidResumeIoQueue @ 0x140001AF4 (RaidResumeIoQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidResumeUnitQueue(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int8 v4; // cl
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r11
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // rcx
  KIRQL v12; // di
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _OWORD v17[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (unsigned int)RaidResumeIoQueue(a1 + 704);
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  v18 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && (unsigned __int8)RaidIsUnitControlSupported(a1, 31LL) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
    v13 = *(_QWORD *)(a1 + 32);
    v14 = *(_DWORD *)(v13 + 80);
    if ( (v14 & 0x20) == 0 && (v14 & 0x40) == 0 && (v14 & 0x80u) == 0 && (v14 & 0x100) == 0 && *(int *)(v13 + 84) <= 0 )
    {
      v15 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v17[0] = 0x3800000038LL;
      DWORD2(v17[0]) = 3;
      WORD4(v18) = 1;
      HIDWORD(v18) = 4;
      WORD5(v18) = *(_WORD *)(v15 + 56);
      LOWORD(v19) = *(_WORD *)(a1 + 104);
      BYTE2(v19) = *(_BYTE *)(a1 + 106);
      if ( *(_DWORD *)v15 == 1094997074 )
      {
        v16 = v15 + 376;
      }
      else if ( *(_DWORD *)v15 == 1314275652 )
      {
        v16 = v15 + 168;
      }
      else
      {
        v16 = 0LL;
      }
      RaCallMiniportUnitControl(v16, 31LL, v17);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v12);
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  v5 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)*(_DWORD *)(a1 + 104) | (v4 << 8)) << 8)) << 8);
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(int *)(a1 + 744);
    if ( v6 )
    {
      if ( *(_DWORD *)v6 != 1314275652 )
      {
        v8 = *(_DWORD *)(v6 + 4932);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v6 + 4936);
          if ( v9 )
          {
            v10 = v9 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v6 + 4928)) % v8);
            *(_DWORD *)v10 = 5;
            *(_QWORD *)(v10 + 40) = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v10 + 16) = v5;
            *(_QWORD *)(v10 + 8) = retaddr;
            *(_QWORD *)(v10 + 24) = v7;
            *(_QWORD *)(v10 + 32) = v2;
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
