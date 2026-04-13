/*
 * XREFs of ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WN@Z @ 0x18001AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Ffmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z @ 0x180006D70 (-_Ffmt@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z.c)
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x180010ED4 (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     sprintf_s_0 @ 0x1800227A8 (sprintf_s_0.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

__int64 __fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        unsigned __int16 a5,
        double a6)
{
  __int64 v6; // rbx
  int v8; // r15d
  double v11; // xmm6_8
  int v12; // ebp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // rbx
  const char *v16; // rax
  int v17; // eax
  int v19[4]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-E8h] BYREF
  char Buffer[112]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = *(_QWORD *)(a4 + 32);
  v8 = a1;
  if ( v6 <= 0 && (*(_DWORD *)(a4 + 24) & 0x2000) == 0 )
    v6 = 6LL;
  v11 = a6;
  v12 = v6;
  if ( v6 > 36 )
    v12 = 36;
  v13 = 0LL;
  v14 = 0LL;
  v15 = v6 - v12;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x2000 && a6 * 0.5 != a6 )
  {
    if ( a6 < 0.0 )
      *(_QWORD *)&v11 = *(_QWORD *)&a6 ^ _xmm;
    while ( v11 >= 1.0e35 && v13 < 0x1388 )
    {
      v11 = v11 / 1.0e10;
      v13 += 10LL;
    }
    if ( v11 > 0.0 && v15 >= 10 )
    {
      do
      {
        if ( v11 > 1.0e-35 )
          break;
        if ( v14 >= 0x1388 )
          break;
        v15 -= 10LL;
        v11 = v11 * 1.0e10;
        v14 += 10LL;
      }
      while ( v15 >= 10 );
    }
    if ( a6 < 0.0 )
      *(_QWORD *)&v11 ^= _xmm;
  }
  v16 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Ffmt(a1, v20, 0, *(_DWORD *)(a4 + 24));
  v17 = sprintf_s_0(Buffer, 0x6CuLL, v16, (unsigned int)v12, v11);
  *(_OWORD *)v19 = *a3;
  std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Fput(
    v8,
    a2,
    (__int128 *)v19,
    a4,
    a5,
    Buffer,
    v13,
    v14,
    v15,
    v17);
  return a2;
}
