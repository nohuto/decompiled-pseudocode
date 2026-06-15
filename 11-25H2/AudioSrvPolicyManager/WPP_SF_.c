/*
 * XREFs of WPP_SF_ @ 0x18002DA28
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000E460 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180034114 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x180034204 (-CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x1800375D0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180037728 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z @ 0x18003929C (-ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180043E80 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
