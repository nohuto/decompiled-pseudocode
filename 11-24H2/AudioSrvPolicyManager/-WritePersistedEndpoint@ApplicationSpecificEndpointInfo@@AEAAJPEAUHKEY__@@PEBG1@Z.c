/*
 * XREFs of ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x1800465CC
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180045150 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180046220 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18003EA00 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::WritePersistedEndpoint(
        ApplicationSpecificEndpointInfo *this,
        HKEY a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v6; // eax
  const BYTE *lpData; // r11
  unsigned int v8; // ebx
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 cbData; // [rsp+40h] [rbp+8h] BYREF

  cbData = 0LL;
  v6 = StringCbLengthW(a4, 0x104uLL, &cbData);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = RegSetValueExW(a2, a3, 0, 1u, lpData, cbData);
    if ( v10 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x354,
               (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
               (const char *)v10);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x350,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v6);
    return v8;
  }
}
