/*
 * XREFs of ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800A3274
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18007CE04 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x1800FD068 (--1CEndpointStore@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800C75E4 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CAudioSessionManager>::operator()();
  return result;
}
