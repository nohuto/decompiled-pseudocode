/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800345C0
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802311E0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180032F08 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(
        CExpressionValueStack *this,
        const struct CExpressionValue *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // ecx
  __int128 v12; // xmm0
  __int64 v13; // r14
  CPathData *v14; // rcx
  void (*v15)(void); // rax
  CPathData *v16; // rcx
  void (*v17)(void); // rax
  CPathData *v18; // rcx
  void (*v19)(void); // rax
  CPathData *v20; // rcx
  void (*v21)(void); // rax
  CPathData *v22; // rcx
  void (*v23)(void); // rax
  unsigned int v24; // eax

  v5 = *((_DWORD *)this + 2);
  if ( (unsigned int)~v5 < 5 )
  {
    v10 = -2147418113;
    v24 = 84;
  }
  else
  {
    if ( *((_DWORD *)this + 10) != v5 )
    {
LABEL_3:
      v7 = *((unsigned int *)this + 2);
      *((_DWORD *)this + 2) = v7 + 1;
      CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)this + 2) + 80 * v7), a2);
      return 0LL;
    }
    v9 = DynArrayImpl<1>::Grow((__int64)this + 16, 0x50u, 5, a4, 0LL);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = *((_DWORD *)this + 10);
      v12 = 0LL;
      v13 = *((_QWORD *)this + 2) + (unsigned int)(80 * v11);
      *((_DWORD *)this + 10) = v11 + 5;
      *(_OWORD *)v13 = 0LL;
      *(_OWORD *)(v13 + 16) = 0LL;
      *(_OWORD *)(v13 + 32) = 0LL;
      *(_OWORD *)(v13 + 48) = 0LL;
      v14 = *(CPathData **)(v13 + 64);
      if ( v14 )
      {
        *(_QWORD *)(v13 + 64) = 0LL;
        v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
        if ( (char *)v15 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v14);
        else
          v15();
        v12 = 0LL;
      }
      *(_DWORD *)(v13 + 72) = 0;
      *(_OWORD *)(v13 + 80) = v12;
      *(_OWORD *)(v13 + 96) = v12;
      *(_OWORD *)(v13 + 112) = v12;
      *(_OWORD *)(v13 + 128) = v12;
      v16 = *(CPathData **)(v13 + 144);
      if ( v16 )
      {
        *(_QWORD *)(v13 + 144) = 0LL;
        v17 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
        if ( (char *)v17 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v16);
        else
          v17();
        v12 = 0LL;
      }
      *(_DWORD *)(v13 + 152) = 0;
      *(_OWORD *)(v13 + 160) = v12;
      *(_OWORD *)(v13 + 176) = v12;
      *(_OWORD *)(v13 + 192) = v12;
      *(_OWORD *)(v13 + 208) = v12;
      v18 = *(CPathData **)(v13 + 224);
      if ( v18 )
      {
        *(_QWORD *)(v13 + 224) = 0LL;
        v19 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
        if ( (char *)v19 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v18);
        else
          v19();
        v12 = 0LL;
      }
      *(_DWORD *)(v13 + 232) = 0;
      *(_OWORD *)(v13 + 240) = v12;
      *(_OWORD *)(v13 + 256) = v12;
      *(_OWORD *)(v13 + 272) = v12;
      *(_OWORD *)(v13 + 288) = v12;
      v20 = *(CPathData **)(v13 + 304);
      if ( v20 )
      {
        *(_QWORD *)(v13 + 304) = 0LL;
        v21 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
        if ( (char *)v21 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v20);
        else
          v21();
        v12 = 0LL;
      }
      *(_DWORD *)(v13 + 312) = 0;
      *(_OWORD *)(v13 + 320) = v12;
      *(_OWORD *)(v13 + 336) = v12;
      *(_OWORD *)(v13 + 352) = v12;
      *(_OWORD *)(v13 + 368) = v12;
      v22 = *(CPathData **)(v13 + 384);
      if ( v22 )
      {
        *(_QWORD *)(v13 + 384) = 0LL;
        v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
        if ( (char *)v23 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v22);
        else
          v23();
      }
      *(_DWORD *)(v13 + 392) = 0;
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x191u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xE5u, 0LL);
    v24 = 93;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    v10,
    v24,
    0LL);
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    v10,
    0x16Fu,
    0LL);
  return v10;
}
