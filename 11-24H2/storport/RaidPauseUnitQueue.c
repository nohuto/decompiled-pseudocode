/*
 * XREFs of RaidPauseUnitQueue @ 0x140014D40
 * Callers:
 *     StorPortPauseDevice @ 0x140014A50 (StorPortPauseDevice.c)
 *     RaUnitRequestPowerUp @ 0x140036CD0 (RaUnitRequestPowerUp.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUpForPLDR @ 0x140077638 (RaUnitRequestPowerUpForPLDR.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     RaidPauseDeviceQueue @ 0x140014E8C (RaidPauseDeviceQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPauseUnitQueue(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  int v4; // eax
  int v5; // r8d
  int v6; // ecx
  __int64 result; // rax
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  KIRQL v15; // di
  __int64 v16; // rdx
  char v17; // al
  char v18; // cl
  char v19; // al
  __int64 v20; // rcx
  _OWORD v21[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  RaidPauseDeviceQueue(a1 + 720);
  memset(v21, 0, sizeof(v21));
  v23 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && (unsigned __int8)RaidIsUnitControlSupported(a1, 31LL) )
  {
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
    v16 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)&v21[0] = 0x3800000038LL;
    v17 = *(_BYTE *)(a1 + 105);
    DWORD2(v21[0]) = 2;
    WORD4(v22) = 1;
    HIDWORD(v22) = 4;
    WORD5(v22) = *(_WORD *)(v16 + 56);
    v18 = *(_BYTE *)(a1 + 104);
    BYTE1(v23) = v17;
    v19 = *(_BYTE *)(a1 + 106);
    LOBYTE(v23) = v18;
    BYTE2(v23) = v19;
    if ( *(_DWORD *)v16 == 1094997074 )
    {
      v20 = v16 + 376;
    }
    else if ( *(_DWORD *)v16 == 1314275652 )
    {
      v20 = v16 + 168;
    }
    else
    {
      v20 = 0LL;
    }
    RaCallMiniportUnitControl(v20, 31LL, v21);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v15);
  }
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 56);
  else
    v3 = -1;
  v4 = *(_DWORD *)(a1 + 104);
  v5 = (unsigned __int8)v4 | (v3 << 8);
  v6 = BYTE2(v4);
  result = qword_140170460;
  v8 = v6 | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (v5 << 8)) << 8);
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(int *)(a1 + 744);
    if ( v9 )
    {
      if ( *(_DWORD *)v9 != 1314275652 )
      {
        v11 = *(_DWORD *)(v9 + 4932);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v9 + 4936);
          if ( v12 )
          {
            v13 = v12 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v9 + 4928)) % v11);
            *(_DWORD *)v13 = 4;
            v14 = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v13 + 32) = 0LL;
            *(_QWORD *)(v13 + 40) = v14;
            result = v8;
            *(_QWORD *)(v13 + 16) = v8;
            *(_QWORD *)(v13 + 8) = retaddr;
            *(_QWORD *)(v13 + 24) = v10;
          }
        }
      }
    }
  }
  return result;
}
