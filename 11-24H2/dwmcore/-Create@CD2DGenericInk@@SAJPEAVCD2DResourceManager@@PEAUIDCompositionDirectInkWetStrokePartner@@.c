/*
 * XREFs of ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1801A13C4
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801A14B0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18005B3E4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        struct CD2DGenericInk **a3)
{
  CD2DResource *v6; // rax
  CD2DResource *v7; // rbx
  CD2DResourceManager *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // edi

  *a3 = 0LL;
  v6 = (CD2DResource *)operator new(0x50uLL);
  v7 = v6;
  if ( v6 )
  {
    CD2DResource::CD2DResource(v6, a1);
    *(_QWORD *)v7 = &CD2DGenericInk::`vftable';
    *((_QWORD *)v7 + 9) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)a2 + 8LL))(a2);
    CMILRefCountImpl::AddReference((CD2DResource *)((char *)v7 + 8));
    v8 = (CD2DResourceManager *)*((_QWORD *)v7 + 5);
    v9 = (_QWORD *)((char *)v7 + 56);
    v10 = *(_QWORD *)v8;
    if ( *(CD2DResourceManager **)(*(_QWORD *)v8 + 8LL) != v8 )
      __fastfail(3u);
    *v9 = v10;
    *((_QWORD *)v7 + 8) = v8;
    *(_QWORD *)(v10 + 8) = v9;
    *(_QWORD *)v8 = v9;
    CD2DResourceManager::ManageResource(v8, v7);
    v11 = 0;
    *a3 = v7;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v11;
}
