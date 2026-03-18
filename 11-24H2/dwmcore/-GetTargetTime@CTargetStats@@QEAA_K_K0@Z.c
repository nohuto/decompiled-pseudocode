/*
 * XREFs of ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z @ 0x1801049C4
 * Callers:
 *     ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z @ 0x1801033B0 (-GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z.c)
 *     ?GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z @ 0x1801043A0 (-GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z.c)
 *     ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180104410 (-SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV-$vector_facade@VCSortedMonitorTarget@CRender.c)
 * Callees:
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1801059F0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 *     McTemplateU0nxnnn_EventWriteTransfer @ 0x18027A514 (McTemplateU0nxnnn_EventWriteTransfer.c)
 */

unsigned __int64 __fastcall CTargetStats::GetTargetTime(CTargetStats *this, unsigned __int64 a2, LARGE_INTEGER a3)
{
  __int64 v3; // rdi
  __int64 v7; // xmm1_8
  unsigned int v8; // ecx
  __int64 v9; // rax
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  LONGLONG v13; // rax
  LARGE_INTEGER v14; // r8
  unsigned __int64 v15; // r10
  int v16; // r9d
  unsigned __int64 v17; // rcx
  unsigned int v18; // r9d
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  char *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v24; // rtt
  __int128 v25; // [rsp+60h] [rbp-28h]
  __int64 v26; // [rsp+70h] [rbp-18h]
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return 0LL;
  if ( a3.QuadPart > *((_QWORD *)this + 16) )
    CTargetStats::UpdatePresentStats(this);
  if ( *((_QWORD *)this + 16) )
  {
    v7 = *((_QWORD *)this + 20);
    v8 = *((_DWORD *)this + 63) + 1;
    *((_OWORD *)this + 12) = *((_OWORD *)this + 9);
    *((_QWORD *)this + 26) = v7;
    v9 = *((_QWORD *)this + 25) * v8;
    *((_DWORD *)this + 52) += v8;
    *((_QWORD *)this + 24) += v9;
    v10 = a3;
    PerformanceCount = a3;
    if ( !a3.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v10 = PerformanceCount;
    }
    v11 = *((_QWORD *)this + 25);
    v12 = *((_QWORD *)this + 24);
    if ( v12 + v11 < v10.QuadPart )
    {
      v13 = (v10.QuadPart - v12) / v11;
      *((_DWORD *)this + 52) += v13;
      *((_QWORD *)this + 24) = v12 + v13 * v11;
    }
  }
  v14 = *(LARGE_INTEGER *)((char *)this + 144);
  if ( !v14.QuadPart
    || v14.QuadPart < (unsigned __int64)a3.QuadPart
    && (unsigned int)((a3.QuadPart - v14.QuadPart) / *((_QWORD *)this + 19)) > 3
    || *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
  {
    v21 = (char *)this + 216;
    v22 = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_DWORD *)this + 58) = 0;
    *((_QWORD *)this + 28) = 0LL;
  }
  else
  {
    v15 = *((_QWORD *)this + 19);
    v16 = *((_DWORD *)this + 40);
    v17 = a2 + (v15 >> 1);
    if ( v17 < v14.QuadPart )
    {
      v24 = v14.QuadPart - v17;
      v14.QuadPart -= v15 * ((unsigned int)((v14.QuadPart - v17) / v15) + 1);
      *(LARGE_INTEGER *)&v25 = v14;
      v18 = v16 - (v24 / v15 + 1);
    }
    else
    {
      *(_QWORD *)&v25 = v14.QuadPart + v15 * (unsigned int)((v17 - v14.QuadPart) / v15);
      v18 = (v17 - v14.QuadPart) / v15 + v16;
    }
    LODWORD(v26) = v18;
    if ( v18 >= *((_DWORD *)this + 52) )
    {
      v20 = v26;
      *((_QWORD *)&v25 + 1) = *((_QWORD *)this + 19);
      v19 = v25;
    }
    else
    {
      v19 = *((_OWORD *)this + 12);
      v20 = *((_QWORD *)this + 26);
    }
    v21 = (char *)this + 216;
    *(_OWORD *)((char *)this + 216) = v19;
    *((_QWORD *)this + 29) = v20;
    v22 = a2 - *((_QWORD *)this + 27);
    if ( *((_QWORD *)this + 27) >= a2 )
      v22 = *((_QWORD *)this + 27) - a2;
  }
  *((_QWORD *)this + 30) = v22;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 111);
  *((_QWORD *)this + 34) = v3;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0nxnnn_EventWriteTransfer((_DWORD)this + 192, v22, v14.LowPart, (_DWORD)this, v22);
  return *(_QWORD *)v21;
}
