/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180020754
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18000F540 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180010F70 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180013660 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x180016BF0 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x18001A580 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18003E274 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x180041F78 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __fastcall operator new[](SIZE_T a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
