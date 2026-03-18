/*
 * XREFs of DxgkGetPathsModality @ 0x140375C90
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140372AB0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x140372D50 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x140374170 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004DC54 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1402611D8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1402827F8 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402E8C80 (DxgkGetAdapterDefaultScaling.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403733CC (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x140373D4C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x140373DCC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
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
  unsigned int i; // r14d
  __int64 v18; // r15
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  char v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int16 v28; // [rsp+90h] [rbp-70h]
  __int128 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  _DWORD *v31; // [rsp+B0h] [rbp-50h]
  bool v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C4h] [rbp-3Ch]
  __int64 v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int16 v40; // [rsp+100h] [rbp+0h]
  __int128 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  _DWORD *v43; // [rsp+120h] [rbp+20h]
  bool v44; // [rsp+128h] [rbp+28h]
  int v45; // [rsp+12Ch] [rbp+2Ch]
  int v46; // [rsp+130h] [rbp+30h]
  BOOL v47; // [rsp+134h] [rbp+34h]
  int v48; // [rsp+138h] [rbp+38h]
  __int64 v49; // [rsp+140h] [rbp+40h]
  void *v50[20]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+1F8h] [rbp+F8h]
  unsigned int v52; // [rsp+200h] [rbp+100h] BYREF
  __int64 v53; // [rsp+208h] [rbp+108h] BYREF

  v22 = -1;
  v4 = (unsigned int)a1;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2081);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2081);
  v53 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v53, 9);
  v6 = &unk_14015D820;
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
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v32 = v6 == 0LL;
      v31 = v6;
      v33 = 0;
      v34 = 1;
      v35 = 0LL;
      v36 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v25);
    }
    else if ( (v4 & 0x10) != 0 )
    {
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v32 = v6 == 0LL;
      v31 = v6;
      v33 = 0;
      v34 = 1;
      v35 = 0LL;
      v36 = 0LL;
      AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v25, a3);
    }
    else
    {
      if ( (v4 & 0x12000040) != 0 )
      {
        v37 = 0;
        v38 = 0LL;
        v39 = 0LL;
        v40 = 0;
        v41 = 0LL;
        v42 = 0LL;
        v44 = v6 == 0LL;
        v43 = v6;
        v45 = 0;
        v46 = 1;
        v48 = 0;
        v49 = 0LL;
        v47 = (v4 & 0x1000000) != 0;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v37, (v4 & 0x80000) != 0, 0, (v4 & 0x100000) != 0, a3);
        if ( Active >= 0 )
        {
          if ( (v4 & 0x2000000) != 0 )
          {
            CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v50, 0, 0);
            if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v50, 0x8Fu, 0LL) < 0 )
              CCD_TOPOLOGY::Clear(v50);
            for ( i = 0; i < *((unsigned __int16 *)v6 + 10); ++i )
            {
              v52 = 0;
              v18 = 74LL * i;
              v19 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v6[v18];
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          (CCD_TOPOLOGY *)v50,
                          (const struct _LUID *)&v6[v18 + 18],
                          v6[v18 + 21],
                          &v52) < 0 )
                DxgkGetAdapterDefaultScaling((struct _LUID *)&v6[v18 + 18], v19 + 49);
              else
                v19[49] = *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)CCD_TOPOLOGY::GetPathDescriptor(
                                                                          (CCD_TOPOLOGY *)v50,
                                                                          v52)
                          + 35);
              *(_QWORD *)&v6[v18 + 14] |= 0x10000uLL;
            }
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v50);
          }
          if ( (v4 & 0x10000000) == 0
            || v43 && *((_WORD *)v43 + 10)
            || (Active = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v37, v4 & 0x140030AF, a3), Active >= 0) )
          {
            CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v37);
            goto LABEL_53;
          }
        }
        v16 = (CCD_TOPOLOGY *)&v37;
LABEL_36:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v16);
        goto LABEL_53;
      }
      if ( (v4 & 0xF) == 0 )
        goto LABEL_13;
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v32 = v6 == 0LL;
      v31 = v6;
      v33 = 0;
      v34 = 1;
      v35 = 0LL;
      v36 = 0LL;
      AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v25, v4 & 0x140030AF, a3);
    }
    v16 = (CCD_TOPOLOGY *)&v25;
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
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, v7, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v53, 10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v22);
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
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v53, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v22);
  return (unsigned int)Active;
}
