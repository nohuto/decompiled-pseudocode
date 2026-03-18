/*
 * XREFs of PoClearTransitionMarker @ 0x140748F9C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x140460AE0 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x1404F9880 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140749718 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140782E14 (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlUnlockBootStatusData @ 0x140A3F7A0 (RtlUnlockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140A75404 (RtlpSystemBootStatusRequest.c)
 *     RtlLockBootStatusData @ 0x140A7C200 (RtlLockBootStatusData.c)
 */

__int64 PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  char v1; // di
  int v2; // eax
  __int64 v3; // rdx
  char v5; // [rsp+20h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+28h] [rbp-11h] BYREF
  int v7; // [rsp+30h] [rbp-9h] BYREF
  __int128 *v8; // [rsp+38h] [rbp-1h]
  int v9; // [rsp+40h] [rbp+7h]
  int v10; // [rsp+48h] [rbp+Fh]
  __int128 *v11; // [rsp+50h] [rbp+17h]
  int v12; // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+60h] [rbp+27h]
  char *v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+70h] [rbp+37h]

  FileHandle = 0LL;
  v5 = 0;
  if ( (int)RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v7 = 7;
  v8 = &PopBsdPowerTransition;
  v0 = 2;
  v9 = 32;
  v11 = &PopBsdPowerTransitionExtension;
  v1 = 1;
  v10 = 16;
  v12 = 32;
  if ( ExIsSoftBoot() )
  {
    v13 = 5;
    v14 = &v5;
    v1 = 0;
    v0 = 3;
    v15 = 1;
  }
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140E67258 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  xmmword_140E672F0 = 0LL;
  HIDWORD(xmmword_140E67258) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140F0778C = 3;
  *(_QWORD *)&xmmword_140E67258 = MEMORY[0xFFFFF78000000014];
  v2 = RtlComputeCrc32(0LL, (__int64)&xmmword_140E67258, 8LL);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140E67258) = v2;
  RtlpSystemBootStatusRequest(32LL, &v7, v0);
  PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
  LOBYTE(v3) = v1;
  return PopRecordLongPowerButtonPressDetected(0LL, v3);
}
