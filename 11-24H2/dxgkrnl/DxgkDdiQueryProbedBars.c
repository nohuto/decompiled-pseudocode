/*
 * XREFs of DxgkDdiQueryProbedBars @ 0x1402108E0
 * Callers:
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x14008B290 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x14020E798 (-QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 */

__int64 __fastcall DxgkDdiQueryProbedBars(_QWORD *a1, __int64 a2, unsigned __int16 a3, int *a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebp
  int ProbedBars; // eax
  __int64 v8; // rdi
  unsigned __int64 i; // rbx
  int v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  unsigned int v18[2]; // [rsp+60h] [rbp-18h] BYREF
  int *v19; // [rsp+68h] [rbp-10h]

  v18[1] = 0;
  v5 = a1[391];
  v6 = a3;
  v18[0] = a3;
  v19 = a4;
  ProbedBars = ADAPTER_RENDER::QueryProbedBars(v5, a2, v18);
  v8 = ProbedBars;
  if ( bTracingEnabled )
  {
    v17 = v19[5];
    v16 = v19[4];
    v15 = v19[3];
    v14 = v19[2];
    v13 = v19[1];
    v12 = *v19;
    v11 = v6;
    VgpuTrace(
      1,
      ProbedBars,
      a1,
      L"DxgkDdiQueryProbedBars",
      (wchar_t *)L"%d - %d %d %d %d %d %d",
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    for ( i = 0LL; i < 6; ++i )
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196618LL,
        v6,
        L"Querying probed BAR %1 gives base register value %2 with status %3",
        i,
        (unsigned int)v19[i],
        v8,
        0LL,
        0LL);
  }
  return (unsigned int)v8;
}
