/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x1801DFF40
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edi
  _OWORD *v11; // rax
  __int64 v12; // rcx
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    return 2147942934LL;
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v13 = (_OWORD *)a2;
    v9 = DynArrayImpl<0>::Grow(a1, 0x48u, 1, 0, (unsigned __int64 *)&v13);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xC0u, 0LL);
    }
    else
    {
      v11 = v13;
      v12 = *(_QWORD *)a1 + (unsigned int)(72 * *(_DWORD *)(a1 + 24));
      *(_OWORD *)v12 = *v13;
      *(_OWORD *)(v12 + 16) = v11[1];
      *(_OWORD *)(v12 + 32) = v11[2];
      *(_OWORD *)(v12 + 48) = v11[3];
      *(_QWORD *)(v12 + 64) = *((_QWORD *)v11 + 8);
      ++*(_DWORD *)(a1 + 24);
    }
    return v10;
  }
  else
  {
    v6 = *(_QWORD *)a1;
    v7 = 9 * v2;
    result = 0LL;
    *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)a2;
    *(_OWORD *)(v6 + 8 * v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v6 + 8 * v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v6 + 8 * v7 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v6 + 8 * v7 + 64) = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return result;
}
