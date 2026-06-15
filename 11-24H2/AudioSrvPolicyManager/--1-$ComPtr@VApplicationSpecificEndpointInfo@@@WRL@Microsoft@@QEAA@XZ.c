/*
 * XREFs of ??1?$ComPtr@VApplicationSpecificEndpointInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x1800283FC
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$11 @ 0x180049AF6 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$11.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAastPreStartContext_IAudioStreamPreStartContext_IAudioStreamInfo___&__::_1_::dtor$1 @ 0x18004B1E3 (_Microsoft--WRL--Details--MakeAndInitialize_CAastPreStartContext_IAudioStreamPreStartContext_IAu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
