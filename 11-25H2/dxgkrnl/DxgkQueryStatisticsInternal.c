/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1402894D0
 * Callers:
 *     DxgkQueryStatisticsK @ 0x1401ACE90 (DxgkQueryStatisticsK.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220840 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryStatistics @ 0x1403954B0 (DxgkQueryStatistics.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x140227570 (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x14028A750 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x14034A0C4 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x140370384 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x140370530 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1403F2DE4 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(ULONG64 a1, char a2, __int64 a3)
{
  __int64 v5; // rdi
  const void *v6; // rdx
  __int64 v7; // r13
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // r14
  DXGADAPTER *v12; // rbx
  DXGADAPTER *v13; // rbx
  DXGADAPTER *v14; // rbx
  int ProcessStatistics; // eax
  _OWORD *v16; // rax
  void **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  unsigned int v22; // r8d
  int NodePerfData; // eax
  int v24; // eax
  int v25; // eax
  int AdapterPerfData; // eax
  int AdapterPerfDataCaps; // eax
  __int64 v28; // rcx
  _OWORD *v29; // rax
  void **v30; // rcx
  __int64 v31; // rdx
  int Statistics; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _OWORD *v36; // rsi
  void **v37; // rax
  DXGADAPTER *v38; // [rsp+50h] [rbp-3F8h] BYREF
  struct DXGPROCESS *v39; // [rsp+58h] [rbp-3F0h]
  int v40; // [rsp+60h] [rbp-3E8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-3E0h]
  char v42; // [rsp+70h] [rbp-3D8h]
  DXGADAPTER *v43; // [rsp+78h] [rbp-3D0h]
  unsigned __int64 v44; // [rsp+80h] [rbp-3C8h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-3C0h] BYREF
  void *v46[102]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v47[16]; // [rsp+3C0h] [rbp-88h] BYREF
  struct DXGPROCESS *v48; // [rsp+3D0h] [rbp-78h]
  char v49; // [rsp+3DCh] [rbp-6Ch]

  v40 = -1;
  v5 = 0LL;
  v41 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2049);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2049);
  memset(v46, 0, 0x328uLL);
  v44 = 0LL;
  if ( a2 )
  {
    v6 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v46, v6, 0x328uLL);
    v7 = 6LL;
  }
  else
  {
    v29 = (_OWORD *)a1;
    v30 = v46;
    v7 = 6LL;
    v31 = 6LL;
    do
    {
      *(_OWORD *)v30 = *v29;
      *((_OWORD *)v30 + 1) = v29[1];
      *((_OWORD *)v30 + 2) = v29[2];
      *((_OWORD *)v30 + 3) = v29[3];
      *((_OWORD *)v30 + 4) = v29[4];
      *((_OWORD *)v30 + 5) = v29[5];
      *((_OWORD *)v30 + 6) = v29[6];
      v30 += 16;
      *((_OWORD *)v30 - 1) = v29[7];
      v29 += 8;
      --v31;
    }
    while ( v31 );
    *(_OWORD *)v30 = *v29;
    *((_OWORD *)v30 + 1) = v29[1];
    v30[4] = (void *)*((_QWORD *)v29 + 4);
  }
  memset(&v46[3], 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v46 + 4), &v44);
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, HIDWORD(v46[0]), SLODWORD(v46[1]));
    WdLogGlobalForLineNumber = 6385;
    LODWORD(v11) = -1073741811;
    goto LABEL_35;
  }
  Current = 0LL;
  v39 = 0LL;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v47, v46[2], 0x400u);
  if ( !v46[2] )
  {
    Current = DXGPROCESS::GetCurrent();
LABEL_44:
    v39 = Current;
    goto LABEL_45;
  }
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v47, 1) >= 0 )
  {
    if ( !v49 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1851;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_Acquired != FALSE", 1851LL, 0LL, 0LL, 0LL, 0LL);
    }
    v39 = v48;
    if ( v48 )
      goto LABEL_13;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1852;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pProcess != NULL", 1852LL, 0LL, 0LL, 0LL, 0LL);
    Current = v48;
    goto LABEL_44;
  }
  WdLogSingleEntry1(3LL, v46[2]);
  WdLogGlobalForLineNumber = 6091;
LABEL_45:
  if ( Current )
  {
LABEL_13:
    v38 = 0LL;
    v45 = 0LL;
    LODWORD(v11) = DxgkpGetPairingAdapters(v9, 0, &v38, &v45, 0LL, 0LL, 0);
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 6115;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get pairing adapters from adapter 0x%I64x",
        (__int64)v9,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = v38;
    }
    else
    {
      v12 = v38;
      v43 = v38;
      if ( v38 )
      {
        if ( *((_BYTE *)v38 + 209) )
        {
          Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                         (DXGADAPTER *)((char *)v38 + 4664),
                         (struct _D3DKMT_QUERYSTATISTICS *)v46,
                         v39);
          v11 = Statistics;
          if ( Statistics < 0 )
          {
            WdLogSingleEntry2(2LL, v43, Statistics);
            WdLogGlobalForLineNumber = 6132;
            v12 = v43;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Host adapter failed the call. hAdapter (0x%I64x) specified, returning 0x%I64x",
              (__int64)v43,
              v11,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)v38 + 3);
          v13 = v38;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)v13 + 136, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)v13 + 38);
          v14 = v38;
          if ( *((_DWORD *)v38 + 50) == 1 )
          {
            if ( !*(_QWORD *)(*((_QWORD *)v38 + 391) + 760LL) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6144;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"pRenderAdapter->GetRenderCore()->GetVidMmExport()",
                6144LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( !*(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6145;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"pRenderAdapter->GetRenderCore()->GetVidSchExport()",
                6145LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            switch ( LODWORD(v46[0]) )
            {
              case 0:
                LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 760LL)
                                                                                              + 8LL)
                                                                                  + 272LL))(
                                 *(_QWORD *)(*((_QWORD *)v14 + 391) + 768LL),
                                 0LL,
                                 &v46[3]);
                if ( (int)v11 >= 0 )
                {
                  ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL)
                                                                                             + 8LL)
                                                                                 + 696LL))(
                                        *(_QWORD *)(*((_QWORD *)v14 + 391) + 744LL),
                                        &v46[3]);
                  goto LABEL_23;
                }
                break;
              case 3:
                ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 760LL) + 8LL)
                                                                                               + 296LL))(
                                      *(_QWORD *)(*((_QWORD *)v14 + 391) + 768LL),
                                      0LL,
                                      LODWORD(v46[100]),
                                      &v46[3]);
                goto LABEL_23;
              case 5:
                v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL)
                                                                                              + 8LL)
                                                                                  + 704LL))(
                        *(_QWORD *)(*((_QWORD *)v14 + 391) + 744LL),
                        0xFFFFLL,
                        LODWORD(v46[100]),
                        &v46[3]);
                LODWORD(v11) = v21;
                if ( v21 < 0 )
                {
                  WdLogSingleEntry1(3LL, v21);
                  WdLogGlobalForLineNumber = 6219;
                }
                else if ( *((int *)v14 + 751) >= 2400 )
                {
                  v22 = LODWORD(v46[100]) % **((unsigned __int16 **)v14 + 374);
                  HIDWORD(v46[71]) = LODWORD(v46[100]) / **((unsigned __int16 **)v14 + 374);
                  LODWORD(v46[71]) = v22;
                  NodePerfData = DXGADAPTER::GetNodePerfData(v14, (struct _D3DKMT_NODE_PERFDATA *)&v46[71]);
                  LODWORD(v11) = NodePerfData;
                  if ( NodePerfData < 0 )
                  {
                    WdLogSingleEntry1(3LL, NodePerfData);
                    WdLogGlobalForLineNumber = 6234;
                  }
                }
                break;
              case 7:
                ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL) + 8LL)
                                                                                       + 712LL))(
                                      *(_QWORD *)(*((_QWORD *)v14 + 391) + 744LL),
                                      LODWORD(v46[100]),
                                      &v46[3]);
                goto LABEL_23;
              case 0xA:
                if ( *((int *)v14 + 751) < 2400 )
                {
                  LODWORD(v11) = -1073741822;
                }
                else
                {
                  LODWORD(v46[3]) = v46[100];
                  AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v14, (struct _D3DKMT_ADAPTER_PERFDATA *)&v46[3]);
                  LODWORD(v11) = AdapterPerfData;
                  if ( AdapterPerfData >= 0 )
                  {
                    LODWORD(v46[11]) = v46[100];
                    AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                            v14,
                                            (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v46[11]);
                    LODWORD(v11) = AdapterPerfDataCaps;
                    if ( AdapterPerfDataCaps < 0 )
                    {
                      WdLogSingleEntry1(3LL, AdapterPerfDataCaps);
                      WdLogGlobalForLineNumber = 6305;
                    }
                    else
                    {
                      LODWORD(v46[16]) = v46[100];
                      if ( LODWORD(v46[100]) >= *((_DWORD *)v14 + 74) )
                      {
                        WdLogSingleEntry1(3LL, v14);
                        WdLogGlobalForLineNumber = 12004;
                        LODWORD(v11) = -1073741811;
                        WdLogSingleEntry1(3LL, -1073741811LL);
                        WdLogGlobalForLineNumber = 6314;
                      }
                      else
                      {
                        v28 = *((_QWORD *)v14 + 374) + 344LL * LODWORD(v46[100]);
                        *(_OWORD *)((char *)&v46[16] + 4) = *(_OWORD *)(v28 + 212);
                        *(_OWORD *)((char *)&v46[18] + 4) = *(_OWORD *)(v28 + 228);
                        *(_OWORD *)((char *)&v46[24] + 4) = *(_OWORD *)(v28 + 276);
                        *(_OWORD *)((char *)&v46[26] + 4) = *(_OWORD *)(v28 + 292);
                        LODWORD(v11) = 0;
                      }
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(3LL, AdapterPerfData);
                    WdLogGlobalForLineNumber = 6296;
                  }
                }
                break;
              case 0xB:
                if ( (unsigned int)LOWORD(v46[100]) >= *((_DWORD *)v14 + 74) )
                {
                  LODWORD(v11) = -1073741811;
                }
                else
                {
                  LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 760LL)
                                                                                                + 8LL)
                                                                                    + 272LL))(
                                   *(_QWORD *)(*((_QWORD *)v14 + 391) + 768LL),
                                   LOWORD(v46[100]),
                                   &v46[3]);
                  if ( (int)v11 >= 0 )
                  {
                    LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL)
                                                                                          + 8LL)
                                                                              + 696LL))(
                                     *(_QWORD *)(*((_QWORD *)v14 + 391) + 744LL),
                                     &v46[3]);
                    HIDWORD(v46[3]) = *(unsigned __int16 *)(344LL * LOWORD(v46[100]) + *((_QWORD *)v14 + 374));
                  }
                }
                break;
              case 0xC:
                ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 760LL) + 8LL)
                                                                                               + 296LL))(
                                      *(_QWORD *)(*((_QWORD *)v14 + 391) + 768LL),
                                      LOWORD(v46[100]),
                                      WORD1(v46[100]),
                                      &v46[3]);
                goto LABEL_23;
              case 0x10:
                ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 760LL) + 8LL)
                                                                                               + 1184LL))(
                                      *(_QWORD *)(*((_QWORD *)v14 + 391) + 768LL),
                                      LOWORD(v46[100]),
                                      WORD1(v46[100]),
                                      &v46[3]);
                goto LABEL_23;
              case 0x11:
                v33 = *((_QWORD *)v14 + 391);
                v34 = *(_QWORD *)(v33 + 760);
                v35 = *((_QWORD *)v39 + 8);
                if ( v35 )
                  v5 = *(_QWORD *)(v35 + 8LL * (unsigned int)(*(_DWORD *)v34 - 1));
                ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, void **))(*(_QWORD *)(v34 + 8) + 1192LL))(
                                      *(_QWORD *)(v33 + 768),
                                      LOWORD(v46[100]),
                                      WORD1(v46[100]),
                                      v5,
                                      &v46[3]);
                goto LABEL_23;
              case 0x12:
                v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL)
                                                                                             + 8LL)
                                                                                 + 704LL))(
                        *(_QWORD *)(*((_QWORD *)v14 + 391) + 744LL),
                        LOWORD(v46[100]),
                        WORD1(v46[100]),
                        &v46[3]);
                LODWORD(v11) = v24;
                if ( v24 < 0 )
                {
                  WdLogSingleEntry1(3LL, v24);
                  WdLogGlobalForLineNumber = 6254;
                }
                else if ( *((int *)v14 + 751) >= 2400 )
                {
                  HIDWORD(v46[71]) = LOWORD(v46[100]);
                  LODWORD(v46[71]) = WORD1(v46[100]);
                  v25 = DXGADAPTER::GetNodePerfData(v14, (struct _D3DKMT_NODE_PERFDATA *)&v46[71]);
                  LODWORD(v11) = v25;
                  if ( v25 < 0 )
                  {
                    WdLogSingleEntry1(3LL, v25);
                    WdLogGlobalForLineNumber = 6269;
                  }
                }
                break;
              default:
                ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)v46, v14, v39);
LABEL_23:
                LODWORD(v11) = ProcessStatistics;
                break;
            }
          }
          _InterlockedDecrement((volatile signed __int32 *)v14 + 38);
          ExReleasePushLockSharedEx((char *)v14 + 136, 0LL);
          KeLeaveCriticalRegion();
          v12 = v38;
          DXGADAPTER::ReleaseReference(v38);
        }
      }
      else
      {
        LODWORD(v11) = -1073741637;
        WdLogSingleEntry2(2LL, v9, -1073741637LL);
        WdLogGlobalForLineNumber = 6121;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Try to call query process statistics on a display only adapter 0x%I64x (Status = 0x%I64x)!",
          (__int64)v9,
          -1073741637LL,
          0LL,
          0LL,
          0LL);
      }
    }
    if ( v12 )
      DXGADAPTER::ReleaseReference(v12);
    goto LABEL_27;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 6375;
  LODWORD(v11) = -1073741811;
LABEL_27:
  DXGADAPTER::ReleaseReference(v9);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v47);
  if ( (int)v11 >= 0 )
  {
    if ( a2 )
    {
      v16 = (_OWORD *)(a1 + 24);
      if ( a1 + 800 <= a1 + 24 || a1 + 800 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v17 = &v46[3];
      do
      {
        *v16 = *(_OWORD *)v17;
        v16[1] = *((_OWORD *)v17 + 1);
        v16[2] = *((_OWORD *)v17 + 2);
        v16[3] = *((_OWORD *)v17 + 3);
        v16[4] = *((_OWORD *)v17 + 4);
        v16[5] = *((_OWORD *)v17 + 5);
        v16[6] = *((_OWORD *)v17 + 6);
        v16 += 8;
        *(v16 - 1) = *((_OWORD *)v17 + 7);
        v17 += 16;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v16 = *v17;
    }
    else
    {
      v36 = (_OWORD *)(a1 + 24);
      v37 = &v46[3];
      do
      {
        *v36 = *(_OWORD *)v37;
        v36[1] = *((_OWORD *)v37 + 1);
        v36[2] = *((_OWORD *)v37 + 2);
        v36[3] = *((_OWORD *)v37 + 3);
        v36[4] = *((_OWORD *)v37 + 4);
        v36[5] = *((_OWORD *)v37 + 5);
        v36[6] = *((_OWORD *)v37 + 6);
        v36 += 8;
        *(v36 - 1) = *((_OWORD *)v37 + 7);
        v37 += 16;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v36 = *v37;
    }
  }
LABEL_35:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v40);
  return (unsigned int)v11;
}
