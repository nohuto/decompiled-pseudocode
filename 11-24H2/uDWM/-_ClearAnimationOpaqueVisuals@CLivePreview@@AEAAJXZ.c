/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18004942C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180048D00 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C7A54 (--1CLivePreview@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18002D8B0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // r14
  CContainerVisual *v8; // rcx
  __int64 v10; // rsi
  CContainerVisual **v11; // rbx
  int v12; // eax
  CBaseObject *v13; // rcx
  struct CVisual *v14; // rdx
  CContainerVisual *v15; // rcx
  int v16; // eax

  v3 = (char *)this + 296;
  v4 = 0;
  v6 = *((_DWORD *)this + 80) - 1;
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = 48LL * v6;
    do
    {
      v11 = *(CContainerVisual ***)(v10 + *(_QWORD *)v3);
      CContainerVisual::RenderRecursive((CContainerVisual *)v11, a2, a3);
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)v11);
      v12 = CContainerVisual::RemoveChild(v11[3], (struct CVisual *)v11);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x89u, 0LL);
      v13 = *(CBaseObject **)(*(_QWORD *)v3 + v10 + 16);
      if ( v13 )
      {
        CBaseObject::Release(v13);
        *(_QWORD *)(*(_QWORD *)v3 + v10 + 16) = 0LL;
      }
      v10 -= 48LL;
      --v7;
    }
    while ( v7 >= 0 );
  }
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v3, 0x30u);
  v8 = (CContainerVisual *)*((_QWORD *)this + 52);
  if ( v8 )
  {
    CContainerVisual::RemoveAllChildren(v8);
    v14 = (struct CVisual *)*((_QWORD *)this + 52);
    v15 = (CContainerVisual *)*((_QWORD *)v14 + 3);
    if ( v15 )
    {
      v16 = CContainerVisual::RemoveChild(v15, v14);
      v4 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x95u, 0LL);
    }
    *((_DWORD *)this + 96) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 360, 0x10u);
  }
  return v4;
}
