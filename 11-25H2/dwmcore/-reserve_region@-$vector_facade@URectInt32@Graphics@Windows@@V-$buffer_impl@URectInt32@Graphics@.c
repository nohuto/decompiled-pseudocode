/*
 * XREFs of ?reserve_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURectInt32@Graphics@Windows@@_K0@Z @ 0x18024C7A4
 * Callers:
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180171CE0 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18024C8B8 (-ensure_extra_capacity@-$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_polic.c)
 *     ??$move_backward@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURectInt32@Graphics@Windows@@@stdext@@V?$move_iterator@PEAURectInt32@Graphics@Windows@@@0@0V12@@Z @ 0x1802C778C (--$move_backward@V-$move_iterator@PEAURectInt32@Graphics@Windows@@@std@@V-$checked_array_iterato.c)
 */

__int64 __fastcall detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  _OWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _OWORD *v11; // r9
  _OWORD *v12; // rcx
  __int64 v13; // rbx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v4 = *a1;
  v5 = a1[1];
  v6 = (v5 - *a1) >> 4;
  v7 = v6 - a2;
  v8 = (_OWORD *)(*a1 + 16 * v6);
  if ( !v8 )
    goto LABEL_6;
  v9 = v6 - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = 16 * v9;
  v11 = (_OWORD *)(v5 - v10);
  if ( v5 != v5 - v10 )
  {
    v12 = (_OWORD *)(v5 - 16);
    *v8 = *v12;
    if ( v12 != v11 )
LABEL_6:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 <= 1 )
  {
    v13 = 16 * a2;
  }
  else
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_6;
    v15[1] = v6;
    v15[2] = v6;
    v13 = 16 * a2;
    v15[0] = v4;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move_backward<std::move_iterator<Windows::Graphics::RectInt32 *>,stdext::checked_array_iterator<Windows::Graphics::RectInt32 *>>)(
      v16,
      v13 + v4,
      v4 + 16 * v6 - 16,
      v15);
  }
  a1[1] += 16LL;
  return v13 + v4;
}
