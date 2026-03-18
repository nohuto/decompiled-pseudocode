/*
 * XREFs of ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1402740C8
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403D545C (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006E13C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline @ 0x14009043C (Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline @ 0x140090490 (Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline @ 0x1400904E4 (Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline @ 0x140090538 (Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140275630 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1402759A0 (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  __int128 v4; // xmm1
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // eax
  int *v8; // r14
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r14d
  bool v21; // bl
  __m128i v22; // xmm6
  int v23; // esi
  int v24; // r15d
  __int64 v25; // rax
  bool v26; // zf
  __int64 (*v27)(void); // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // al
  __int64 v33; // rax
  __m128i v34; // xmm8
  int v35; // esi
  char v36; // bl
  __m128i v37; // xmm6
  __m128i v38; // xmm7
  double v39; // xmm1_8
  double v40; // xmm0_8
  int v41; // eax
  double v42; // xmm0_8
  int v43; // eax
  double v44; // xmm0_8
  int v45; // eax
  double v46; // xmm1_8
  int v47; // eax
  double v48; // xmm0_8
  int v49; // eax
  double v50; // xmm0_8
  int v51; // ecx
  double v52; // xmm0_8
  __int64 v53; // rax
  __int64 v54; // rax
  double v55; // xmm0_8
  double v56; // xmm1_8
  int v57; // eax
  double v58; // xmm0_8
  int v59; // eax
  double v60; // xmm0_8
  int v61; // eax
  double v62; // xmm1_8
  int v63; // eax
  double v64; // xmm0_8
  int v65; // eax
  double v66; // xmm1_8
  int v67; // eax
  double v68; // xmm0_8
  __int128 v69; // [rsp+30h] [rbp-D0h]
  __m128i v70; // [rsp+30h] [rbp-D0h]
  _BYTE v71[36]; // [rsp+40h] [rbp-C0h] BYREF
  double v72[10]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v73; // [rsp+C0h] [rbp-40h]
  _OWORD v74[9]; // [rsp+D0h] [rbp-30h] BYREF

  DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(this);
  memset((char *)v74 + 4, 0, 32);
  memset(v71, 0, 20);
  *((_OWORD *)this + 1) = *(_OWORD *)v71;
  LOBYTE(v74[0]) = 0;
  *((_OWORD *)this + 2) = 0u;
  *((_DWORD *)this + 12) = 0;
  *(_WORD *)((char *)v74 + 1) = 0;
  BYTE3(v74[0]) = 0;
  v4 = v74[1];
  *((_OWORD *)this + 8) = v74[0];
  *((_OWORD *)this + 9) = v4;
  *((_DWORD *)this + 40) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  *(_OWORD *)((char *)this + 328) = 0u;
  if ( !a2 )
    goto LABEL_107;
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
    WdLogGlobalForLineNumber = 257;
  }
  v8 = (int *)((char *)this + 132);
  v9 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *))(*(_QWORD *)a2 + 120LL))(
         a2,
         (char *)this + 132);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)this + 128) = 1;
    *v8 <<= 10;
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
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(3LL, v10, v11);
    WdLogGlobalForLineNumber = 268;
  }
  v12 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
          a2,
          (char *)this + 332,
          (char *)this + 336,
          (char *)this + 340);
  v17 = v12;
  if ( v12 >= 0 )
  {
    *((_BYTE *)this + 328) = 1;
  }
  else
  {
    v18 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)(v18 + 32) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogGlobalForLineNumber = 294;
  }
  memset(v72, 0, sizeof(v72));
  v19 = *(_QWORD *)a2;
  v73 = 0LL;
  if ( (*(int (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, double *))(v19 + 168))(a2, v72) < 0 )
    goto LABEL_107;
  if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
  {
    v20 = *((_DWORD *)this + 40);
    v21 = 1;
    v22 = *((__m128i *)this + 9);
    *(_DWORD *)&v71[32] = v20;
    *(_OWORD *)v71 = *((_OWORD *)this + 8);
    *(__m128i *)&v71[16] = v22;
    v69 = *(_OWORD *)((char *)this + 328);
    if ( v72[3] == 0.0 || v72[4] == 0.0 || v72[5] == 0.0 || v72[6] == 0.0 || v72[7] == 0.0 || v72[8] == 0.0 )
    {
      if ( !*((_BYTE *)this + 128)
        || !*(_DWORD *)&v71[4]
        || !*(_DWORD *)&v71[8]
        || !*(_DWORD *)&v71[12]
        || !_mm_cvtsi128_si32(v22)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v22, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v22, 8)) )
      {
        v21 = 0;
      }
    }
    else
    {
      *(_DWORD *)&v71[4] = (int)(v72[3] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[8] = (int)(v72[4] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[12] = (int)(v72[5] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[16] = (int)(v72[6] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[20] = (int)(v72[7] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[24] = (int)(v72[8] * 1048576.0 + 0.5);
      v22 = *(__m128i *)&v71[16];
    }
    if ( *(double *)&v73 == 0.0 || *((double *)&v73 + 1) == 0.0 )
    {
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v22, 12)) || v20 )
      {
LABEL_38:
        if ( v72[2] == 0.0 )
        {
          v23 = HIDWORD(v69);
          if ( (unsigned int)Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( !v21 || !*((_BYTE *)this + 328) || !DWORD2(v69) || (v21 = 1, !HIDWORD(v69)) )
              v21 = 0;
            v24 = DWORD1(v69);
          }
          else
          {
            v24 = DWORD1(v69);
            v21 = v21 && *((_BYTE *)this + 328) && DWORD2(v69) && DWORD1(v69) && HIDWORD(v69);
          }
        }
        else
        {
          v23 = (int)(v72[2] * 10000.0);
          HIDWORD(v69) = v23;
          v24 = (int)(v72[1] * 10000.0);
          *(_QWORD *)((char *)&v69 + 4) = __PAIR64__(v23, v24);
        }
        if ( (unsigned int)Feature_DolbyVisionSourceLedHDRFlags__private_IsEnabledDeviceUsageNoInline() )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25) && LOBYTE(v72[9]) && v21 )
          {
            *((_BYTE *)this + 413) = 1;
LABEL_63:
            *((_DWORD *)this + 115) |= 2u;
            v71[0] = 1;
            LOBYTE(v69) = 1;
            *(_OWORD *)((char *)this + 276) = *(_OWORD *)v71;
            *(__m128i *)((char *)this + 292) = v22;
            *((_DWORD *)this + 77) = v20;
            *(_OWORD *)((char *)this + 396) = v69;
            goto LABEL_107;
          }
          goto LABEL_66;
        }
        v26 = (unsigned int)Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsageNoInline() == 0;
        v27 = *(__int64 (**)(void))(**(_QWORD **)this + 32LL);
        if ( v26 )
        {
          v29 = v27();
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29) || !LOBYTE(v72[9]) )
            goto LABEL_66;
        }
        else
        {
          v28 = v27();
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28) )
            goto LABEL_66;
        }
        if ( v21 )
        {
          *((_BYTE *)this + 413) = 1;
          if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_63;
          goto LABEL_107;
        }
LABEL_66:
        v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 64LL))(v30)
          || (v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
              (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v31 + 72LL))(v31)) )
        {
          if ( v21 )
          {
            v32 = LOBYTE(v72[0]) != 0;
            *((_DWORD *)this + 112) = v24;
            *((_BYTE *)this + 412) = v32;
            *((_OWORD *)this + 26) = *(_OWORD *)&v71[4];
            *((_DWORD *)this + 113) = v23;
            *((_OWORD *)this + 27) = *(_OWORD *)&v71[20];
          }
        }
        goto LABEL_107;
      }
      *(_DWORD *)&v71[28] = 327680;
      v20 = 345088;
    }
    else
    {
      v20 = (int)(*((double *)&v73 + 1) * 1048576.0 + 0.5);
      *(_DWORD *)&v71[28] = (int)(*(double *)&v73 * 1048576.0 + 0.5);
    }
    v22 = *(__m128i *)&v71[16];
    *(_DWORD *)&v71[32] = v20;
    goto LABEL_38;
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v33 + 64LL))(v33) && LOBYTE(v72[9]) )
  {
    v34 = *((__m128i *)this + 8);
    v35 = *((_DWORD *)this + 40);
    v36 = 1;
    v37 = *((__m128i *)this + 9);
    v38 = *(__m128i *)((char *)this + 328);
    *(__m128i *)v71 = v34;
    *(__m128i *)&v71[16] = v37;
    v70 = v38;
    if ( !(unsigned int)Feature_DolbyVisionVSVDBv4_Support__private_IsEnabledDeviceUsageNoInline() )
    {
      v39 = v72[5];
      v40 = v72[3] * 1048576.0;
      *((_BYTE *)this + 328) = 1;
      *((_BYTE *)this + 413) = 1;
      *((_BYTE *)this + 512) = 1;
      *((_DWORD *)this + 121) = 964069926;
      *((_DWORD *)this + 122) = -1686232824;
      *((_DWORD *)this + 123) = 138811898;
      *((_DWORD *)this + 124) = 1076903406;
      *(_QWORD *)((char *)this + 500) = 1000LL;
      v41 = (int)(v40 + 0.5);
      *((_DWORD *)this + 127) = 61473790;
      v42 = v72[4] * 1048576.0;
      *v8 = v41;
      v43 = (int)(v42 + 0.5);
      v44 = v72[6] * 1048576.0;
      *((_DWORD *)this + 34) = v43;
      v45 = (int)(v39 * 1048576.0 + 0.5);
      v46 = v72[7];
      *((_DWORD *)this + 35) = v45;
      v47 = (int)(v44 + 0.5);
      v48 = v72[8] * 1048576.0;
      *((_DWORD *)this + 36) = v47;
      *((_DWORD *)this + 37) = (int)(v46 * 1048576.0 + 0.5);
      v49 = (int)(v48 + 0.5);
      v50 = v72[2] * 10000.0;
      *((_DWORD *)this + 38) = v49;
      v51 = (int)v50;
      v52 = v72[1] * 10000.0;
      *((_DWORD *)this + 84) = v51;
      *((_DWORD *)this + 85) = v51;
      *((_DWORD *)this + 83) = (int)v52;
      goto LABEL_107;
    }
    if ( v72[3] == 0.0 || v72[4] == 0.0 || v72[5] == 0.0 || v72[6] == 0.0 || v72[7] == 0.0 || v72[8] == 0.0 )
    {
      if ( !*((_BYTE *)this + 128)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v34, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v34, 8))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v34, 12))
        || !_mm_cvtsi128_si32(v37)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v37, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v37, 8)) )
      {
        v36 = 0;
      }
    }
    else
    {
      *(_DWORD *)&v71[4] = (int)(v72[3] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[8] = (int)(v72[4] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[12] = (int)(v72[5] * 1048576.0 + 0.5);
      v34 = *(__m128i *)v71;
      *(_DWORD *)&v71[16] = (int)(v72[6] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[20] = (int)(v72[7] * 1048576.0 + 0.5);
      *(_DWORD *)&v71[24] = (int)(v72[8] * 1048576.0 + 0.5);
      v37 = *(__m128i *)&v71[16];
    }
    if ( *(double *)&v73 != 0.0 && *((double *)&v73 + 1) != 0.0 )
    {
      v35 = (int)(*((double *)&v73 + 1) * 1048576.0 + 0.5);
      *(_DWORD *)&v71[28] = (int)(*(double *)&v73 * 1048576.0 + 0.5);
      v37 = *(__m128i *)&v71[16];
    }
    if ( v72[2] == 0.0 )
    {
      if ( !v36
        || !*((_BYTE *)this + 328)
        || !_mm_cvtsi128_si32(_mm_srli_si128(v38, 8))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v38, 4))
        || !_mm_cvtsi128_si32(_mm_srli_si128(v38, 12)) )
      {
        goto LABEL_107;
      }
    }
    else
    {
      v70.m128i_i32[2] = (int)(v72[2] * 10000.0);
      v70.m128i_i32[3] = v70.m128i_i32[2];
      v70.m128i_i32[1] = (int)(v72[1] * 10000.0);
      if ( !v36 )
        goto LABEL_107;
      v38 = v70;
    }
    *((_BYTE *)this + 413) = 1;
    if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_DWORD *)this + 115) |= 2u;
      v71[0] = 1;
      v70.m128i_i8[0] = 1;
      *(_OWORD *)((char *)this + 276) = *(_OWORD *)v71;
      *(__m128i *)((char *)this + 292) = v37;
      *((_DWORD *)this + 77) = v35;
      *(__m128i *)((char *)this + 396) = v70;
    }
    else
    {
      *((_DWORD *)this + 121) = 964069926;
      *((_DWORD *)this + 122) = -1686232824;
      *((_DWORD *)this + 123) = 138811898;
      *((_DWORD *)this + 124) = 1076903406;
      *((__m128i *)this + 8) = v34;
      *((_BYTE *)this + 512) = 1;
      *((__m128i *)this + 9) = v37;
      *((_DWORD *)this + 40) = v35;
      *(_QWORD *)((char *)this + 500) = 1000LL;
      *((_DWORD *)this + 127) = 61473790;
      *(__m128i *)((char *)this + 328) = v38;
    }
    goto LABEL_107;
  }
  v53 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v53 + 64LL))(v53)
    || (v54 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v54 + 72LL))(v54)) )
  {
    v55 = v72[1] * 10000.0;
    v56 = v72[3] * 1048576.0;
    *((_BYTE *)this + 412) = LOBYTE(v72[0]) != 0;
    v57 = (int)v55;
    *((_DWORD *)this + 110) = 327680;
    *((_DWORD *)this + 111) = 345088;
    v58 = v72[2] * 10000.0;
    *((_DWORD *)this + 112) = v57;
    v59 = (int)v58;
    v60 = v72[4] * 1048576.0;
    *((_DWORD *)this + 113) = v59;
    v61 = (int)(v56 + 0.5);
    v62 = v72[5];
    *((_DWORD *)this + 104) = v61;
    v63 = (int)(v60 + 0.5);
    v64 = v72[6] * 1048576.0;
    *((_DWORD *)this + 105) = v63;
    v65 = (int)(v62 * 1048576.0 + 0.5);
    v66 = v72[7];
    *((_DWORD *)this + 106) = v65;
    v67 = (int)(v64 + 0.5);
    v68 = v72[8];
    *((_DWORD *)this + 107) = v67;
    *((_DWORD *)this + 108) = (int)(v66 * 1048576.0 + 0.5);
    *((_DWORD *)this + 109) = (int)(v68 * 1048576.0 + 0.5);
  }
LABEL_107:
  DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
}
