/*
 * XREFs of ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x18019EC8C
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18019DCC8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateGradientStopCollection(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  int v7; // eax
  int v8; // r8d
  int v9; // ebx

  v5 = a1 + 1096;
  *a5 = 0LL;
  if ( !a1 )
    v5 = 1112LL;
  if ( *(_DWORD *)v5 )
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x609u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD *))(**(_QWORD **)(a1 + 200) + 72LL))(
           *(_QWORD *)(a1 + 200),
           *((_QWORD *)a2 + 1),
           *a2,
           a3,
           a4,
           a5);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x60Fu, 0LL);
  }
  return CD2DContext::TranslateDXGIorD3DErrorInContext(a1, v9, v8);
}
