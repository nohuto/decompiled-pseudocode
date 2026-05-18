/*
 * XREFs of sub_1800BD870 @ 0x1800BD870
 * Callers:
 *     sub_1800BD81C @ 0x1800BD81C (sub_1800BD81C.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800C1C48 @ 0x1800C1C48 (sub_1800C1C48.c)
 *     sub_1800C3B60 @ 0x1800C3B60 (sub_1800C3B60.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_1800BCDD8 @ 0x1800BCDD8 (sub_1800BCDD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BD870(int a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-51h] BYREF
  _OWORD pExceptionObject[6]; // [rsp+80h] [rbp-29h] BYREF
  int v10; // [rsp+E0h] [rbp+37h]

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_18018D470);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_18018D480);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_18018D420);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_18018D460);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_18018D490);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_18018D4B0);
  v10 = 107;
  v2 = *((_DWORD *)pExceptionObject + a1);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( !v3 )
      return sub_1800BCDD8(v2);
    if ( v3 != 1 )
    {
      std::string::string(v8, "Unsupported color space");
      v4 = std::string::string(
             v7,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\Inc\\NativeRendererD3D11\\D3DUtils.h");
      sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  return v2;
}
