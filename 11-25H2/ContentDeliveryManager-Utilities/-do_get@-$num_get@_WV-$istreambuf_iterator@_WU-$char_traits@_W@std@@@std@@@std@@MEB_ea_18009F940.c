/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18009F940
 * Callers:
 *     <none>
 * Callees:
 *     _Stoullx @ 0x1800057E8 (_Stoullx.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004C824 (--1locale@std@@QEAA@XZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005D954 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x18009ED1C (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  std::locale *v11; // rax
  unsigned __int64 v12; // rbx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  char *v15; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-30h] BYREF
  char v17[32]; // [rsp+48h] [rbp-28h] BYREF

  v15 = 0LL;
  v14 = 0;
  v11 = std::ios_base::getloc(a5, (std::locale *)v16);
  LODWORD(a1) = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(a1, v17, (__int64)a3, a4, 2048, v11);
  std::locale::~locale((std::locale *)v16);
  v12 = Stoullx(v17, &v15, a1, &v14);
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
    *a6 |= 1u;
  if ( v15 == v17 || v14 )
    *a6 |= 2u;
  else
    *a7 = v12;
  *a2 = *a3;
  return a2;
}
