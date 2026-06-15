/*
 * XREFs of ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x180011A30
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180011620 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180045FF0 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const unsigned __int16 *__fastcall ApplicationSpecificEndpointInfo::GetApplicationName(struct IAudioProcess *a1)
{
  const unsigned __int16 *result; // rax

  result = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 72LL))(a1);
  if ( !result || !*result )
    return (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 80LL))(a1);
  return result;
}
