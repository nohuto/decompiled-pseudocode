/*
 * XREFs of ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180075200
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::HideGhost(CContainerVisual **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 922) )
  {
    if ( this[4] )
    {
      v3 = CContainerVisual::RemoveChild(
             this[4],
             (struct CVisual *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)));
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x2B4u, 0LL);
    }
  }
  return v1;
}
