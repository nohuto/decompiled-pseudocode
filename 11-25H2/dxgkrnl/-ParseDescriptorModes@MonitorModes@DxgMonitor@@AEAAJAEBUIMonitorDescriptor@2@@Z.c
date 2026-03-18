/*
 * XREFs of ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403D580C
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403D545C (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140057938 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140057A0C (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x140058F7C (-ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1400649EC (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::ParseDescriptorModes(
        DxgMonitor::MonitorModes ***this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  DxgMonitor::MonitorModes *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // ecx
  void **v16; // rcx
  __int128 v17; // xmm6
  unsigned int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rdi
  int v21; // ecx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // rcx
  DxgMonitor::MonitorModes **v32; // rdi
  DxgMonitor::MonitorModes **v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _WORD *v40; // rax
  int v41; // eax
  __int64 v42; // r9
  unsigned int i; // r15d
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v44; // rdi
  int v45; // eax
  int v46; // r13d
  DxgMonitor::MonitorModes *v47; // rdi
  DxgMonitor::MonitorModes **v48; // rcx
  int v49; // [rsp+30h] [rbp-40h] BYREF
  int v50; // [rsp+34h] [rbp-3Ch]
  __int64 v51; // [rsp+38h] [rbp-38h]
  char *v52; // [rsp+40h] [rbp-30h] BYREF
  void *v53; // [rsp+48h] [rbp-28h] BYREF
  __int128 v54; // [rsp+50h] [rbp-20h]
  unsigned __int16 v55; // [rsp+B0h] [rbp+40h] BYREF
  int v56; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v57; // [rsp+C0h] [rbp+50h]
  int v58; // [rsp+C8h] [rbp+58h]

  LOBYTE(v58) = 0;
  WdLogSingleEntry2(7LL, this, a2);
  v4 = (DxgMonitor::MonitorModes *)(this + 16);
  WdLogGlobalForLineNumber = 249;
  if ( *(DxgMonitor::MonitorModes **)v4 != v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 256;
  }
  v5 = *(_QWORD *)a2;
  v56 = 0;
  v6 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, _QWORD, _QWORD))(v5 + 192))(
         a2,
         &v56,
         0LL,
         0LL);
  v8 = v6;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
  {
    WdLogSingleEntry1(2LL, (int)v6);
    WdLogGlobalForLineNumber = 268;
    return v8;
  }
  if ( !v56 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 281;
LABEL_37:
    v34 = *(_QWORD *)a2;
    v55 = 0;
    v35 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, _QWORD))(v34 + 200))(
            a2,
            &v55,
            0LL);
    v8 = v35;
    if ( v35 == -1073741275 )
    {
      WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
      WdLogGlobalForLineNumber = 438;
      goto LABEL_62;
    }
    if ( (int)(v35 + 0x80000000) >= 0 && v35 != -1073741789 )
    {
      WdLogSingleEntry1(2LL, (int)v35);
      WdLogGlobalForLineNumber = 445;
      return v8;
    }
    if ( !v55 )
    {
LABEL_62:
      if ( !(_BYTE)v58 && !*((_DWORD *)this + 42) )
        *((_DWORD *)this + 28) = 2;
      return 0LL;
    }
    v40 = (_WORD *)operator new[](52 * (v55 - 1LL) + 56, 0x4D677844u, 256LL, v39);
    v53 = v40;
    v10 = v40;
    if ( v40 )
    {
      *v40 = v55;
      v41 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, _WORD *, _WORD *))(*(_QWORD *)a2 + 200LL))(
              a2,
              v40,
              v40 + 2);
      v11 = v41;
      if ( v41 >= 0 )
      {
        for ( i = 0; i < v55; ++i )
        {
          v44 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, 256LL, v42);
          if ( !v44 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 494;
            goto LABEL_58;
          }
          v45 = ConvertFrequencyRange((const struct _FrequencyRangeDescriptor *)&v10[26 * i + 2], v44);
          v46 = v45;
          if ( v45 >= 0 )
          {
            v47 = (DxgMonitor::MonitorModes *)&v44[1];
            v48 = this[23];
            if ( *v48 != (DxgMonitor::MonitorModes *)(this + 22) )
              goto LABEL_56;
            *(_QWORD *)v47 = this + 22;
            *((_QWORD *)v47 + 1) = v48;
            *v48 = v47;
            this[23] = (DxgMonitor::MonitorModes **)v47;
            ++*((_DWORD *)this + 42);
          }
          else
          {
            WdLogSingleEntry1(3LL, v45);
            WdLogGlobalForLineNumber = 504;
            MonitorLogBadEDID(v46);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v44);
          }
        }
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v53);
        goto LABEL_62;
      }
      WdLogSingleEntry1(2LL, v41);
      WdLogGlobalForLineNumber = 476;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 464;
      v11 = -1073741801;
    }
    v16 = &v53;
LABEL_14:
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(v16);
    return v11;
  }
  v52 = (char *)operator new[](56LL * (unsigned int)(v56 - 1) + 60, 0x4D677844u, 256LL, v7);
  v10 = (unsigned __int16 *)v52;
  if ( !v52 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 297;
    v11 = -1073741801;
LABEL_13:
    v16 = (void **)&v52;
    goto LABEL_14;
  }
  v12 = *(_QWORD *)a2;
  v49 = 0;
  v13 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, int *, char *))(v12 + 192))(
          a2,
          &v56,
          &v49,
          v52 + 4);
  v15 = 0;
  v11 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 307;
    goto LABEL_13;
  }
  *v10 = v56;
  v10[1] = v49;
  *(_QWORD *)&v54 = 0x800000008LL;
  *((_QWORD *)&v54 + 1) = 8LL;
  v17 = v54;
  while ( 1 )
  {
    v18 = *v10;
    v57 = v15;
    if ( v15 >= v18 )
    {
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v52);
      goto LABEL_37;
    }
    v19 = operator new(0x78uLL, 0x4D677844u, 256LL, v14);
    v20 = (_DWORD *)v19;
    if ( !v19 )
      break;
    v21 = *((_DWORD *)this + 31);
    v22 = (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v19 + 8);
    *((_DWORD *)this + 31) = v21 + 1;
    v23 = 28LL * v57;
    *v20 = v21;
    v51 = v23 * 2;
    v24 = ConvertVideoSignalInfo((const struct _VideoModeDescriptor *)&v10[v23 + 2], v22);
    v50 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(3LL, v24);
      WdLogGlobalForLineNumber = 361;
LABEL_20:
      MonitorLogBadEDID(v50);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v20);
      goto LABEL_34;
    }
    v25 = v51;
    v20[16] = 2;
    *(_OWORD *)(v20 + 17) = v17;
    v26 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v10 + v25 + 57), v20 + 21);
    v50 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(3LL, v26);
      WdLogGlobalForLineNumber = 375;
      goto LABEL_20;
    }
    v27 = ConvertMonitorModeTimingType(*((unsigned __int8 *)v10 + v51 + 58), v20 + 28);
    v50 = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry1(3LL, v27);
      WdLogGlobalForLineNumber = 384;
      goto LABEL_20;
    }
    v28 = (unsigned __int8)v58;
    v29 = v10[1];
    if ( (unsigned int)(v20[28] - 1) <= 2 )
      v28 = 1;
    v58 = v28;
    if ( v29 == v57 )
    {
      if ( this[18] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 402;
      }
      this[18] = (DxgMonitor::MonitorModes **)v20;
      v30 = 1;
    }
    else
    {
      v30 = 2;
    }
    v31 = v20;
    v32 = (DxgMonitor::MonitorModes **)(v20 + 24);
    v31[22] = v30;
    ++*((_DWORD *)this + 30);
    v33 = this[17];
    if ( *v33 != v4 )
LABEL_56:
      __fastfail(3u);
    *v32 = v4;
    v32[1] = (DxgMonitor::MonitorModes *)v33;
    *v33 = (DxgMonitor::MonitorModes *)v32;
    this[17] = v32;
LABEL_34:
    v15 = v57 + 1;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 349;
LABEL_58:
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  return 3221225495LL;
}
