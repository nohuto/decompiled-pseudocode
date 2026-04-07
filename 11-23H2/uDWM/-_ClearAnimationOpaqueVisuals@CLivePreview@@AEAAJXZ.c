/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C75A0
 * Callers:
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C5FD0 (--1CLivePreview@@MEAA@XZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C6DC0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E68E8 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this)
{
  char *v1; // r15
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rdi
  CVisual *v7; // rbx
  int v8; // eax
  CBaseObject *v9; // rcx
  __int64 v10; // rcx
  struct CVisual *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax

  v1 = (char *)this + 344;
  v2 = 0;
  v4 = *((_DWORD *)this + 92) - 1;
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 48LL * v4;
    do
    {
      v7 = *(CVisual **)(v6 + *(_QWORD *)v1);
      CVisual::RenderRecursive(v7);
      CTopLevelWindow::StopLivePreviewAnimation(v7);
      v8 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v7 + 3) + 32LL), v7);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x89u);
      v9 = *(CBaseObject **)(*(_QWORD *)v1 + v6 + 16);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *(_QWORD *)(*(_QWORD *)v1 + v6 + 16) = 0LL;
      }
      v6 -= 48LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v1, 0x30u);
  v10 = *((_QWORD *)this + 58);
  if ( v10 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(v10 + 32));
    v11 = (struct CVisual *)*((_QWORD *)this + 58);
    v12 = *((_QWORD *)v11 + 3);
    if ( v12 )
    {
      v13 = VisualCollection::Remove((VisualCollection *)(v12 + 32), v11);
      v2 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x94u);
    }
    *((_DWORD *)this + 108) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 408, 0x10u);
  }
  return v2;
}
