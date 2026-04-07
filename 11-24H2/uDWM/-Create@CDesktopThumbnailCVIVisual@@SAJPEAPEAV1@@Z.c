/*
 * XREFs of ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006D77C
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180060D60 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006D340 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BBC20 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800EEF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x18006DE40 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Create(struct CDesktopThumbnailCVIVisual **a1)
{
  CRenderDataVisual *v2; // rax
  CRenderDataVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xA7u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CRenderDataVisual *)DefaultHeap::AllocClear(0x130uLL);
  v3 = v2;
  if ( v2 )
  {
    CRenderDataVisual::CRenderDataVisual(v2);
    *((_QWORD *)v3 + 30) = 0LL;
    *((_QWORD *)v3 + 32) = 0LL;
    *((_QWORD *)v3 + 33) = 0LL;
    *(_WORD *)((char *)v3 + 297) = 0;
    *(_QWORD *)v3 = &CDesktopThumbnailCVIVisual::`vftable';
    v4 = CDesktopThumbnailCVIVisual::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xA7u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
