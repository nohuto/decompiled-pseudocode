/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x18002F330
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x18002F81C (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(struct CContainerVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CContainerVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x3Du, 0LL);
  return v2;
}
