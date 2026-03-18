/*
 * XREFs of ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403CD898
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140057148 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x14005721C (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x140058A3C (-ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006460C (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140186BB0 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::ParseDescriptorModes(
        DxgMonitor::MonitorModes ***this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  DxgMonitor::MonitorModes *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  void **v14; // rcx
  __int128 v15; // xmm6
  unsigned int v16; // eax
  __int64 v17; // rax
  _DWORD *v18; // rdi
  int v19; // ecx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  DxgMonitor::MonitorModes **v30; // rdi
  DxgMonitor::MonitorModes **v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _WORD *v38; // rax
  int v39; // eax
  unsigned int i; // r15d
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v41; // rdi
  int v42; // eax
  int v43; // r13d
  DxgMonitor::MonitorModes *v44; // rdi
  DxgMonitor::MonitorModes **v45; // rcx
  int v46; // [rsp+30h] [rbp-40h] BYREF
  int v47; // [rsp+34h] [rbp-3Ch]
  __int64 v48; // [rsp+38h] [rbp-38h]
  char *v49; // [rsp+40h] [rbp-30h] BYREF
  void *v50; // [rsp+48h] [rbp-28h] BYREF
  __int128 v51; // [rsp+50h] [rbp-20h]
  unsigned __int16 v52; // [rsp+B0h] [rbp+40h] BYREF
  int v53; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v54; // [rsp+C0h] [rbp+50h]
  int v55; // [rsp+C8h] [rbp+58h]

  LOBYTE(v55) = 0;
  WdLogSingleEntry2(7LL, this, a2);
  v4 = (DxgMonitor::MonitorModes *)(this + 16);
  WdLogGlobalForLineNumber = 249;
  if ( *(DxgMonitor::MonitorModes **)v4 != v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 256;
  }
  v5 = *(_QWORD *)a2;
  v53 = 0;
  v6 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, _QWORD, _QWORD))(v5 + 192))(
         a2,
         &v53,
         0LL,
         0LL);
  v7 = v6;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
  {
    WdLogSingleEntry1(2LL, (int)v6);
    WdLogGlobalForLineNumber = 268;
    return v7;
  }
  if ( !v53 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 281;
LABEL_37:
    v32 = *(_QWORD *)a2;
    v52 = 0;
    v33 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, _QWORD))(v32 + 200))(
            a2,
            &v52,
            0LL);
    v7 = v33;
    if ( v33 == -1073741275 )
    {
      WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
      WdLogGlobalForLineNumber = 438;
      goto LABEL_62;
    }
    if ( (int)(v33 + 0x80000000) >= 0 && v33 != -1073741789 )
    {
      WdLogSingleEntry1(2LL, (int)v33);
      WdLogGlobalForLineNumber = 445;
      return v7;
    }
    if ( !v52 )
    {
LABEL_62:
      if ( !(_BYTE)v55 && !*((_DWORD *)this + 42) )
        *((_DWORD *)this + 28) = 2;
      return 0LL;
    }
    v38 = (_WORD *)operator new[](52 * (v52 - 1LL) + 56, 0x4D677844u, 256LL);
    v50 = v38;
    v9 = v38;
    if ( v38 )
    {
      *v38 = v52;
      v39 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, _WORD *, _WORD *))(*(_QWORD *)a2 + 200LL))(
              a2,
              v38,
              v38 + 2);
      v10 = v39;
      if ( v39 >= 0 )
      {
        for ( i = 0; i < v52; ++i )
        {
          v41 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, 256LL);
          if ( !v41 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 494;
            goto LABEL_58;
          }
          v42 = ConvertFrequencyRange((const struct _FrequencyRangeDescriptor *)&v9[26 * i + 2], v41);
          v43 = v42;
          if ( v42 >= 0 )
          {
            v44 = (DxgMonitor::MonitorModes *)&v41[1];
            v45 = this[23];
            if ( *v45 != (DxgMonitor::MonitorModes *)(this + 22) )
              goto LABEL_56;
            *(_QWORD *)v44 = this + 22;
            *((_QWORD *)v44 + 1) = v45;
            *v45 = v44;
            this[23] = (DxgMonitor::MonitorModes **)v44;
            ++*((_DWORD *)this + 42);
          }
          else
          {
            WdLogSingleEntry1(3LL, v42);
            WdLogGlobalForLineNumber = 504;
            MonitorLogBadEDID(v43);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v41);
          }
        }
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v50);
        goto LABEL_62;
      }
      WdLogSingleEntry1(2LL, v39);
      WdLogGlobalForLineNumber = 476;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 464;
      v10 = -1073741801;
    }
    v14 = &v50;
LABEL_14:
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(v14);
    return v10;
  }
  v49 = (char *)operator new[](56LL * (unsigned int)(v53 - 1) + 60, 0x4D677844u, 256LL);
  v9 = (unsigned __int16 *)v49;
  if ( !v49 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 297;
    v10 = -1073741801;
LABEL_13:
    v14 = (void **)&v49;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)a2;
  v46 = 0;
  v12 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, int *, char *))(v11 + 192))(
          a2,
          &v53,
          &v46,
          v49 + 4);
  v13 = 0;
  v10 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 307;
    goto LABEL_13;
  }
  *v9 = v53;
  v9[1] = v46;
  *(_QWORD *)&v51 = 0x800000008LL;
  *((_QWORD *)&v51 + 1) = 8LL;
  v15 = v51;
  while ( 1 )
  {
    v16 = *v9;
    v54 = v13;
    if ( v13 >= v16 )
    {
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v49);
      goto LABEL_37;
    }
    v17 = operator new(0x78uLL, 0x4D677844u, 256LL);
    v18 = (_DWORD *)v17;
    if ( !v17 )
      break;
    v19 = *((_DWORD *)this + 31);
    v20 = (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v17 + 8);
    *((_DWORD *)this + 31) = v19 + 1;
    v21 = 28LL * v54;
    *v18 = v19;
    v48 = v21 * 2;
    v22 = ConvertVideoSignalInfo((const struct _VideoModeDescriptor *)&v9[v21 + 2], v20);
    v47 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(3LL, v22);
      WdLogGlobalForLineNumber = 361;
LABEL_20:
      MonitorLogBadEDID(v47);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
      goto LABEL_34;
    }
    v23 = v48;
    v18[16] = 2;
    *(_OWORD *)(v18 + 17) = v15;
    v24 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v9 + v23 + 57), v18 + 21);
    v47 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(3LL, v24);
      WdLogGlobalForLineNumber = 375;
      goto LABEL_20;
    }
    v25 = ConvertMonitorModeTimingType(*((unsigned __int8 *)v9 + v48 + 58), v18 + 28);
    v47 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry1(3LL, v25);
      WdLogGlobalForLineNumber = 384;
      goto LABEL_20;
    }
    v26 = (unsigned __int8)v55;
    v27 = v9[1];
    if ( (unsigned int)(v18[28] - 1) <= 2 )
      v26 = 1;
    v55 = v26;
    if ( v27 == v54 )
    {
      if ( this[18] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 402;
      }
      this[18] = (DxgMonitor::MonitorModes **)v18;
      v28 = 1;
    }
    else
    {
      v28 = 2;
    }
    v29 = v18;
    v30 = (DxgMonitor::MonitorModes **)(v18 + 24);
    v29[22] = v28;
    ++*((_DWORD *)this + 30);
    v31 = this[17];
    if ( *v31 != v4 )
LABEL_56:
      __fastfail(3u);
    *v30 = v4;
    v30[1] = (DxgMonitor::MonitorModes *)v31;
    *v31 = (DxgMonitor::MonitorModes *)v30;
    this[17] = v30;
LABEL_34:
    v13 = v54 + 1;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 349;
LABEL_58:
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  return 3221225495LL;
}
