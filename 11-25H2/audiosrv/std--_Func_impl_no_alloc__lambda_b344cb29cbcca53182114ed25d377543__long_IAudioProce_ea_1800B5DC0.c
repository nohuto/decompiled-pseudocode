/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b344cb29cbcca53182114ed25d377543__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x1800B5DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_back_with_unused_capacity@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAAEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@$$QEAV21@@Z @ 0x18004297C (--$_Emplace_back_with_unused_capacity@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSu.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B58D4 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioSystemEffects3@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ??$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x1800B5A1C (--$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 std::_Func_impl_no_alloc__lambda_b344cb29cbcca53182114ed25d377543__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call(
        __int64 a1,
        __int64 *a2,
        ...)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  va_list va; // [rsp+40h] [rbp+18h]
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va1; // [rsp+48h] [rbp+20h]
  va_list va2; // [rsp+50h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  v7 = *a2;
  v9 = 0LL;
  if ( v7 )
  {
    v9 = 0LL;
    if ( wil::try_com_query_to<IAudioSystemEffects3,IAudioProcessingObject * &>((__int64 *)va, (__int64)va1) )
    {
      v3 = *(_QWORD *)(a1 + 8);
      v7 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v4 = *(_QWORD *)(v3 + 96);
      v5 = v3 + 88;
      if ( v4 == *(_QWORD *)(v3 + 104) )
        std::vector<wil::com_ptr_t<IAudioSystemEffects3,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSystemEffects3,wil::err_returncode_policy>>(
          v5,
          v4,
          (__int64 *)va);
      else
        std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_back_with_unused_capacity<std::unique_ptr<CAppSubmixClient>>(
          v5,
          (__int64)va);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)va);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)va1);
  return 0LL;
}
