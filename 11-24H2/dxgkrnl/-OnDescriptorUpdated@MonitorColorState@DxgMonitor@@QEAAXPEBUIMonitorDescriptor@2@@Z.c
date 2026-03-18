/*
 * XREFs of ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x14027B354
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006DF90 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline @ 0x140091848 (Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline @ 0x14009189C (Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x14027CEA0 (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  __int128 v4; // xmm1
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r15d
  bool v20; // bl
  __m128i v21; // xmm6
  int v22; // esi
  int v23; // r14d
  bool v24; // zf
  __int64 (*v25)(void); // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // al
  __int64 v31; // rax
  __m128i v32; // xmm8
  int v33; // ebx
  char v34; // dl
  __m128i v35; // xmm6
  __m128i v36; // xmm7
  __int64 v37; // rax
  __int64 v38; // rax
  double v39; // xmm0_8
  double v40; // xmm1_8
  int v41; // eax
  double v42; // xmm0_8
  int v43; // eax
  double v44; // xmm0_8
  int v45; // eax
  double v46; // xmm1_8
  int v47; // eax
  double v48; // xmm0_8
  int v49; // eax
  double v50; // xmm1_8
  int v51; // eax
  double v52; // xmm0_8
  __m128i v53; // [rsp+38h] [rbp-D0h]
  _BYTE v54[36]; // [rsp+48h] [rbp-C0h] BYREF
  double v55[10]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v56; // [rsp+C8h] [rbp-40h]
  _OWORD v57[9]; // [rsp+D8h] [rbp-30h] BYREF

  DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(this);
  memset((char *)v57 + 4, 0, 32);
  memset(v54, 0, 20);
  *((_OWORD *)this + 1) = *(_OWORD *)v54;
  LOBYTE(v57[0]) = 0;
  *((_OWORD *)this + 2) = 0u;
  *((_DWORD *)this + 12) = 0;
  *(_WORD *)((char *)v57 + 1) = 0;
  BYTE3(v57[0]) = 0;
  v4 = v57[1];
  *((_OWORD *)this + 8) = v57[0];
  *((_OWORD *)this + 9) = v4;
  *((_DWORD *)this + 40) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  *(_OWORD *)((char *)this + 328) = 0u;
  if ( !a2 )
    goto LABEL_103;
  *((_BYTE *)this + 48) = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *))(*(_QWORD *)a2 + 176LL))(a2);
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() && *((_BYTE *)this + 48) )
    *((_DWORD *)this + 115) |= 1u;
  v5 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *))(*(_QWORD *)a2 + 128LL))(
         a2,
         (char *)this + 40,
         (char *)this + 20);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 16) = 1;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(3LL, v6, v7);
    WdLogGlobalForLineNumber = 264;
  }
  v8 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *))(*(_QWORD *)a2 + 120LL))(
         a2,
         (char *)this + 132);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_BYTE *)this + 128) = 1;
    *((_DWORD *)this + 33) <<= 10;
    *((_DWORD *)this + 34) <<= 10;
    *((_DWORD *)this + 35) <<= 10;
    *((_DWORD *)this + 36) <<= 10;
    *((_DWORD *)this + 37) <<= 10;
    *((_DWORD *)this + 38) <<= 10;
    *((_DWORD *)this + 39) <<= 10;
    *((_DWORD *)this + 40) <<= 10;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(3LL, v9, v10);
    WdLogGlobalForLineNumber = 275;
  }
  v11 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
          a2,
          (char *)this + 332,
          (char *)this + 336,
          (char *)this + 340);
  v16 = v11;
  if ( v11 >= 0 )
  {
    *((_BYTE *)this + 328) = 1;
  }
  else
  {
    v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v16;
    *(_QWORD *)(v17 + 32) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogGlobalForLineNumber = 301;
  }
  memset(v55, 0, sizeof(v55));
  v18 = *(_QWORD *)a2;
  v56 = 0LL;
  if ( (*(int (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, double *))(v18 + 168))(a2, v55) < 0 )
    goto LABEL_103;
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
  {
    v19 = *((_DWORD *)this + 40);
    v20 = 1;
    v21 = *((__m128i *)this + 9);
    *(_DWORD *)&v54[32] = v19;
    *(_OWORD *)v54 = *((_OWORD *)this + 8);
    *(__m128i *)&v54[16] = v21;
    v53 = *(__m128i *)((char *)this + 328);
    if ( v55[3] == 0.0 || v55[4] == 0.0 || v55[5] == 0.0 || v55[6] == 0.0 || v55[7] == 0.0 || v55[8] == 0.0 )
    {
      if ( !*((_BYTE *)this + 128)
        || !*(_DWORD *)&v54[4]
        || !*(_DWORD *)&v54[8]
        || !*(_DWORD *)&v54[12]
        || !_mm_cvtsi128_si32(v21)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v21, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v21, 8)) )
      {
        v20 = 0;
      }
    }
    else
    {
      *(_DWORD *)&v54[4] = (int)(v55[3] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[8] = (int)(v55[4] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[12] = (int)(v55[5] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[16] = (int)(v55[6] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[20] = (int)(v55[7] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[24] = (int)(v55[8] * 1048576.0 + 0.5);
      v21 = *(__m128i *)&v54[16];
    }
    if ( *(double *)&v56 == 0.0 || *((double *)&v56 + 1) == 0.0 )
    {
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v21, 12)) || v19 )
        goto LABEL_38;
      *(_DWORD *)&v54[28] = 327680;
      v19 = 345088;
    }
    else
    {
      v19 = (int)(*((double *)&v56 + 1) * 1048576.0 + 0.5);
      *(_DWORD *)&v54[28] = (int)(*(double *)&v56 * 1048576.0 + 0.5);
    }
    v21 = *(__m128i *)&v54[16];
    *(_DWORD *)&v54[32] = v19;
LABEL_38:
    if ( v55[2] == 0.0 )
    {
      v22 = v53.m128i_i32[3];
      if ( (unsigned int)Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v20 || !*((_BYTE *)this + 328) || !v53.m128i_i32[2] || (v20 = 1, !v53.m128i_i32[3]) )
          v20 = 0;
        v23 = v53.m128i_i32[1];
      }
      else
      {
        v23 = v53.m128i_i32[1];
        v20 = v20 && *((_BYTE *)this + 328) && v53.m128i_i32[2] && v53.m128i_i32[1] && v53.m128i_i32[3];
      }
    }
    else
    {
      v22 = (int)(v55[2] * 10000.0);
      v53.m128i_i32[3] = v22;
      v23 = (int)(v55[1] * 10000.0);
      *(__int64 *)((char *)v53.m128i_i64 + 4) = __PAIR64__(v22, v23);
    }
    v24 = (unsigned int)Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline() == 0;
    v25 = *(__int64 (**)(void))(**(_QWORD **)this + 32LL);
    if ( v24 )
    {
      v27 = v25();
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 64LL))(v27) && v20 )
      {
        *((_BYTE *)this + 413) = 1;
        if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_103;
        goto LABEL_59;
      }
    }
    else
    {
      v26 = v25();
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26) && LOBYTE(v55[9]) && v20 )
      {
        *((_BYTE *)this + 413) = 1;
LABEL_59:
        *((_DWORD *)this + 115) |= 2u;
        v54[0] = 1;
        v53.m128i_i8[0] = 1;
        *(_OWORD *)((char *)this + 276) = *(_OWORD *)v54;
        *(__m128i *)((char *)this + 292) = v21;
        *((_DWORD *)this + 77) = v19;
        *(__m128i *)((char *)this + 396) = v53;
        goto LABEL_103;
      }
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28)
      || (v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
          (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 72LL))(v29)) )
    {
      if ( v20 )
      {
        v30 = LOBYTE(v55[0]) != 0;
        *((_DWORD *)this + 112) = v23;
        *((_BYTE *)this + 412) = v30;
        *((_OWORD *)this + 26) = *(_OWORD *)&v54[4];
        *((_DWORD *)this + 113) = v22;
        *((_OWORD *)this + 27) = *(_OWORD *)&v54[20];
      }
    }
    goto LABEL_103;
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v31 + 64LL))(v31) && LOBYTE(v55[9]) )
  {
    v32 = *((__m128i *)this + 8);
    v33 = *((_DWORD *)this + 40);
    v34 = 1;
    v35 = *((__m128i *)this + 9);
    v36 = *(__m128i *)((char *)this + 328);
    *(__m128i *)v54 = v32;
    *(__m128i *)&v54[16] = v35;
    v53 = v36;
    if ( v55[3] == 0.0 || v55[4] == 0.0 || v55[5] == 0.0 || v55[6] == 0.0 || v55[7] == 0.0 || v55[8] == 0.0 )
    {
      if ( !*((_BYTE *)this + 128)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v32, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v32, 8))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v32, 12))
        || !_mm_cvtsi128_si32(v35)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v35, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v35, 8)) )
      {
        v34 = 0;
      }
    }
    else
    {
      *(_DWORD *)&v54[4] = (int)(v55[3] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[8] = (int)(v55[4] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[12] = (int)(v55[5] * 1048576.0 + 0.5);
      v32 = *(__m128i *)v54;
      *(_DWORD *)&v54[16] = (int)(v55[6] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[20] = (int)(v55[7] * 1048576.0 + 0.5);
      *(_DWORD *)&v54[24] = (int)(v55[8] * 1048576.0 + 0.5);
      v35 = *(__m128i *)&v54[16];
    }
    if ( *(double *)&v56 != 0.0 && *((double *)&v56 + 1) != 0.0 )
    {
      v33 = (int)(*((double *)&v56 + 1) * 1048576.0 + 0.5);
      *(_DWORD *)&v54[28] = (int)(*(double *)&v56 * 1048576.0 + 0.5);
      v35 = *(__m128i *)&v54[16];
    }
    if ( v55[2] == 0.0 )
    {
      if ( !v34
        || !*((_BYTE *)this + 328)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v36, 8))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v36, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v36, 12)) )
      {
        goto LABEL_103;
      }
    }
    else
    {
      v53.m128i_i32[2] = (int)(v55[2] * 10000.0);
      v53.m128i_i32[3] = v53.m128i_i32[2];
      v53.m128i_i32[1] = (int)(v55[1] * 10000.0);
      if ( !v34 )
        goto LABEL_103;
      v36 = v53;
    }
    *((_BYTE *)this + 413) = 1;
    if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_DWORD *)this + 115) |= 2u;
      v54[0] = 1;
      v53.m128i_i8[0] = 1;
      *(_OWORD *)((char *)this + 276) = *(_OWORD *)v54;
      *(__m128i *)((char *)this + 292) = v35;
      *((_DWORD *)this + 77) = v33;
      *(__m128i *)((char *)this + 396) = v53;
    }
    else
    {
      *((_DWORD *)this + 122) = 964069926;
      *((_DWORD *)this + 123) = -1686232824;
      *((_DWORD *)this + 124) = 138811898;
      *((_DWORD *)this + 125) = 1076903406;
      *((__m128i *)this + 8) = v32;
      *((_BYTE *)this + 516) = 1;
      *((__m128i *)this + 9) = v35;
      *((_DWORD *)this + 40) = v33;
      *((_QWORD *)this + 63) = 1000LL;
      *((_DWORD *)this + 128) = 61473790;
      *(__m128i *)((char *)this + 328) = v36;
    }
    goto LABEL_103;
  }
  v37 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 64LL))(v37)
    || (v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 72LL))(v38)) )
  {
    v39 = v55[1] * 10000.0;
    v40 = v55[3] * 1048576.0;
    *((_BYTE *)this + 412) = LOBYTE(v55[0]) != 0;
    v41 = (int)v39;
    *((_DWORD *)this + 110) = 327680;
    *((_DWORD *)this + 111) = 345088;
    v42 = v55[2] * 10000.0;
    *((_DWORD *)this + 112) = v41;
    v43 = (int)v42;
    v44 = v55[4] * 1048576.0;
    *((_DWORD *)this + 113) = v43;
    v45 = (int)(v40 + 0.5);
    v46 = v55[5];
    *((_DWORD *)this + 104) = v45;
    v47 = (int)(v44 + 0.5);
    v48 = v55[6] * 1048576.0;
    *((_DWORD *)this + 105) = v47;
    v49 = (int)(v46 * 1048576.0 + 0.5);
    v50 = v55[7];
    *((_DWORD *)this + 106) = v49;
    v51 = (int)(v48 + 0.5);
    v52 = v55[8];
    *((_DWORD *)this + 107) = v51;
    *((_DWORD *)this + 108) = (int)(v50 * 1048576.0 + 0.5);
    *((_DWORD *)this + 109) = (int)(v52 * 1048576.0 + 0.5);
  }
LABEL_103:
  DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
}
