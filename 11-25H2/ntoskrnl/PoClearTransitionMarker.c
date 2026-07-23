/*
 * XREFs of PoClearTransitionMarker @ 0x14073CF8C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x14048AC80 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x1404F7080 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x14073D6BC (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140773B64 (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlUnlockBootStatusData @ 0x140A1CA60 (RtlUnlockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140A72DB4 (RtlpSystemBootStatusRequest.c)
 *     RtlLockBootStatusData @ 0x140A7A490 (RtlLockBootStatusData.c)
 */

__int64 PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  char v1; // di
  ULONG32 v2; // eax
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
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140E66FB0 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  xmmword_140E67018 = 0LL;
  HIDWORD(xmmword_140E66FB0) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140F071EC = 3;
  *(_QWORD *)&xmmword_140E66FB0 = MEMORY[0xFFFFF78000000014];
  v2 = RtlComputeCrc32(0, &xmmword_140E66FB0, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140E66FB0) = v2;
  RtlpSystemBootStatusRequest(32LL, &v7, v0);
  PopReleaseRwLock(&PopBsdUpdateLock);
  LOBYTE(v3) = v1;
  return PopRecordLongPowerButtonPressDetected(0LL, v3);
}
