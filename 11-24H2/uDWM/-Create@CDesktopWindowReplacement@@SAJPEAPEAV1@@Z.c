/*
 * XREFs of ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18007C9C4
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x180044A98 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopWindowReplacement::Create(struct CDesktopWindowReplacement **a1)
{
  CRenderDataVisual *v2; // rax
  CRenderDataVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x440u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CRenderDataVisual *)DefaultHeap::AllocClear(0xF0uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xF0uLL);
    CRenderDataVisual::CRenderDataVisual(v3);
    *(_QWORD *)v3 = &CDesktopWindowReplacement::`vftable';
    v4 = ((__int64 (__fastcall *)(CRenderDataVisual *))*(&CDesktopWindowReplacement::`vftable' + 1))(v3);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x440u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
