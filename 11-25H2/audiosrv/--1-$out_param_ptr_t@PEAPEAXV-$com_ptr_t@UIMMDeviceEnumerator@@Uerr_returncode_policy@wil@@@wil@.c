/*
 * XREFs of ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIMMDeviceEnumerator@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180100010
 * Callers:
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180100080 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IMMDeviceEnumerator,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IMMDeviceEnumerator,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    result = *a1;
    v3 = **a1;
    *result = (__int64)v1;
    if ( v3 )
      return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
