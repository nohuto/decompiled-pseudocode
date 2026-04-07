/*
 * XREFs of ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18007BCE4
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18007BB3C (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180085E18 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CMagnifierControl::Initialize(struct CContainerVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax

  v2 = CContainerVisual::Create(this + 4);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x79u, 0LL);
  }
  else
  {
    v4 = CContainerVisual::AddChild(this[4], this[5]);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x7Bu, 0LL);
    }
    else
    {
      v5 = CFullScreenMagnifier::Create(this[3], this + 6);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x83u, 0LL);
    }
  }
  return v3;
}
