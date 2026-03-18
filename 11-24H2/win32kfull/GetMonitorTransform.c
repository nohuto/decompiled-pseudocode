/*
 * XREFs of GetMonitorTransform @ 0x1400256BC
 * Callers:
 *     TransformVectorWithInputTargetPrecedence @ 0x1401594E0 (TransformVectorWithInputTargetPrecedence.c)
 *     UpdateTopLevelWindowDPITransform @ 0x14019BAB8 (UpdateTopLevelWindowDPITransform.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, const struct tagWND *a2, __int64 a3)
{
  unsigned __int16 v6; // bx
  __int64 v7; // rax
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // rax
  __int64 result; // rax
  float v12; // xmm4_4
  int v13; // ecx
  float v14; // xmm0_4
  _DWORD v15[10]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF;
  if ( !a1 )
    return 0LL;
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 496LL);
  if ( !v7 )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) == 0 )
    return 0LL;
  GetMonitorRectForDpi(v15, a1, v6);
  v8 = v15[1];
  v9 = v15[0];
  if ( *(_WORD *)(*(_QWORD *)(a1 + 40) + 60LL) == v6 && !IsChildWindowDpiBoundary(a2) )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( *(_DWORD *)(v10 + 28) == v9 && *(_DWORD *)(v10 + 32) == v8 )
      return 0LL;
  }
  v12 = (float)v6;
  v13 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 60LL);
  *(_DWORD *)(a3 + 40) = 1065353216;
  *(_DWORD *)(a3 + 60) = 1065353216;
  v14 = (float)v13 / v12;
  *(float *)a3 = v14;
  *(float *)(a3 + 20) = v14;
  result = 1LL;
  *(float *)(a3 + 48) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 28LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 60LL) * (float)v9) / v12);
  *(float *)(a3 + 52) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 32LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 60LL) * (float)v8) / v12);
  return result;
}
