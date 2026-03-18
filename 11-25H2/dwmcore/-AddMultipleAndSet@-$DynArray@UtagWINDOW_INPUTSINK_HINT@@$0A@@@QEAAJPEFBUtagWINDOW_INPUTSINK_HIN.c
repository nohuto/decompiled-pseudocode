/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UtagWINDOW_INPUTSINK_HINT@@$0A@@@QEAAJPEFBUtagWINDOW_INPUTSINK_HINT@@I@Z @ 0x1801DDF80
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<tagWINDOW_INPUTSINK_HINT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // edi
  _OWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v5 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    return 2147942934LL;
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v10 = a2;
    v8 = DynArrayImpl<0>::Grow(a1, 0x10u, 1, 0, (unsigned __int64 *)&v10);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xC0u, 0LL);
    else
      *(_OWORD *)(*(_QWORD *)a1 + (unsigned int)(16 * (*(_DWORD *)(a1 + 24))++)) = *v10;
    return v9;
  }
  else
  {
    v6 = 2LL * v2;
    result = 0LL;
    *(_OWORD *)(*(_QWORD *)a1 + 8 * v6) = *a2;
    *(_DWORD *)(a1 + 24) = v5;
  }
  return result;
}
