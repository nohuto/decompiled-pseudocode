/*
 * XREFs of ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180048650
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x180049670 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::EnumerateBrushes(
        CMultiPrimitiveDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v4; // esi
  __int128 *v5; // rbx
  int v8; // r12d
  __int128 *v10; // rdi
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // eax

  v4 = 0;
  v5 = (__int128 *)*((_QWORD *)this + 11);
  v8 = *(_DWORD *)(*((_QWORD *)this + 9) + 48LL);
  v10 = &v5[*((_QWORD *)this + 10)];
  while ( v5 != v10 )
  {
    v11 = *((_QWORD *)this + 9);
    v12 = *v5;
    *(_BYTE *)(v11 + 52) = 1;
    *(_DWORD *)(v11 + 48) = v8;
    *(_OWORD *)(v11 + 32) = v12;
    if ( a3 == lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ )
      v13 = lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator()(0LL, *((_QWORD *)this + 9), a4);
    else
      v13 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x47u, 0LL);
      return v4;
    }
    ++v5;
  }
  return v4;
}
