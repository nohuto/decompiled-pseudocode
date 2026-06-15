/*
 * XREFs of ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EF7C
 * Callers:
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180014F70 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180017E60 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z.c)
 *     ??1VirtualAudioStreamInfo@@UEAA@XZ @ 0x180028684 (--1VirtualAudioStreamInfo@@UEAA@XZ.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18002ADD0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ??1CProcess@@MEAA@XZ @ 0x1800333C4 (--1CProcess@@MEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18003FE30 (--1TSSession@@QEAA@XZ.c)
 *     ??1CEndpointVolumeStateManager@@UEAA@XZ @ 0x180046508 (--1CEndpointVolumeStateManager@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
