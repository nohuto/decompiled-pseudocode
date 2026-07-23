/*
 * XREFs of KiIntSteerComputeRelevanceForTriageDumps @ 0x1405C1A84
 * Callers:
 *     KiIntSteerCallbackRecordTriageCallbackInterruptObject @ 0x1405C19C0 (KiIntSteerCallbackRecordTriageCallbackInterruptObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerComputeRelevanceForTriageDumps(__int64 a1)
{
  unsigned int *v1; // r8
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  ULONG v6; // edx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  char v13; // dl
  char v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v17; // eax
  int v18; // eax

  v1 = (unsigned int *)KiProcessorBlock[*(unsigned int *)(a1 + 96)];
  if ( v1[8443] - *(_DWORD *)(a1 + 232) > 1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 248);
  v3 = *(_QWORD *)(a1 + 264);
  v4 = *(_QWORD *)(a1 + 240);
  v5 = *(_QWORD *)(a1 + 256);
  v6 = KeMaximumIncrement * v1[8426] / 0xA;
  v7 = (unsigned __int64)v6 >> 2;
  v8 = (unsigned __int64)v6 >> 9;
  v9 = (3 * v6 * (unsigned __int64)v1[17]) >> 2;
  v10 = (3 * v6 * (unsigned __int64)v1[17]) >> 5;
  if ( v2 < v8 && v4 < v10 && v3 < v8 && v5 < v10 )
    return 0LL;
  _BitScanReverse64(&v11, v9);
  v12 = (unsigned __int64)(KeMaximumIncrement * v1[8426] / 0xA) >> 2;
  v13 = 63 - v11;
  _BitScanReverse64(&v11, v7);
  v14 = 63 - v11;
  v15 = v9;
  if ( v3 <= v7 )
    v12 = *(_QWORD *)(a1 + 264);
  v16 = v12 << v14 >> 36;
  if ( v5 <= v9 )
    v15 = *(_QWORD *)(a1 + 256);
  v17 = v16 + (v15 << v13 >> 36);
  if ( v4 <= v9 )
    v9 = *(_QWORD *)(a1 + 240);
  v18 = (v9 << v13 >> 34) + v17;
  if ( v2 <= v7 )
    v7 = *(_QWORD *)(a1 + 248);
  return (unsigned int)(v7 << v14 >> 34) + v18;
}
