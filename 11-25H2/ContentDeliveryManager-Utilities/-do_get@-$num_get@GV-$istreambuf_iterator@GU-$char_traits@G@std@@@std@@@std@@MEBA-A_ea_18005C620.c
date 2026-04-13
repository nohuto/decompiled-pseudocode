/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18005C620
 * Callers:
 *     <none>
 * Callees:
 *     _Stoldx @ 0x18000606C (_Stoldx.c)
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180059BE8 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        double *a7)
{
  unsigned int v10; // eax
  double v11; // xmm0_8
  double v12; // xmm6_8
  _OWORD *result; // rax
  int v14; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  char *v16; // [rsp+40h] [rbp-59h] BYREF
  char v17[64]; // [rsp+48h] [rbp-51h] BYREF

  v16 = 0LL;
  v15 = 0;
  v14 = 0;
  v10 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffld(
          a1,
          v17,
          (__int64)a3,
          a4,
          a5,
          (__int64)&v14);
  *(_QWORD *)&v11 = Stoldx((__int64)v17, (int)&v16, v10, &v15).m128_u64[0];
  v12 = v11;
  if ( v14 )
    v12 = ldexp(v11, 4 * v14);
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v16 == v17 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  result = a2;
  *a2 = *a3;
  return result;
}
