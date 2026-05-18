/*
 * XREFs of sub_18001A2B0 @ 0x18001A2B0
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180017788 @ 0x180017788 (sub_180017788.c)
 *     sub_18001B410 @ 0x18001B410 (sub_18001B410.c)
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001A2B0(__int64 a1, __int64 a2)
{
  __m128 *v4; // rax
  char result; // al
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _QWORD v9[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    std::string::string(v9, "Camera::SetProjectionMatrix() -- ProjectionType must be Custom for this to take effect");
    sub_18001B410(pExceptionObject, v9, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v4 = (__m128 *)sub_18005755C(a1, 1LL, 2LL);
  result = sub_180017788((__m128 *)a2, v4);
  if ( result )
  {
    v6 = *(_OWORD *)(a2 + 16);
    v7 = *(_OWORD *)(a2 + 32);
    v8 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 932) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 948) = v6;
    *(_OWORD *)(a1 + 964) = v7;
    *(_OWORD *)(a1 + 980) = v8;
    return sub_180058AB0(a1, 2LL);
  }
  return result;
}
