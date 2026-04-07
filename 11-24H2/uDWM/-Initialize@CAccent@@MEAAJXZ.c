/*
 * XREFs of ?Initialize@CAccent@@MEAAJXZ @ 0x1800897D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 64) = 6;
  *((_BYTE *)this + 272) = 0;
  v1 = CContainerVisual::Initialize((struct CContainerVisualProxy **)this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x59u, 0LL);
  return v2;
}
