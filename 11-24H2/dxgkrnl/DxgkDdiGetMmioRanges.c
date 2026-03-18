/*
 * XREFs of DxgkDdiGetMmioRanges @ 0x140210160
 * Callers:
 *     DpiIovGetMmioRanges @ 0x14024F0F0 (DpiIovGetMmioRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x14020D880 (-GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetMmioRanges(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v5; // rbx
  __int64 MmioRanges; // rbp
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v10; // [rsp+28h] [rbp-30h]
  unsigned int v11; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  MmioRanges = (int)ADAPTER_RENDER::GetMmioRanges(a1[391], a2, a3);
  if ( bTracingEnabled )
  {
    v11 = a3[1];
    v10 = *a3;
    VgpuTrace(1, MmioRanges, a1, L"DxgkDdiGetMmioRanges", (wchar_t *)L"%d %d", v10, v11);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196617LL,
      *a3,
      L"Queried %1 MMIO ranges on BAR %2, returning %3",
      a3[2],
      a3[1],
      MmioRanges,
      0LL,
      0LL);
    if ( a3[2] )
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)a3 + 2);
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196617LL,
          *a3,
          L"MMIO range starting at base page %1 (with physical page %2 and resource %3) has intercept flags %4 (read 0x1, "
           "write 0x2) and extending %5 page(s)",
          *(_QWORD *)(v7 + v8),
          *(_QWORD *)(v7 + v8 + 8),
          *(unsigned __int8 *)(v7 + v8 + 16),
          *(unsigned __int8 *)(v7 + v8 + 17) | (unsigned __int64)(*(_BYTE *)(v7 + v8 + 18) != 0 ? 2 : 0),
          *(unsigned int *)(v7 + v8 + 20));
        v7 += 24LL;
        ++v5;
      }
      while ( v5 < a3[2] );
    }
  }
  return (unsigned int)MmioRanges;
}
