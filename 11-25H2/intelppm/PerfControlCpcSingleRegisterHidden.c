/*
 * XREFs of PerfControlCpcSingleRegisterHidden @ 0x140009480
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140001A00 (PerformanceFromPercentage.c)
 *     WriteIoMemRawHidden @ 0x140008BBC (WriteIoMemRawHidden.c)
 */

void __fastcall PerfControlCpcSingleRegisterHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // r11
  unsigned int v7; // ebp
  unsigned int v8; // edx
  _BYTE *v9; // rdi
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rax
  char v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // rax
  char v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  char v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int8 v23; // cl

  if ( a3 || a4 )
  {
    LODWORD(v6) = 0;
    v7 = *(_DWORD *)(a2 + 28);
    v8 = *(_DWORD *)(a2 + 24);
    v9 = *(_BYTE **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( *(_BYTE *)(a1 + 125) )
    {
      v10 = v9[129];
      if ( !*(_BYTE *)(a2 + 48) )
      {
        if ( v10 < 0x40u || v9[130] )
          v6 = (*(_QWORD *)a2 << v9[130]) & (((1LL << v10) - 1) << v9[130]);
        else
          v6 = *(_QWORD *)a2;
      }
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      if ( v9[153] < 0x40u || v9[154] )
      {
        v11 = PerformanceFromPercentage(a1, v8);
        v6 = v14 & ~v13 | v13 & (v11 << v12);
      }
      else
      {
        LODWORD(v6) = PerformanceFromPercentage(a1, v8);
      }
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      if ( v9[177] < 0x40u || v9[178] )
      {
        v15 = PerformanceFromPercentage(a1, v7);
        v6 = v18 & ~v17 | v17 & (v15 << v16);
      }
      else
      {
        LODWORD(v6) = PerformanceFromPercentage(a1, v7);
      }
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      if ( v9[201] < 0x40u || v9[202] )
      {
        v19 = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 32));
        v6 = v22 & ~v21 | v21 & (v19 << v20);
      }
      else
      {
        LODWORD(v6) = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 32));
      }
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v23 = v9[417];
      if ( v23 < 0x40u || v9[418] )
        LODWORD(v6) = v6 & ~(unsigned int)(((1LL << v23) - 1) << v9[418]) | (((1LL << v23) - 1) << v9[418]) & ((255 * *(_DWORD *)(a2 + 36) / 0x64u) << v9[418]);
      else
        LODWORD(v6) = 255 * *(_DWORD *)(a2 + 36) / 0x64u;
    }
    WriteIoMemRawHidden(*(unsigned int *)(*(_QWORD *)a1 + 84LL), a1 + 152, ~*(_QWORD *)(a1 + 184), v6);
  }
}
