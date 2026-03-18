/*
 * XREFs of ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x18019ED3C
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18019DCC8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800427AC (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBrush::Create(struct CD2DResourceManager *a1, struct ID2D1Brush *a2, struct CD2DBrush **a3)
{
  CD2DResource *v6; // rax
  struct CD2DBrush *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (CD2DResource *)MIDL_user_allocate(0x50uLL);
  v7 = v6;
  if ( v6 )
  {
    CD2DResource::CD2DResource(v6, a1);
    *(_QWORD *)v7 = &CD2DBrush::`vftable';
    *((_QWORD *)v7 + 9) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)a2 + 8LL))(a2);
    (*(void (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = (*(__int64 (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v7 + 112LL))(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x10u, 0LL);
      (*(void (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xEu, 0LL);
  }
  return v9;
}
