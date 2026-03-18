/*
 * XREFs of DxgkGetPathsModality @ 0x14031E370
 * Callers:
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031C8EC (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x14033D8C0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x14033DB60 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004D5F4 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1402680D8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402D71F0 (DxgkGetAdapterDefaultScaling.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x14031BDC4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x14031CF20 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1403C17B4 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403C1AA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // rsi
  const wchar_t *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // eax
  unsigned int j; // r8d
  __int64 v13; // rcx
  int Active; // edi
  int AllPaths; // eax
  CCD_TOPOLOGY *v16; // rcx
  __int64 v17; // r9
  unsigned int i; // r14d
  __int64 v19; // r15
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  char v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int16 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  _DWORD *v32; // [rsp+B0h] [rbp-50h]
  bool v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  int v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C4h] [rbp-3Ch]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int16 v41; // [rsp+100h] [rbp+0h]
  __int128 v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  _DWORD *v44; // [rsp+120h] [rbp+20h]
  bool v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  int v47; // [rsp+130h] [rbp+30h]
  BOOL v48; // [rsp+134h] [rbp+34h]
  int v49; // [rsp+138h] [rbp+38h]
  __int64 v50; // [rsp+140h] [rbp+40h]
  void *v51[20]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+1F8h] [rbp+F8h]
  unsigned int v53; // [rsp+200h] [rbp+100h] BYREF
  __int64 v54; // [rsp+208h] [rbp+108h] BYREF

  v23 = -1;
  v4 = (unsigned int)a1;
  v24 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2081);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2081);
  v54 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v54, 9);
  v6 = &unk_140160820;
  if ( a2 )
    v6 = a2;
  if ( (v4 & 0x800000) != 0 )
    v6[6] |= 2u;
  if ( (v4 & 0x14000) == 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      if ( (v4 & 0xFFFFFEFF) != 0 )
      {
        WdLogSingleEntry1(1LL, v4);
        v7 = L"D3DKMT_GETPATHSMODALITY_FILL_TARGET_INFO_ONLY is not valid with any other flags. (Flags = 0x%I64x)";
        WdLogGlobalForLineNumber = 101;
        goto LABEL_12;
      }
      v26 = 0;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v30 = 0LL;
      v31 = 0LL;
      v33 = v6 == 0LL;
      v32 = v6;
      v34 = 0;
      v35 = 1;
      v36 = 0LL;
      v37 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v26);
    }
    else if ( (v4 & 0x10) != 0 )
    {
      v26 = 0;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v30 = 0LL;
      v31 = 0LL;
      v33 = v6 == 0LL;
      v32 = v6;
      v34 = 0;
      v35 = 1;
      v36 = 0LL;
      v37 = 0LL;
      AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v26, a3);
    }
    else
    {
      if ( (v4 & 0x12000040) != 0 )
      {
        v38 = 0;
        v39 = 0LL;
        v40 = 0LL;
        v41 = 0;
        v42 = 0LL;
        v43 = 0LL;
        v45 = v6 == 0LL;
        v44 = v6;
        v46 = 0;
        v47 = 1;
        v49 = 0;
        v50 = 0LL;
        v48 = (v4 & 0x1000000) != 0;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v38, (v4 & 0x80000) != 0, 0, (v4 & 0x100000) != 0, a3);
        if ( Active >= 0 )
        {
          if ( (v4 & 0x2000000) != 0 )
          {
            CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v51, 0LL, 0LL, v17);
            if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v51, 0x8Fu, 0LL) < 0 )
              CCD_TOPOLOGY::Clear(v51);
            for ( i = 0; i < *((unsigned __int16 *)v6 + 10); ++i )
            {
              v53 = 0;
              v19 = 74LL * i;
              v20 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v6[v19];
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          (CCD_TOPOLOGY *)v51,
                          (const struct _LUID *)&v6[v19 + 18],
                          v6[v19 + 21],
                          &v53) < 0 )
                DxgkGetAdapterDefaultScaling((struct _LUID *)&v6[v19 + 18], v20 + 49);
              else
                v20[49] = *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)CCD_TOPOLOGY::GetPathDescriptor(
                                                                          (CCD_TOPOLOGY *)v51,
                                                                          v53)
                          + 35);
              *(_QWORD *)&v6[v19 + 14] |= 0x10000uLL;
            }
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v51);
          }
          if ( (v4 & 0x10000000) == 0
            || v44 && *((_WORD *)v44 + 10)
            || (Active = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v38, v4 & 0x140030AF, a3), Active >= 0) )
          {
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v38);
            goto LABEL_53;
          }
        }
        v16 = (CCD_TOPOLOGY *)&v38;
LABEL_36:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v16);
        goto LABEL_53;
      }
      if ( (v4 & 0xF) == 0 )
        goto LABEL_13;
      v26 = 0;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v30 = 0LL;
      v31 = 0LL;
      v33 = v6 == 0LL;
      v32 = v6;
      v34 = 0;
      v35 = 1;
      v36 = 0LL;
      v37 = 0LL;
      AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v26, v4 & 0x140030AF, a3);
    }
    v16 = (CCD_TOPOLOGY *)&v26;
    Active = AllPaths;
    goto LABEL_36;
  }
  if ( (v4 & 0xFFFEBFFF) != 0 )
  {
    WdLogSingleEntry1(1LL, v4);
    v7 = L"D3DKMT_GETPATHSMODALITY_FORCE_FULL_MODE_CHANGE and D3DKMT_GETPATHSMODALITY_FORCE_UNCONDITIONAL_MODE_CACHE_INVAL"
          "IDATE are not valid with any other flags. (Flags = 0x%I64x)";
    WdLogGlobalForLineNumber = 69;
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, v7, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v54, 10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v23);
    }
    return 3221225485LL;
  }
  v11 = 0;
  if ( (v4 & 0x4000) != 0 )
    v11 = 2;
  if ( (v4 & 0x10000) != 0 )
    v11 |= 4u;
  for ( j = 0; j < *((unsigned __int16 *)v6 + 10); ++j )
  {
    v13 = *(_QWORD *)&v6[74 * j + 76];
    if ( v13 )
      *(_DWORD *)(v13 + 240) |= v11;
  }
  Active = 0;
LABEL_53:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v54, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v23);
  return (unsigned int)Active;
}
