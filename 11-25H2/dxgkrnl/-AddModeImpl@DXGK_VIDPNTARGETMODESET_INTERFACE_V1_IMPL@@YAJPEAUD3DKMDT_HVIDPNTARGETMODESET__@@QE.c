/*
 * XREFs of ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1403BE9CC
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1403BE990 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1403BE9B0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x14003E5BC (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x140040B40 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x140042324 (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNTARGETMODE@@@@QEAA@XZ @ 0x14004A970 (--1-$auto_ptr@VDMMVIDPNTARGETMODE@@@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x140386D00 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1403946C0 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddModeImpl(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        enum _DXGK_VIDPN_INTERFACE_VERSION a4)
{
  struct _D3DDDI_RATIONAL *v4; // r15
  int v5; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  DMMVIDPNTARGETMODESET *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // r9d
  unsigned __int64 v30; // r11
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v31; // rdx
  __int64 v32; // rcx
  int v33; // r8d
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  DMMVIDPNTARGETMODE *v38; // rax
  DMMVIDPNTARGETMODE *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int8 v42; // al
  int v43; // r10d
  int v44; // r8d
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  bool v54; // zf
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  _QWORD *v60; // rax
  int v61; // [rsp+30h] [rbp-20h] BYREF
  __int64 v62; // [rsp+38h] [rbp-18h]
  char v63; // [rsp+40h] [rbp-10h]
  DMMVIDPNTARGETMODE *v64; // [rsp+90h] [rbp+40h] BYREF
  DMMVIDPNTARGETMODE *v65; // [rsp+98h] [rbp+48h] BYREF

  v61 = -1;
  v4 = 0LL;
  v5 = (int)a3;
  v62 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v63 = 1;
    v61 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7014);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v61, 7014);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = a2;
  *(_QWORD *)(v12 + 32) = this;
  WdLogGlobalForLineNumber = 1442;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 1448;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
    if ( v63 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v61);
    }
    return 3223192337LL;
  }
  v16 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v17 = (DMMVIDPNTARGETMODESET *)v16;
  if ( !v16 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1462;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
    if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v61);
    return 3223192329LL;
  }
  v20 = *(_QWORD *)(v16 + 112);
  if ( !*(_QWORD *)(v20 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v22 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v20 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v22 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v23 = *(_QWORD *)(v22 + 8);
  if ( !v23 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1469;
  }
  if ( *((_DWORD *)a2 + 7) == -2 && *((_DWORD *)a2 + 8) == -2 )
  {
    if ( *((_DWORD *)a2 + 9) != -2 || *((_DWORD *)a2 + 10) != -2 || *((_QWORD *)a2 + 6) != 4294967294LL )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
      WdLogGlobalForLineNumber = 1515;
      goto LABEL_78;
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( *(_QWORD *)(v24 + 696) )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      {
        WdLogSingleEntry2(2LL, v24, -1071774966LL);
        WdLogGlobalForLineNumber = 1490;
        goto LABEL_78;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v24, 4294967294LL, -1071774966LL) + 24) = *(_QWORD *)(v23 + 16);
      WdLogGlobalForLineNumber = 1497;
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v24, 4294967294LL, -1071774966LL);
      v25[3] = *((unsigned int *)a2 + 5);
      v25[4] = *((unsigned int *)a2 + 6);
      v25[5] = *((unsigned int *)a2 + 7);
      v25[6] = *((unsigned int *)a2 + 8);
      WdLogGlobalForLineNumber = 1504;
    }
  }
  else
  {
    v26 = *(_QWORD *)(v23 + 16);
    if ( (*(_DWORD *)(v26 + 444) & 0x100) == 0 && !*(_QWORD *)(v26 + 696) )
    {
      WdLogSingleEntry2(2LL, v26, -1071774966LL);
      WdLogGlobalForLineNumber = 1523;
      goto LABEL_78;
    }
    if ( *((_DWORD *)a2 + 9) == -2 && *((_DWORD *)a2 + 10) == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
      {
        WdLogSingleEntry4(
          2LL,
          *((unsigned int *)a2 + 5),
          *((unsigned int *)a2 + 6),
          *((unsigned int *)a2 + 7),
          *((unsigned int *)a2 + 8));
        WdLogGlobalForLineNumber = 1536;
        goto LABEL_78;
      }
      *((_DWORD *)a2 + 9) = 1000;
      *((_DWORD *)a2 + 10) = 1;
    }
    if ( *((_QWORD *)a2 + 6) == 4294967294LL )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedPixelRate )
      {
        WdLogSingleEntry4(
          2LL,
          *((unsigned int *)a2 + 5),
          *((unsigned int *)a2 + 6),
          *((unsigned int *)a2 + 7),
          *((unsigned int *)a2 + 8));
        WdLogGlobalForLineNumber = 1552;
        goto LABEL_78;
      }
      *((_QWORD *)a2 + 6) = 1000000LL;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 14) + 96LL) + 84LL) == 15
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 14) + 96LL) + 84LL) - 16) < 2
    || (v27 = *(_QWORD *)(v23 + 16), (*(_DWORD *)(v27 + 444) & 0x200) != 0) )
  {
    v28 = *((unsigned int *)a2 + 14);
    if ( (v28 & 0x1F8) == 0 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
      WdLogGlobalForLineNumber = 1570;
      goto LABEL_78;
    }
    if ( *(_QWORD *)(a2 + 7) != 0xFFFFFFFEFFFFFFFEuLL )
    {
      if ( DXGADAPTER::IsAdapterSessionized(
             *(DXGADAPTER **)(v23 + 16),
             (struct _LUID *)(10 * (unsigned __int64)*((unsigned int *)a2 + 7)
                            % (*((unsigned int *)a2 + 8) * ((v28 >> 3) & 0x3F))),
             0LL,
             0LL) )
      {
        if ( v30 < 0x32 )
        {
          WdLogSingleEntry2((unsigned int)(v29 + 2), *(_QWORD *)(v23 + 16), -1071774966LL);
          WdLogGlobalForLineNumber = 1587;
          goto LABEL_78;
        }
      }
      else if ( v30 < 0xEF )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
        WdLogGlobalForLineNumber = 1597;
        goto LABEL_78;
      }
    }
  }
  else if ( ((_DWORD)a2[14] & 0x1F8) != 0 )
  {
    WdLogSingleEntry2(2LL, v27, -1071774966LL);
    WdLogGlobalForLineNumber = 1609;
    goto LABEL_78;
  }
  v31 = a2 + 17;
  if ( v5 < 2 )
  {
    if ( *(_DWORD *)v31 != -1 || *((_DWORD *)a2 + 18) != -1 )
    {
      LODWORD(v50) = -1073741819;
      WdLogSingleEntry5(0LL, 275LL, 7LL, *(_QWORD *)(v23 + 16), -1073741819LL, 0LL);
      WdLogGlobalForLineNumber = 1721;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
      v54 = v63 == 0;
      goto LABEL_101;
    }
  }
  else
  {
    v32 = *(_DWORD *)v31;
    if ( (*(_DWORD *)(v23 + 24) & 0x20) != 0 )
    {
      if ( (_DWORD)v32 == -1 || (v33 = *((_DWORD *)a2 + 18), v33 == -1) )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
        WdLogGlobalForLineNumber = 1634;
        goto LABEL_78;
      }
      if ( (_DWORD)v32 != -2 || v33 != -2 )
      {
        v4 = (struct _D3DDDI_RATIONAL *)(a2 + 17);
        if ( (_DWORD)v32 != -2 )
        {
          v34 = *((unsigned int *)a2 + 18);
          if ( (_DWORD)v34 != -2 && (!(_DWORD)v32 || (_DWORD)v34) )
          {
            if ( v34 * (unsigned __int64)*((unsigned int *)a2 + 7) < v32 * (unsigned __int64)*((unsigned int *)a2 + 8) )
            {
              WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
              WdLogGlobalForLineNumber = 1678;
              goto LABEL_78;
            }
            if ( !(_DWORD)v34 )
              *((_DWORD *)a2 + 18) = 1;
            goto LABEL_84;
          }
        }
        WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
        WdLogGlobalForLineNumber = 1661;
LABEL_78:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
        if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v61);
        return 3223192330LL;
      }
    }
    else
    {
      v35 = -1;
      if ( (_DWORD)v32 != -1 && (v35 = -2, (_DWORD)v32 != -2) || *((_DWORD *)a2 + 18) != v35 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v23 + 16), -1071774966LL);
        WdLogGlobalForLineNumber = 1707;
        goto LABEL_78;
      }
    }
  }
LABEL_84:
  v38 = (DMMVIDPNTARGETMODE *)operator new(0xA8uLL, 0x4E506456u, 256LL, 2LL);
  if ( v38 )
    v39 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v38, *(_DWORD *)a2);
  else
    v39 = 0LL;
  v64 = v39;
  if ( !v39 )
  {
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 1733;
    auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
    if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v61);
    return 3221225495LL;
  }
  v42 = DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v23 + 16));
  v44 = v43 & 3;
  if ( v42 )
    v44 = v43;
  v45 = DMMVIDPNTARGETMODE::Initialize(
          v39,
          (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2),
          (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v44,
          v4);
  v50 = v45;
  if ( v45 >= 0 )
  {
    v64 = 0LL;
    v65 = v39;
    v55 = DMMVIDPNTARGETMODESET::AddMode((__int64)v17, (__int64 *)&v65);
    v50 = v55;
    if ( v55 >= 0 )
    {
      LODWORD(v50) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v17, (const struct _D3DKMDT_VIDPN_TARGET_MODE *)a2);
    }
    else
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v57, v56, v58, v59);
      v60[3] = a2;
      v60[4] = this;
      v60[5] = v50;
      WdLogGlobalForLineNumber = 1767;
    }
  }
  else
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
    v51[3] = v39;
    v51[4] = this;
    v51[5] = v50;
    WdLogGlobalForLineNumber = 1753;
  }
  auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v64);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  v54 = v63 == 0;
LABEL_101:
  if ( !v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit, v53, v61);
  return (unsigned int)v50;
}
