/*
 * XREFs of ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1801E4288
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@PEAX$01$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180185C98 (-Grow@-$CWatermarkStack@PEAX$01$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12)
    && (v8 = CWatermarkStack<void *,2,2,10>::Grow(a1, a2, a3, a4, (const void **)a1), v9 = v8, v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
    v6 = *(_DWORD *)(a1 + 20);
    if ( v6 <= *(_DWORD *)(a1 + 8) )
      v6 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v6;
    return 0LL;
  }
}
