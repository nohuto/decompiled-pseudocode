/*
 * XREFs of sub_1800BD710 @ 0x1800BD710
 * Callers:
 *     sub_1800BD6BC @ 0x1800BD6BC (sub_1800BD6BC.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     sub_1800C1AE8 @ 0x1800C1AE8 (sub_1800C1AE8.c)
 *     sub_1800C3A00 @ 0x1800C3A00 (sub_1800C3A00.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_1800BCC78 @ 0x1800BCC78 (sub_1800BCC78.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BD710(int a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-51h] BYREF
  _OWORD pExceptionObject[6]; // [rsp+80h] [rbp-29h] BYREF
  int v10; // [rsp+E0h] [rbp+37h]

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_18018C480);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_18018C490);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_18018C430);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_18018C470);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_18018C4A0);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_18018C4C0);
  v10 = 107;
  v2 = *((_DWORD *)pExceptionObject + a1);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( !v3 )
      return sub_1800BCC78(v2);
    if ( v3 != 1 )
    {
      std::string::string(v8, "Unsupported color space");
      v4 = std::string::string(
             v7,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\Inc\\NativeRendererD3D11\\D3DUtils.h");
      sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  return v2;
}
