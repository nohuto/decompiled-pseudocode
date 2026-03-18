/*
 * XREFs of ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x1802D374C
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800843A0 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@Z @ 0x18024CC4C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@_J@std.c)
 *     ?ensure_extra_capacity@?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802D3610 (-ensure_extra_capacity@-$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_exp.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v6; // rbp
  char *v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // r11
  char *v13; // r8
  _OWORD *v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  signed __int64 v18; // r15
  __int64 v19; // rax
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = (char *)*a1;
  v7 = (char *)a1[1];
  v8 = (v7 - (_BYTE *)*a1) >> 4;
  v9 = v8 - a2;
  v10 = (__int64)*a1 + 16 * v8;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_16;
  v11 = (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = &v7[-16 * v11];
  if ( v7 != v12 )
  {
    v13 = v7 - 16;
    v14 = (_OWORD *)(16 * a3 + v10);
    v15 = a3;
    if ( v10 )
    {
      while ( v15 )
      {
        --v15;
        --v14;
        if ( v15 >= a3 )
          break;
        *v14 = *(_OWORD *)v13;
        if ( v13 == v12 )
          goto LABEL_12;
        v13 -= 16;
      }
    }
LABEL_16:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_12:
  if ( v9 <= a3 )
  {
    v16 = 16 * a2;
    v17 = 16 * a3;
  }
  else
  {
    if ( v8 && (!v6 || v8 < 0) )
      goto LABEL_16;
    v21[1] = v8;
    v21[2] = v8;
    v16 = 16 * a2;
    v17 = 16 * a3;
    v21[0] = v6;
    v18 = 16 * v8 - v17 - v16;
    v19 = std::_Get_unwrapped_n<stdext::checked_array_iterator<Windows::Graphics::RectInt32 *> &,__int64>(
            v21,
            -(v18 >> 4));
    memmove_0((void *)(v19 - v18), &v6[v16], v18);
  }
  a1[1] = (char *)a1[1] + v17;
  return &v6[v16];
}
