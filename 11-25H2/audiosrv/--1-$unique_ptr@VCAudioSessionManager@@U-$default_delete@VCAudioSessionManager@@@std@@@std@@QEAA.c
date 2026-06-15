/*
 * XREFs of ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800A6EB8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18008AFF0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x1800F9DDC (--1CEndpointStore@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800C7FE4 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CAudioSessionManager>::operator()();
  return result;
}
