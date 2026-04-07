/*
 * XREFs of ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18000F264
 * Callers:
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018410 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x18000F334 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CDesktopThumbnailBase::RecloneWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  const struct CTopLevelWindow *v3; // rdx
  CVisual *v5; // rdx
  int Index; // edi
  int v7; // eax
  __int64 v8; // rsi
  struct CVisual *v9; // rdi
  __int64 v10; // rax
  struct CVisual *v11; // rcx
  bool v12; // [rsp+20h] [rbp-18h]
  struct CVisual *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v3 = (const struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v3 )
  {
    Index = CDesktopThumbnailBase::_GetIndex(this, v3);
    if ( Index >= 0 )
    {
      CVisual::RenderRecursive(v5);
      v7 = CTopLevelWindow::CloneVisualTreeForLivePreview(*((CTopLevelWindow **)a2 + 55), 0, &v13);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u, 0LL);
        v11 = v13;
      }
      else
      {
        v8 = (unsigned int)Index;
        v9 = v13;
        v8 *= 2LL;
        VisualCollection::InsertRelative(
          (CDesktopThumbnailBase *)((char *)this + 32),
          v13,
          *(struct CVisual **)(*((_QWORD *)this + 31) + 8 * v8 + 8),
          0,
          v12);
        VisualCollection::Remove(
          (CDesktopThumbnailBase *)((char *)this + 32),
          *(struct CVisual **)(*((_QWORD *)this + 31) + 8 * v8 + 8));
        v10 = *((_QWORD *)this + 31);
        v11 = *(struct CVisual **)(v10 + 8 * v8 + 8);
        *(_QWORD *)(v10 + 8 * v8 + 8) = v9;
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
  }
}
