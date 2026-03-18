/*
 * XREFs of ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180104C40
 * Callers:
 *     ?GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1801051C0 (-GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z @ 0x180105710 (-GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1801059F0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 *     ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180105C80 (-GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x180105FB0 (-Update@CTargetStats@@IEAAX_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentStatisticsDWM(
        CDDisplaySwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int128 *, __int64 *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  float v15; // xmm1_4
  float v16; // xmm0_4
  CGlobalComposition *v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  _DWORD *v21; // [rsp+78h] [rbp+38h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 50);
  if ( !v4 )
  {
    v8 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0xEBu, 0LL);
    return v8;
  }
  v19 = 0LL;
  v21 = 0LL;
  v5 = *v4;
  v20 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v5 + 64);
  v18 = DisplaySource_FrameStatistics2;
  v7 = v6(v4, &v18, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
            v20,
            &GUID_905a0fef_bc53_11df_8c49_001e4fc686da,
            &v19);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xC2u, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v19 + 24LL))(v19, &v21);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v12 = v21;
        *(_DWORD *)a2 = *v21;
        *((_DWORD *)a2 + 1) = v12[1];
        *((_QWORD *)a2 + 1) = *((_QWORD *)v12 + 1);
        *((_DWORD *)a2 + 4) = v12[4];
        *((_QWORD *)a2 + 3) = *((_QWORD *)v12 + 3);
        *((_DWORD *)a2 + 8) = v12[8];
        *((_DWORD *)a2 + 9) = v12[9];
        *((_QWORD *)a2 + 5) = *((_QWORD *)v12 + 5);
        *((_DWORD *)a2 + 12) = v12[12];
        *((_QWORD *)a2 + 7) = *((_QWORD *)v12 + 7);
        v13 = *((_QWORD *)v12 + 8);
        *((_QWORD *)a2 + 8) = v13;
        *((_DWORD *)a2 + 18) = v12[18];
        v14 = *((_QWORD *)this + 18);
        if ( v14 != v13 )
        {
          v15 = v13 < 0
              ? (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
              + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
              : (float)(int)v13;
          *((_QWORD *)this + 18) = v13;
          v16 = v14 < 0
              ? (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
              + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
              : (float)(int)v14;
          if ( (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - v15) & _xmm) / v15) >= 0.050000001 )
          {
            v17 = g_pComposition;
            *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 748LL) = 1;
            if ( (*((_QWORD *)this + 18) == 0xFFFFFFFFLL) != (v14 == 0xFFFFFFFFLL) )
            {
              *(_BYTE *)(*((_QWORD *)v17 + 77) + 747LL) = 1;
              if ( v14 == 0xFFFFFFFFLL )
                *(_BYTE *)(*((_QWORD *)v17 + 77) + 749LL) = 1;
            }
          }
        }
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xC3u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC1u, 0LL);
LABEL_4:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v8;
}
