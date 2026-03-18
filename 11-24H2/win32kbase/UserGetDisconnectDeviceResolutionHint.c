/*
 * XREFs of UserGetDisconnectDeviceResolutionHint @ 0x1401B3574
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x140012FAC (DrvGetDisplayDriverParameters.c)
 *     ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x14017A260 (-StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     GetPhysicalScreenRect @ 0x14014E974 (GetPhysicalScreenRect.c)
 */

__int64 __fastcall UserGetDisconnectDeviceResolutionHint(_DWORD *a1)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // xmm0_8
  __int64 v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(__m128i *)GetPhysicalScreenRect(&v6);
  a1[18] = 1835008;
  v3 = _mm_srli_si128(v2, 8).m128i_u64[0];
  a1[43] = v3 - v2.m128i_i32[0];
  a1[44] = HIDWORD(v3) - v2.m128i_i32[1];
  result = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v4) + 19928) + 7003LL);
  a1[42] = result;
  return result;
}
