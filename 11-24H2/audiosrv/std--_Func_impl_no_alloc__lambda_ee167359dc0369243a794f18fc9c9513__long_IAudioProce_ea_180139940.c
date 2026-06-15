/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ee167359dc0369243a794f18fc9c9513__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x180139940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x1800B4E0C (--$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 std::_Func_impl_no_alloc__lambda_ee167359dc0369243a794f18fc9c9513__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call(
        __int64 a1,
        __int64 *a2,
        ...)
{
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  va_list va; // [rsp+40h] [rbp+18h]
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va1; // [rsp+48h] [rbp+20h]
  va_list va2; // [rsp+50h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  v3 = *a2;
  v5 = *a2;
  v7 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL) )
  {
    if ( v3 )
    {
      v7 = 0LL;
      if ( wil::try_com_query_to<IAudioSystemEffects3,IAudioProcessingObject * &>((__int64 *)va, (__int64)va1) )
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL) = 1;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)va1);
  return 0LL;
}
