/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x1801EE044
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801EDF70 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18005B3E4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x1801EE114 (-Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  CD2DResource *v6; // rax
  CD2DResource *v7; // rbx
  __int64 v8; // r8
  void (__fastcall *v9)(CD2DResource *); // rax
  int v10; // eax
  unsigned int v11; // edi

  *a3 = 0LL;
  v6 = (CD2DResource *)operator new(0x50uLL);
  v7 = v6;
  if ( v6 )
  {
    CD2DResource::CD2DResource(v6, a1);
    *((_QWORD *)v7 + 9) &= v8;
    v9 = (void (__fastcall *)(CD2DResource *))*(&CD2DEffect::`vftable' + 1);
    *(_QWORD *)v7 = &CD2DEffect::`vftable';
    v9(v7);
    v10 = CD2DEffect::Initialize(v7, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x18u, 0LL);
    }
    else
    {
      *a3 = v7;
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v7);
  return v11;
}
