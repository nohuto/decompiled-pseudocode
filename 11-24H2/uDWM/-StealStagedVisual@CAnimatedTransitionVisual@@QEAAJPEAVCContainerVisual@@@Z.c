/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCContainerVisual@@@Z @ 0x1800A52C4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CContainerVisual **this, CContainerVisual **a2)
{
  unsigned int v2; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  struct tagPOINT v9; // rbx
  LONG y; // r15d
  struct tagPOINT *v11; // rcx
  struct tagPOINT v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    CMILRefCountBase::AddRef((CMILRefCountBase *)a2);
  v5 = CContainerVisual::RemoveChild(a2[3], (struct CVisual *)a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x37Cu, 0LL);
    goto LABEL_14;
  }
  if ( *((_BYTE *)this + 928) )
  {
    v7 = CContainerVisual::AddChild(this[85], (struct CVisual *)a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x382u, 0LL);
      goto LABEL_14;
    }
  }
  else
  {
    v8 = CContainerVisual::AddChild((CContainerVisual *)(this + 1), (struct CVisual *)a2);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x386u, 0LL);
      goto LABEL_14;
    }
  }
  v9 = *(struct tagPOINT *)(*(_QWORD *)a2[19] + 64LL);
  v13 = v9;
  if ( *((_DWORD *)a2 + 44) )
  {
    y = v13.y;
    do
    {
      v11 = (struct tagPOINT *)*((_QWORD *)a2[19] + v2);
      v13 = v11[8];
      v13.x -= v9.x;
      v13.y -= y;
      CVisual::SetOffset(v11, &v13);
      ++v2;
    }
    while ( v2 < *((_DWORD *)a2 + 44) );
  }
  *((_BYTE *)this + 927) = 1;
LABEL_14:
  CBaseObject::Release((CBaseObject *)a2);
  return v6;
}
