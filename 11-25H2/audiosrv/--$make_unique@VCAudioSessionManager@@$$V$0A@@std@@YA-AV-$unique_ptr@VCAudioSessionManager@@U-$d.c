/*
 * XREFs of ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x1800A56D0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18008AFF0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800A70FC (--0CAudioSessionManager@@QEAA@XZ.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionManager **__fastcall std::make_unique<CAudioSessionManager,,0>(CAudioSessionManager **a1)
{
  CAudioSessionManager *v2; // rbx
  CAudioSessionManager *v3; // rax
  CAudioSessionManager *v4; // rsi

  v2 = 0LL;
  v3 = (CAudioSessionManager *)operator new(0x130uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x130uLL);
    v2 = CAudioSessionManager::CAudioSessionManager(v4);
  }
  *a1 = v2;
  return a1;
}
