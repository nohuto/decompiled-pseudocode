/*
 * XREFs of ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18018CDA4
 * Callers:
 *     ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18018CC20 (-ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISU.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18018CE74 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRedirectedVisualContent::Create(struct CVisual *a1, struct CRedirectedVisualContent **a2)
{
  CRedirectedVisualContent *v4; // rax
  CRedirectedVisualContent *v5; // rax
  struct CRedirectedVisualContent *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  *a2 = 0LL;
  v4 = (CRedirectedVisualContent *)DefaultHeap::AllocClear(0x70uLL);
  if ( v4 && (v5 = CRedirectedVisualContent::CRedirectedVisualContent(v4, a1), (v6 = v5) != 0LL) )
  {
    (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = (*(__int64 (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v6 + 56LL))(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x16u, 0LL);
      (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v8;
}
