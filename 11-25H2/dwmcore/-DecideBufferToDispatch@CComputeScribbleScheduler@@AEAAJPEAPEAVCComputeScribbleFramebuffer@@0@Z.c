/*
 * XREFs of ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180174654
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x18017433C (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x180174298 (-GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z.c)
 *     ?QueryPerformanceCounter@QpcUtils@@YA_KXZ @ 0x180174B74 (-QueryPerformanceCounter@QpcUtils@@YA_KXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     McTemplateU0qqqff_EventWriteTransfer @ 0x1802938C4 (McTemplateU0qqqff_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::DecideBufferToDispatch(
        CComputeScribbleScheduler *this,
        struct CComputeScribbleFramebuffer **a2,
        struct CComputeScribbleFramebuffer **a3)
{
  __int64 v6; // r14
  CComputeScribbleRenderer *v7; // rcx
  __int64 v8; // r14
  int OverlayMonitorTarget; // eax
  unsigned int v10; // ebx
  struct IOverlayMonitorTarget *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  QpcUtils *v15; // rcx
  unsigned int v16; // r15d
  unsigned __int64 PerformanceCounter; // rax
  unsigned __int64 v18; // rax
  double v19; // xmm0_8
  int v20; // r10d
  int v21; // r8d
  double v22; // xmm3_8
  double v23; // xmm4_8
  struct CComputeScribbleFramebuffer *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  struct CComputeScribbleFramebuffer *v27; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // r9d
  int v32; // ecx
  float v33; // [rsp+30h] [rbp-41h]
  float v34; // [rsp+38h] [rbp-39h]
  struct IOverlayMonitorTarget *v35; // [rsp+48h] [rbp-29h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h] BYREF
  __int128 v37; // [rsp+58h] [rbp-19h] BYREF
  __int128 v38; // [rsp+68h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 17) - *((_QWORD *)this + 16);
  v7 = (CComputeScribbleRenderer *)*((_QWORD *)this + 25);
  v8 = v6 >> 3;
  v35 = 0LL;
  OverlayMonitorTarget = CComputeScribbleRenderer::GetOverlayMonitorTarget(v7, &v35);
  v10 = OverlayMonitorTarget;
  if ( OverlayMonitorTarget < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)OverlayMonitorTarget);
    if ( v35 )
      (*(void (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v35 + 16LL))(v35);
    return v10;
  }
  else
  {
    v11 = v35;
    v12 = (*(__int64 (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v35 + 280LL))(v35);
    v36 = v12;
    v13 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v37 = 0LL;
      v38 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 136LL))(v13, &v37);
      v16 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FA,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
        return v16;
      }
      else
      {
        PerformanceCounter = QpcUtils::QueryPerformanceCounter(v15);
        v18 = (PerformanceCounter - (unsigned __int64)v38) / (qword_180406AC8 / 0xF4240uLL);
        if ( (v18 & 0x8000000000000000uLL) != 0LL )
          v19 = (double)(int)(v18 & 1 | (v18 >> 1)) + (double)(int)(v18 & 1 | (v18 >> 1));
        else
          v19 = (double)(int)v18;
        v20 = v37 - *((_DWORD *)this + 48);
        v21 = 0;
        v22 = 0.0;
        v23 = 0.0;
        while ( v21 < (unsigned int)v8 )
        {
          v24 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 16) + 8LL * ((v21 + v20) % (unsigned int)v8));
          if ( *((_BYTE *)v24 + 256) )
          {
            if ( *((_BYTE *)this + 216) )
              goto LABEL_10;
            v29 = *((_QWORD *)this + 19);
            v30 = 32LL * ((v21 + v20) % (unsigned int)v8);
            if ( !v21 )
            {
              v23 = *(double *)(v30 + v29 + 8);
              *(_QWORD *)&v22 = COERCE_UNSIGNED_INT64(*((double *)this + 6) - v19 / 1000000.0 - (v23
                                                                                               - (double)0
                                                                                               * *((double *)this + 6))) & _xmm;
            }
            if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                                 *((double *)this + 6)
                               - v19 / 1000000.0
                               - (*(double *)(v30 + v29 + 8)
                                - (double)v21 * *((double *)this + 6))) & _xmm) < 0.002499999944120646 )
            {
LABEL_10:
              *a2 = v24;
              break;
            }
          }
          ++v21;
        }
        v25 = (v20 + 1) % (unsigned int)v8;
        v26 = (unsigned int)v25;
        if ( *a2 )
          v25 = (*((_DWORD *)*a2 + 65) + 1) % (unsigned int)v8;
        v27 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 16) + 8 * v25);
        if ( *((_BYTE *)v27 + 256) )
          *a3 = v27;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        {
          v31 = -1;
          if ( *a3 )
            v32 = *((_DWORD *)*a3 + 65);
          else
            v32 = -1;
          if ( *a2 )
            v31 = *((_DWORD *)*a2 + 65);
          v34 = v23;
          v33 = v22;
          McTemplateU0qqqff_EventWriteTransfer(v32, (_DWORD)v27, v26, v31, v32, SLOBYTE(v33), SLOBYTE(v34));
        }
        (*(void (__fastcall **)(__int64, struct CComputeScribbleFramebuffer *, __int64))(*(_QWORD *)v13 + 16LL))(
          v13,
          v27,
          v26);
        if ( v11 )
          (*(void (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v11 + 16LL))(v11);
        return 0LL;
      }
    }
    else
    {
      if ( v11 )
        (*(void (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v11 + 16LL))(v11);
      return 2291662854LL;
    }
  }
}
