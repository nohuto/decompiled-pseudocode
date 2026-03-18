/*
 * XREFs of ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x180293D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18004708C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::EnsureBrushGraph(CInteractionContextWrapper **this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (!a2
     || (*((unsigned __int8 (__fastcall **)(CInteractionContextWrapper **, _QWORD, char *))*this + 39))(this, 0LL, &v6))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 10),
        v3 = CBrushRenderingGraphBuilder::Build((struct CBrush *)this, this + 10),
        v4 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x81u, 0LL);
  }
  else
  {
    return 0;
  }
  return v4;
}
