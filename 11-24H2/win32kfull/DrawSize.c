/*
 * XREFs of DrawSize @ 0x1402E30EC
 * Callers:
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x140209ADC (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     SizeBoxHwnd @ 0x140220CB8 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, int a3, int a4)
{
  __int64 v4; // rbx
  HDC v7; // rsi
  __int64 *v8; // r12
  int v9; // r13d
  int v10; // r13d
  int v11; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v13; // rax
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  int v17; // edi
  char v18; // dl
  char v19; // al
  unsigned int v20; // eax
  int DpiDependentMetric; // r15d
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // ebx
  __int64 v27; // r12
  int v28; // esi
  int v29; // r14d
  int v30; // edi
  int v31; // ebp
  __int64 v32; // rdx
  __int64 UserSessionState; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v41; // [rsp+78h] [rbp-A0h]
  int v42; // [rsp+88h] [rbp-90h]
  char v43; // [rsp+B0h] [rbp-68h]
  char v44; // [rsp+B1h] [rbp-67h]
  int v45; // [rsp+B4h] [rbp-64h]
  _DWORD v46[4]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 40);
  v7 = a2;
  v8 = (__int64 *)a1;
  if ( (*(_BYTE *)(v4 + 25) & 0x40) != 0 )
  {
    v9 = a3;
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 96);
    v11 = *(_DWORD *)(v4 + 88);
    DpiForSystem = GetDpiForSystem(a1);
    v9 = v10 - v11 - a3 - GetDpiDependentMetric(0, DpiForSystem);
  }
  v13 = v8[5];
  v14 = *(_DWORD *)(v13 + 100);
  v15 = *(_DWORD *)(v13 + 92);
  v16 = GetDpiForSystem(a1);
  v17 = v14 - v15 - a4 - GetDpiDependentMetric(1, v16);
  v45 = v17;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v18 = 0;
  }
  v44 = v18;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v19 = 0;
  }
  v43 = v19;
  if ( v18 || v19 )
  {
    v20 = GetDpiForSystem(*(__int64 *)&WPP_GLOBAL_Control);
    DpiDependentMetric = GetDpiDependentMetric(1, v20);
    v23 = GetDpiForSystem(v22);
    v24 = GetDpiDependentMetric(0, v23);
    v25 = (_DWORD *)v8[5];
    v26 = v24;
    v27 = *v8;
    v28 = v25[25];
    v29 = v25[23];
    v30 = v25[24];
    v31 = v25[22];
    UserSessionState = W32GetUserSessionState(v25, v32);
    v42 = v30 - v31;
    v41 = v30;
    v17 = v45;
    WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v44,
      v43,
      *(_QWORD *)(UserSessionState + 69416),
      5u,
      9u,
      0x10u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v27,
      a3,
      a4,
      v9,
      v45,
      v31,
      v29,
      v41,
      v28,
      v42,
      v28 - v29,
      v26,
      DpiDependentMetric);
    v8 = (__int64 *)a1;
    v7 = a2;
  }
  if ( SizeBoxHwnd((__int64)v8) )
    return BitBltSysBmp(v7, v9, v17, (*(_BYTE *)(v8[5] + 25) & 0x40) != 0 ? 91 : 45, 1);
  v46[0] = v9;
  v46[1] = v17;
  v35 = GetDpiForSystem(v34);
  v46[2] = GetDpiDependentMetric(0, v35);
  v37 = GetDpiForSystem(v36);
  v46[3] = GetDpiDependentMetric(1, v37);
  v47 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v39, v38) + 19928) + 4816LL);
  return GrePolyPatBlt(v7, 15728673, (struct _POLYPATBLT *)v46, 1);
}
