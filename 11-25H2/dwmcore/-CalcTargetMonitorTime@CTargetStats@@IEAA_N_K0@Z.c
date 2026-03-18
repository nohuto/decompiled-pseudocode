/*
 * XREFs of ?CalcTargetMonitorTime@CTargetStats@@IEAA_N_K0@Z @ 0x1800CAC70
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTargetStats::CalcTargetMonitorTime(CTargetStats *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  int v9; // edi
  unsigned int v10; // edi
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  bool v15; // zf
  __int128 v17; // [rsp+0h] [rbp-28h]
  __int64 v18; // [rsp+10h] [rbp-18h]

  v3 = *((_QWORD *)this + 18);
  v4 = 0LL;
  v5 = *((_DWORD *)this + 58);
  if ( !v3
    || v3 < a3 && (unsigned int)((a3 - v3) / *((_QWORD *)this + 19)) > 3
    || *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
  {
    *((_QWORD *)this + 27) = 0LL;
    v14 = 0LL;
    *((_DWORD *)this + 58) = 0;
    *((_QWORD *)this + 28) = 0LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 19);
    v8 = a2 + (v7 >> 1);
    v9 = *((_DWORD *)this + 40);
    if ( v8 < v3 )
    {
      *(_QWORD *)&v17 = v3 - v7 * ((unsigned int)((v3 - v8) / v7) + 1);
      v10 = v9 - ((v3 - v8) / v7 + 1);
    }
    else
    {
      *(_QWORD *)&v17 = v3 + v7 * (unsigned int)((v8 - v3) / v7);
      v10 = (v8 - v3) / v7 + v9;
    }
    LODWORD(v18) = v10;
    if ( v10 >= *((_DWORD *)this + 52) )
    {
      v12 = v18;
      *((_QWORD *)&v17 + 1) = *((_QWORD *)this + 19);
      v11 = v17;
    }
    else
    {
      v11 = *((_OWORD *)this + 12);
      v12 = *((_QWORD *)this + 26);
    }
    *(_OWORD *)((char *)this + 216) = v11;
    *((_QWORD *)this + 29) = v12;
    v13 = *((_QWORD *)this + 27);
    v14 = a2 - v13;
    if ( v13 >= a2 )
      v14 = *((_QWORD *)this + 27) - a2;
  }
  *((_QWORD *)this + 30) = v14;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 111);
  v15 = *((_DWORD *)this + 58) == v5;
  *((_QWORD *)this + 34) = v4;
  return !v15;
}
