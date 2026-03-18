/*
 * XREFs of ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18000C810 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180153C54 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x1801E45A4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180249018 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18000DD58 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DynArray<CExpressionValue,1>::AddAndSet(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // eax
  unsigned int v7; // ebp
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rbx
  CPathData *v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rbx
  CPathData *v14; // rcx
  void (*v15)(void); // rax
  __int64 v16; // rbx
  CPathData *v17; // rcx
  void (*v18)(void); // rax
  __int64 v19; // rbx
  CPathData *v20; // rcx
  void (*v21)(void); // rax
  __int64 v22; // rbx
  CPathData *v23; // rcx
  void (*v24)(void); // rax

  v6 = DynArrayImpl<1>::Grow(a1, 80, 5, a4, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x191u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xE5u, 0LL);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = v8 + 5;
    v9 = *(_QWORD *)a1 + (unsigned int)(80 * v8);
    *(_OWORD *)v9 = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a3 + 48);
    v10 = *(_QWORD *)(a3 + 64);
    if ( *(_QWORD *)(v9 + 64) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(a3 + 64));
      v11 = *(CPathData **)(v9 + 64);
      *(_QWORD *)(v9 + 64) = v10;
      if ( v11 )
      {
        v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
        if ( (char *)v12 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v11);
        else
          v12();
      }
    }
    *(_DWORD *)(v9 + 72) = *(_DWORD *)(a3 + 72);
    *(_OWORD *)(v9 + 80) = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 96) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v9 + 112) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v9 + 128) = *(_OWORD *)(a3 + 48);
    v13 = *(_QWORD *)(a3 + 64);
    if ( *(_QWORD *)(v9 + 144) != v13 )
    {
      if ( v13 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(a3 + 64));
      v14 = *(CPathData **)(v9 + 144);
      *(_QWORD *)(v9 + 144) = v13;
      if ( v14 )
      {
        v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
        if ( (char *)v15 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v14);
        else
          v15();
      }
    }
    *(_DWORD *)(v9 + 152) = *(_DWORD *)(a3 + 72);
    *(_OWORD *)(v9 + 160) = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 176) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v9 + 192) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v9 + 208) = *(_OWORD *)(a3 + 48);
    v16 = *(_QWORD *)(a3 + 64);
    if ( *(_QWORD *)(v9 + 224) != v16 )
    {
      if ( v16 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(a3 + 64));
      v17 = *(CPathData **)(v9 + 224);
      *(_QWORD *)(v9 + 224) = v16;
      if ( v17 )
      {
        v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
        if ( (char *)v18 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v17);
        else
          v18();
      }
    }
    *(_DWORD *)(v9 + 232) = *(_DWORD *)(a3 + 72);
    *(_OWORD *)(v9 + 240) = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 256) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v9 + 272) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v9 + 288) = *(_OWORD *)(a3 + 48);
    v19 = *(_QWORD *)(a3 + 64);
    if ( *(_QWORD *)(v9 + 304) != v19 )
    {
      if ( v19 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*(_QWORD *)(a3 + 64));
      v20 = *(CPathData **)(v9 + 304);
      *(_QWORD *)(v9 + 304) = v19;
      if ( v20 )
      {
        v21 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
        if ( (char *)v21 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v20);
        else
          v21();
      }
    }
    *(_DWORD *)(v9 + 312) = *(_DWORD *)(a3 + 72);
    *(_OWORD *)(v9 + 320) = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 336) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v9 + 352) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v9 + 368) = *(_OWORD *)(a3 + 48);
    v22 = *(_QWORD *)(a3 + 64);
    if ( *(_QWORD *)(v9 + 384) != v22 )
    {
      if ( v22 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*(_QWORD *)(a3 + 64));
      v23 = *(CPathData **)(v9 + 384);
      *(_QWORD *)(v9 + 384) = v22;
      if ( v23 )
      {
        v24 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
        if ( (char *)v24 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v23);
        else
          v24();
      }
    }
    *(_DWORD *)(v9 + 392) = *(_DWORD *)(a3 + 72);
  }
  return v7;
}
