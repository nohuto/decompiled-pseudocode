/*
 * XREFs of sub_1800CDC30 @ 0x1800CDC30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18001D37C @ 0x18001D37C (sub_18001D37C.c)
 *     sub_18001E774 @ 0x18001E774 (sub_18001E774.c)
 *     sub_18001E97C @ 0x18001E97C (sub_18001E97C.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800CDC30(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  __int16 v8; // r8
  _WORD *v9; // rax
  __int64 v10; // r11
  __int64 v11; // rax
  _WORD v13[8]; // [rsp+20h] [rbp-29h] BYREF
  _OWORD *v14; // [rsp+30h] [rbp-19h]
  __int128 v15; // [rsp+38h] [rbp-11h] BYREF
  __m128i si128; // [rsp+48h] [rbp-1h]
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp+Fh] BYREF

  v14 = a2;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    std::string::string(&v15, "IConfigurationManager::GetDomain() -- empty string is not a valid property name");
    sub_18001D37C(pExceptionObject, (__int64)&v15);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  if ( *(_WORD *)sub_1800131AC(a3) == 47 )
  {
    v5 = sub_1800131AC(v4);
    v13[0] = v8;
    if ( v6 > 1 && (v9 = sub_18001E774((_WORD *)(v5 + 2), v6 - 1, v13)) != 0LL )
      v11 = ((__int64)v9 - v10) >> 1;
    else
      v11 = -1LL;
    if ( v11 == -1 )
    {
      std::string::string(
        &v15,
        "IConfigurationManager::GetDomain() -- property domain must begin and end with a slash, e.g. /CustomDomain/Category.Value");
      sub_18001D37C(pExceptionObject, (__int64)&v15);
      throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
    }
    sub_18001E97C(v7, (__int64)&v15, 1uLL, v11 - 1);
    *a2 = v15;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18018D390);
    LOWORD(v15) = 0;
    sub_180013228((__int64)&v15);
  }
  else
  {
    sub_180012444((__int64)a2, (__int64)&unk_1801C9900);
  }
  return a2;
}
