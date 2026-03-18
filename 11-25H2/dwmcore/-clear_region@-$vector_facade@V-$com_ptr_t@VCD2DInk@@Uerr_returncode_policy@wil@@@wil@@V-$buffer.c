/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801F78E8
 * Callers:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801F78C0 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180282810 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@EEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801F79B4 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@std@@V-.c)
 */

void __fastcall detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // r11
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rbx
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v9 = v7 >> 3;
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_11;
  }
  v3 = (__int64 *)(v4 + 8 * v9);
  if ( a2 + a3 != v9 )
  {
    if ( !a2 )
      goto LABEL_8;
    if ( !v4 )
      goto LABEL_9;
    if ( a2 >= 0 )
    {
      if ( v9 >= a2 )
        goto LABEL_8;
LABEL_9:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_11:
    if ( v10 )
      goto LABEL_9;
LABEL_8:
    v12[2] = v10;
    v12[0] = v4;
    v12[1] = v9;
    ((void (__fastcall *)(_BYTE *, __int64, __int64 *, _QWORD *))std::move<std::move_iterator<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy> *>>)(
      v13,
      v4 + 8 * v8,
      v3,
      v12);
  }
  v11 = 8 * a3;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    &v3[v11 / 0xFFFFFFFFFFFFFFF8uLL],
    v3);
  a1[1] -= v11;
}
