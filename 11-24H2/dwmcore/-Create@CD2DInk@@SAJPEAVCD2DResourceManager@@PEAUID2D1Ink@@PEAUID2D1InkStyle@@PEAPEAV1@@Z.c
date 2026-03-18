/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802CCE4C
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1802BB670 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18005B3E4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  CD2DResource *v8; // rax
  CD2DResource *v9; // rbx
  __int64 v10; // r8
  void (__fastcall *v11)(CD2DResource *); // rax
  CD2DResourceManager *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edi

  *a4 = 0LL;
  v8 = (CD2DResource *)operator new(0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    CD2DResource::CD2DResource(v8, a1);
    *((_QWORD *)v9 + 9) &= v10;
    v11 = (void (__fastcall *)(CD2DResource *))*(&CD2DInk::`vftable' + 1);
    *((_QWORD *)v9 + 10) &= v10;
    *(_QWORD *)v9 = &CD2DInk::`vftable';
    v11(v9);
    *((_QWORD *)v9 + 9) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v9 + 10) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
    v12 = (CD2DResourceManager *)*((_QWORD *)v9 + 5);
    v13 = (_QWORD *)((char *)v9 + 56);
    v14 = *(_QWORD *)v12;
    if ( *(CD2DResourceManager **)(*(_QWORD *)v12 + 8LL) != v12 )
      __fastfail(3u);
    *v13 = v14;
    *((_QWORD *)v9 + 8) = v12;
    *(_QWORD *)(v14 + 8) = v13;
    *(_QWORD *)v12 = v13;
    CD2DResourceManager::ManageResource(v12, v9);
    v15 = 0;
    *a4 = v9;
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(0LL);
  return v15;
}
