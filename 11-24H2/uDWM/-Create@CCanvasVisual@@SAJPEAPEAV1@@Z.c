/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180027CFC
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180020320 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x18002E160 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800721D0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x180027DCC (--0CCanvasVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct CCanvasVisual **a1)
{
  CCanvasVisual *v2; // rax
  CCanvasVisual *v3; // rax
  struct CCanvasVisual *v4; // rbx
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x13u, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CCanvasVisual *)DefaultHeap::AllocClear(0xF0uLL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v3 = CCanvasVisual::CCanvasVisual(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_8:
    v5 = -2147024882;
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(CCanvasVisual *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x13u, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
