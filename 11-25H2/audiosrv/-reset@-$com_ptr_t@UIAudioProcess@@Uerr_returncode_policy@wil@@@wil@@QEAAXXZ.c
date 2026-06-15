/*
 * XREFs of ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18004C900 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z @ 0x180069B88 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007BAA0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     AudioServerCreateStream @ 0x18008D370 (AudioServerCreateStream.c)
 *     AudioServerGetMixFormat @ 0x18008D5F0 (AudioServerGetMixFormat.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18009F694 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 *     std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call @ 0x1800B2570 (std--_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___--_Do.c)
 *     asm_GetApplicationSubmixContext @ 0x1800B2C90 (asm_GetApplicationSubmixContext.c)
 *     asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x1800B2DC0 (asm_GetApplicationSubmixContextForExcludedProcessTree.c)
 *     asm_GetApplicationSubmixContextForProcessTree @ 0x1800B2F00 (asm_GetApplicationSubmixContextForProcessTree.c)
 *     asm_GetApplicationSubmixContextFromPID @ 0x1800B3040 (asm_GetApplicationSubmixContextFromPID.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BC790 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x1800F630C (-RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z.c)
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x180105CA0 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?PreStartStream@CVADServer@@UEAAJXZ @ 0x180106EB0 (-PreStartStream@CVADServer@@UEAAJXZ.c)
 *     ?RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ @ 0x180107324 (-RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x180107A14 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x180107C10 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 *     ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x1801083CC (-StartStream_Internal@CVADServer@@IEAAJXZ.c)
 *     ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180108548 (-StopStream_Internal@CVADServer@@IEAAJXZ.c)
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180118AAC (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180119530 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180119C20 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011B878 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011DA74 (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18011DFC4 (-GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x18011EB3C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18011F328 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
