/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180059598
 * Callers:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001BBA8 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005ABA8 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x1800489AC (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005BFB8 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

_QWORD *__fastcall std::wstring::_Copy(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r15
  unsigned __int64 *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  _QWORD *result; // rax
  __int64 *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v16; // [rsp+20h] [rbp-48h]
  _QWORD *v20; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a1;
  v5 = a1;
  v16 = a1;
  v6 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = a1[3];
    v8 = v7 >> 1;
    if ( v7 >> 1 > v6 / 3 )
    {
      v6 = v8 + v7;
      if ( v7 > 0x7FFFFFFFFFFFFFFELL - v8 )
        v6 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v6 = a2;
  }
  try
  {
    v9 = std::_Allocate<unsigned short>(v6 + 1);
  }
  catch ( ... )
  {
    try
    {
      v20 = std::_Allocate<unsigned short>(a2 + 1);
    }
    catch ( ... )
    {
      v14 = &v15;
      LOBYTE(v14) = 1;
      std::wstring::_Tidy(a1, v14, 0LL);
      throw;
    }
    v4 = a1;
    v3 = a3;
    v6 = a2;
    v9 = v20;
    v5 = v16;
  }
  if ( v3 )
  {
    v10 = v4 + 3;
    if ( v4[3] < 8uLL )
      v11 = v4;
    else
      v11 = (_QWORD *)*v4;
    std::char_traits<wchar_t>::copy(v9, v11, v3);
  }
  else
  {
    v10 = v5 + 3;
  }
  LOBYTE(v12) = 1;
  std::wstring::_Tidy(v4, v12, 0LL);
  *v4 = v9;
  *v10 = v6;
  result = v4;
  if ( v6 >= 8 )
    result = v9;
  v4[2] = v3;
  *((_WORD *)result + v3) = 0;
  return result;
}
