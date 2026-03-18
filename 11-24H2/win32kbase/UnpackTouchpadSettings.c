/*
 * XREFs of UnpackTouchpadSettings @ 0x140213E98
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 *     EditionxxxBroadcastSPIChange @ 0x14023B278 (EditionxxxBroadcastSPIChange.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

SIZE_T __fastcall UnpackTouchpadSettings(_DWORD *a1)
{
  unsigned int v1; // r9d
  __int32 v2; // eax
  int v3; // eax
  __int64 UserSessionState; // rax
  SIZE_T result; // rax
  __int64 v6; // rdx
  __m128i Source1; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h]

  v1 = a1[10];
  v2 = a1[6];
  Source1 = 0LL;
  Source1.m128i_i32[0] = v2;
  Source1.m128i_i32[2] = a1[7];
  v3 = a1[8];
  v8 = 0LL;
  DWORD1(v8) = v3;
  DWORD2(v8) = a1[9];
  LODWORD(v8) = ((v1 & 2) << 8) & 0xFE02 | ((8 * (v1 & 0x30)) | ((v1 & 0x80 | ((v1 & 0x240 | ((v1 & 0x400 | (v1 >> 1) & 0x80) >> 3)) >> 1)) >> 3)) & 0xFFFFFFBF | (v1 >> 7) & 0x40;
  Source1.m128i_i32[3] = ((8 * (v1 & 1)) | ((v1 & 4 | (v1 >> 2) & 2) >> 1)) & 0xFFFFFFEB | ((v1 & 0x800 | (v1 >> 3) & 0x200) >> 7);
  v9 = 0LL;
  UserSessionState = W32GetUserSessionState(Source1.m128i_u32[3]);
  result = RtlCompareMemory(&Source1, (const void *)(UserSessionState + 16768), 0x30uLL);
  if ( result != 48 )
  {
    SetPrecisionTouchPadConfiguration(&Source1, 1);
    return EditionxxxBroadcastSPIChange(175LL, v6, 0LL);
  }
  return result;
}
