/*
 * XREFs of ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800206B8
 * Callers:
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800203E0 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180081050 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180081320 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180081490 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x18010C970 (-GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z.c)
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x18010DA90 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18010E3C0 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 *     ?SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z @ 0x18010E630 (-SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z.c)
 *     ?SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z @ 0x18010E780 (-SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x18010E8D0 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x18010EA00 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::ValidateStreamHandle(CVADServer *this, __int64 a2)
{
  __int64 v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 22);
  if ( *(_BYTE *)(v2 + 528) )
    return 2289827960LL;
  if ( a2 == *(_QWORD *)(v2 + 48) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128C,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
