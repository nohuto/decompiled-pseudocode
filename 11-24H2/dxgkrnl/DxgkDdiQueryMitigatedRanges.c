/*
 * XREFs of DxgkDdiQueryMitigatedRanges @ 0x140210744
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryMitigatedRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x14020E6C8 (-QueryMitigatedRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYMITIGATEDRA.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRanges(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 MitigatedRanges; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v9; // [rsp+28h] [rbp-30h]
  unsigned int v10; // [rsp+30h] [rbp-28h]

  MitigatedRanges = (int)ADAPTER_RENDER::QueryMitigatedRanges(a1[391], a2, a3);
  if ( bTracingEnabled )
  {
    v10 = a3[1];
    v9 = *a3;
    VgpuTrace(1, MitigatedRanges, a1, L"DxgkDdiQueryMitigatedRanges", (wchar_t *)L"%d %d", v9, v10);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196615LL,
      *a3,
      L"Queried %1 ranges to mitigate on BAR %2, returning %3",
      a3[2],
      a3[1],
      MitigatedRanges,
      0LL,
      0LL);
    v6 = 0LL;
    if ( a3[2] )
    {
      v7 = 0LL;
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196615LL,
          *a3,
          L"Mitigating range starting at base page %1 and extending %2 page(s)",
          *(_QWORD *)(*((_QWORD *)a3 + 2) + v7),
          *(unsigned int *)(*((_QWORD *)a3 + 2) + v7 + 8),
          0LL,
          0LL,
          0LL);
        v7 += 16LL;
        ++v6;
      }
      while ( v6 < a3[2] );
    }
  }
  return (unsigned int)MitigatedRanges;
}
