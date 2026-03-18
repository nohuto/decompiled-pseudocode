/*
 * XREFs of ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x180032100 (-GetFrameDuration@CComposition@@QEBA_KXZ.c)
 *     ?CalcTargetMonitorTime@CTargetStats@@IEAA_N_K0@Z @ 0x1800CAC70 (-CalcTargetMonitorTime@CTargetStats@@IEAA_N_K0@Z.c)
 *     ?EstimatedNextFrameTargetTime@CClockBase@@UEBA_K_K@Z @ 0x1800CADF0 (-EstimatedNextFrameTargetTime@CClockBase@@UEBA_K_K@Z.c)
 *     ?ReviseTargetMonitorTime@CTargetStats@@IEAAX_K0@Z @ 0x1800CAE40 (-ReviseTargetMonitorTime@CTargetStats@@IEAAX_K0@Z.c)
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x180141BF0 (-Update@CTargetStats@@IEAAX_K@Z.c)
 *     McTemplateU0nxnnn_EventWriteTransfer @ 0x180285170 (McTemplateU0nxnnn_EventWriteTransfer.c)
 *     McTemplateU0nqtqxxnnn_EventWriteTransfer @ 0x180289CEC (McTemplateU0nqtqxxnnn_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall CTargetStats::Ready(CTargetStats *this, unsigned __int64 a2, char a3)
{
  unsigned __int8 v6; // di
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // rax
  CGlobalComposition *v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r8d
  CClockBase *v13; // rcx
  unsigned __int64 (__fastcall *v14)(CClockBase *__hidden, unsigned __int64); // rax
  unsigned __int64 FrameTargetTime; // rax
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r10
  int v18; // r9d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned int v21; // r9d
  int v23; // [rsp+48h] [rbp-70h]

  v6 = 0;
  LOBYTE(v7) = -1;
  CTargetStats::Update(this, a2);
  v8 = (unsigned __int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 39) + 24LL))(*((_QWORD *)g_pComposition + 39));
  v9 = g_pComposition;
  v10 = *v8;
  v11 = 0LL;
  if ( g_pComposition )
    v11 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)this + 34) == v11 )
  {
    CTargetStats::ReviseTargetMonitorTime(this, v10, a2);
LABEL_21:
    v9 = g_pComposition;
    goto LABEL_6;
  }
  if ( CTargetStats::CalcTargetMonitorTime(this, v10, a2) && (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    McTemplateU0nxnnn_EventWriteTransfer(
      (_DWORD)this + 192,
      (_DWORD)this + 216,
      v12,
      (_DWORD)this,
      *((_QWORD *)this + 30));
    goto LABEL_21;
  }
LABEL_6:
  if ( *((_DWORD *)this + 10) )
  {
    if ( *((_DWORD *)this + 10) == 2 )
LABEL_16:
      v6 = 1;
  }
  else
  {
    if ( *((_DWORD *)this + 63) < 2u )
    {
      if ( !*((_QWORD *)this + 27) )
        goto LABEL_16;
      v13 = (CClockBase *)*((_QWORD *)v9 + 39);
      v14 = *(unsigned __int64 (__fastcall **)(CClockBase *__hidden, unsigned __int64))(*(_QWORD *)v13 + 32LL);
      if ( v14 == CClockBase::EstimatedNextFrameTargetTime )
        FrameTargetTime = CClockBase::EstimatedNextFrameTargetTime(v13, a2);
      else
        FrameTargetTime = v14(v13, a2);
      v16 = *((_QWORD *)this + 19);
      v17 = *((_QWORD *)this + 18);
      v18 = *((_DWORD *)this + 40);
      v19 = FrameTargetTime + (v16 >> 1);
      if ( v19 < v17 )
      {
        v20 = v17 - v16 * ((unsigned int)((v17 - v19) / v16) + 1);
        v21 = v18 - ((v17 - v19) / v16 + 1);
      }
      else
      {
        v20 = v17 + v16 * (unsigned int)((v19 - v17) / v16);
        v21 = (v19 - v17) / v16 + v18;
      }
      if ( v21 < *((_DWORD *)this + 52) )
      {
        v20 = *((_QWORD *)this + 24);
        v21 = *((_QWORD *)this + 26);
      }
      if ( *((_DWORD *)this + 58) != v21 )
        goto LABEL_16;
      v7 = v20 < FrameTargetTime ? FrameTargetTime - v20 : v20 - FrameTargetTime;
      if ( *((_QWORD *)this + 30) <= v7
        || a3 && *((_QWORD *)this + 30) <= *((_QWORD *)this + 28) + CComposition::GetFrameDuration(g_pComposition) )
      {
        goto LABEL_16;
      }
    }
    if ( *((_DWORD *)this + 63) )
      v6 = (a2 - *((_QWORD *)this + 32)) / g_qpcFrequency.QuadPart >= 2;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0nqtqxxnnn_EventWriteTransfer(
      *((_DWORD *)this + 10),
      (_DWORD)this + 216,
      v6,
      (_DWORD)this,
      v6,
      *((_DWORD *)this + 10),
      *((_DWORD *)this + 63),
      *((_QWORD *)this + 30),
      v7,
      v23,
      (__int64)this + 216);
  return v6;
}
