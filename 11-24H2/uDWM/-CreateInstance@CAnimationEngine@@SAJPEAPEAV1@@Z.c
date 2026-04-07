/*
 * XREFs of ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180084144
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAnimationEngine@@AEAA@XZ @ 0x1800841B0 (--0CAnimationEngine@@AEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAnimationEngine::CreateInstance(struct CAnimationEngine **a1)
{
  unsigned int v2; // ebx
  CAnimationEngine *v3; // rax
  struct CAnimationEngine *v5; // rax

  v2 = 0;
  v3 = (CAnimationEngine *)DefaultHeap::AllocClear(0x80uLL);
  if ( v3 && (v5 = CAnimationEngine::CAnimationEngine(v3)) != 0LL )
  {
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x40u, 0LL);
  }
  return v2;
}
