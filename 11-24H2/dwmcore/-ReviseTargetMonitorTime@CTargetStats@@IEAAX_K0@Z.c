/*
 * XREFs of ?ReviseTargetMonitorTime@CTargetStats@@IEAAX_K0@Z @ 0x18009CD10
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x18009B218 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 * Callees:
 *     McTemplateU0nxnnn_EventWriteTransfer @ 0x18027A514 (McTemplateU0nxnnn_EventWriteTransfer.c)
 */

void __fastcall CTargetStats::ReviseTargetMonitorTime(CTargetStats *this, unsigned __int64 a2, unsigned __int64 a3)
{
  CGlobalComposition *v3; // r11
  __int64 v4; // r10
  __int64 v8; // rsi
  int v9; // r15d
  unsigned __int64 v10; // r8
  char *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned int v16; // ebx
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  unsigned __int64 v19; // rtt
  __int128 v20; // [rsp+60h] [rbp-38h]
  __int64 v21; // [rsp+70h] [rbp-28h]

  v3 = g_pComposition;
  v4 = 0LL;
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 111);
  if ( (unsigned __int64)(v8 - *((_QWORD *)this + 35)) > 0x10 )
  {
    v9 = *((_DWORD *)this + 58);
    v10 = *((_QWORD *)this + 18);
    if ( !v10
      || v10 < a3 && (unsigned int)((a3 - v10) / *((_QWORD *)this + 19)) > 3
      || *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
    {
      v11 = (char *)this + 216;
      v12 = 0LL;
      *(_QWORD *)v11 = 0LL;
      *((_DWORD *)v11 + 4) = 0;
      *((_QWORD *)v11 + 1) = 0LL;
    }
    else
    {
      v13 = *((_QWORD *)this + 19);
      v14 = *((_DWORD *)this + 40);
      v15 = a2 + (v13 >> 1);
      *((_QWORD *)&v20 + 1) = v13;
      if ( v15 < v10 )
      {
        v19 = v10 - v15;
        v10 -= v13 * ((unsigned int)((v10 - v15) / v13) + 1);
        *(_QWORD *)&v20 = v10;
        v16 = v14 - (v19 / v13 + 1);
      }
      else
      {
        *(_QWORD *)&v20 = v10 + v13 * (unsigned int)((v15 - v10) / v13);
        v16 = (v15 - v10) / v13 + v14;
      }
      LODWORD(v21) = v16;
      if ( v16 >= *((_DWORD *)this + 52) )
      {
        v18 = v21;
        v17 = v20;
      }
      else
      {
        v17 = *((_OWORD *)this + 12);
        v18 = *((_QWORD *)this + 26);
      }
      LODWORD(v11) = (_DWORD)this + 216;
      *(_OWORD *)((char *)this + 216) = v17;
      *((_QWORD *)this + 29) = v18;
      v12 = a2 - *((_QWORD *)this + 27);
      if ( *((_QWORD *)this + 27) >= a2 )
        v12 = *((_QWORD *)this + 27) - a2;
    }
    *((_QWORD *)this + 30) = v12;
    if ( v3 )
      v4 = *((_QWORD *)v3 + 111);
    *((_QWORD *)this + 34) = v4;
    if ( *((_DWORD *)this + 58) != v9 )
    {
      *((_QWORD *)this + 35) = v8;
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nxnnn_EventWriteTransfer((_DWORD)v11, v12, v10, (_DWORD)this, v12);
    }
  }
}
