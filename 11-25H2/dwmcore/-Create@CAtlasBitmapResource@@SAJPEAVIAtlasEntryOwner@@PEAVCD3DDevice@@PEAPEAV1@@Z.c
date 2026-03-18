/*
 * XREFs of ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18019E0D4
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18019DCC8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x18019E1B0 (--0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z.c)
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18019E548 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::Create(
        struct IAtlasEntryOwner *a1,
        struct CD3DDevice *a2,
        struct CAtlasBitmapResource **a3)
{
  CAtlasBitmapResource *v6; // rax
  CAtlasBitmapResource *v7; // rax
  struct CAtlasBitmapResource *v8; // rbx
  int GradientStrip; // eax
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CAtlasBitmapResource *)MIDL_user_allocate(0x38uLL);
  if ( v6 && (v7 = CAtlasBitmapResource::CAtlasBitmapResource(v6, a1), (v8 = v7) != 0LL) )
  {
    (*(void (__fastcall **)(CAtlasBitmapResource *))(*(_QWORD *)v7 + 8LL))(v7);
    GradientStrip = CAtlasManager::AllocateGradientStrip(
                      (CAtlasManager *)(((unsigned __int64)a2 + 512) & -(__int64)(a2 != 0LL)),
                      (struct CAtlasBitmapResource *)((char *)v8 + 24));
    v10 = GradientStrip;
    if ( GradientStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, GradientStrip, 0x19u, 0LL);
      (*(void (__fastcall **)(struct CAtlasBitmapResource *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v10;
}
