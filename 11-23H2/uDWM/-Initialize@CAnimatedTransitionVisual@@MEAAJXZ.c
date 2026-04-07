/*
 * XREFs of ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180055A30
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180055A68 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Initialize(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x86u, 0LL);
  else
    CVisual::DisablePrefiltering(this);
  return v3;
}
