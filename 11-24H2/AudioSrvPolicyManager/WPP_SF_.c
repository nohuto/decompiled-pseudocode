/*
 * XREFs of WPP_SF_ @ 0x18002B438
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000E0E0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180031734 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x180031824 (-CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180034BF0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180034D48 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z @ 0x1800368B4 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180041660 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
