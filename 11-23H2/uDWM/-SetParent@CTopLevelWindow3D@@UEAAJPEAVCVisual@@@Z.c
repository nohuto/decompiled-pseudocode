/*
 * XREFs of ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x1800181F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180018250 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::SetParent(CTopLevelWindow3D *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax

  v4 = CVisual::SetParent(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8C6u, 0LL);
  }
  else if ( !a2 )
  {
    v7 = CTopLevelWindow3D::StopAnimation(this);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x8CBu, 0LL);
  }
  return v5;
}
