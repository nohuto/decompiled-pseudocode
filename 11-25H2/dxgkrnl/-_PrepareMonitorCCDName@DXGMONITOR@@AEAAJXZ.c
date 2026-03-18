/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1403EFB88
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036FB0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringLengthWorkerW @ 0x140043C3C (RtlStringLengthWorkerW.c)
 *     __report_rangecheckfailure @ 0x1400652D0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     memcmp @ 0x1400A01E0 (memcmp.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140186B9C (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x140268B80 (-MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  const WCHAR *v6; // rdx
  int v7; // eax
  int v8; // eax
  size_t v9; // rsi
  int v10; // eax
  int v11; // r14d
  unsigned int v12; // edx
  unsigned int v13; // ecx
  size_t v14; // rsi
  unsigned __int8 v15; // al
  size_t v16; // rsi
  __int64 v17; // r9
  struct _LIST_ENTRY *Flink; // r14
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 result; // rax
  __int64 *v22; // rax
  struct _UNICODE_STRING *v23; // rdi
  char v24; // al
  _QWORD *v25; // rdx
  __int64 v26; // r8
  const UNICODE_STRING *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  ULONG v32; // ecx
  unsigned __int16 v33; // di
  __int64 v34; // rax
  struct _UNICODE_STRING *v35; // rbx
  unsigned __int8 v36; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 v37; // [rsp+2Ch] [rbp-85h] BYREF
  size_t pcchLength; // [rsp+30h] [rbp-81h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v41[2]; // [rsp+58h] [rbp-59h] BYREF
  WCHAR psz[40]; // [rsp+78h] [rbp-39h] BYREF
  __int16 v43; // [rsp+C8h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 50) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2445;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v6 = L"SIMULATED";
    goto LABEL_49;
  }
  v2 = (_QWORD *)*((_QWORD *)this + 27);
  if ( !v2[20] )
  {
LABEL_10:
    v6 = L"NOEDID";
LABEL_49:
    v23 = (struct _UNICODE_STRING *)((char *)this + 392);
    *((_QWORD *)this + 55) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 392), v6);
    v24 = 0;
    goto LABEL_50;
  }
  pcchLength = 0LL;
  memset(psz, 0, 0x46uLL);
  v3 = v2[16];
  if ( !v3 )
    v3 = v2[17];
  v40[0] = 4587520LL;
  v40[1] = psz;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 64LL))(v3, v40);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 2495;
LABEL_9:
    MonitorLogBadEDID(v5);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, v40);
  v5 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
    WdLogGlobalForLineNumber = 2508;
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 80LL))(v3, v40);
  v5 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 2520;
    goto LABEL_9;
  }
  if ( RtlStringLengthWorkerW(psz, 0x23uLL, &pcchLength) >= 0 )
  {
    v9 = pcchLength;
  }
  else
  {
    v9 = 0LL;
    pcchLength = 0LL;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2532;
  }
  if ( v9 > 0x17 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2533;
  }
  v36 = 0;
  v37 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int16 *))(*(_QWORD *)v3 + 88LL))(
          v3,
          &v36,
          &v37);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 2554;
    MonitorLogBadEDID(v11);
  }
  v12 = v37;
  v13 = v36;
  psz[v9] = 95;
  v14 = v9 + 1;
  psz[v14++] = a0123456789abcd[(unsigned __int64)v13 >> 4];
  psz[v14++] = a0123456789abcd[v13 & 0xF];
  psz[v14++] = 95;
  psz[v14++] = a0123456789abcd[(unsigned __int64)v12 >> 12];
  psz[v14++] = a0123456789abcd[(v12 >> 8) & 0xF];
  psz[v14++] = a0123456789abcd[(unsigned __int8)v12 >> 4];
  psz[v14++] = a0123456789abcd[v12 & 0xF];
  psz[v14++] = 95;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  psz[v14++] = a0123456789abcd[(unsigned __int64)v15 >> 4];
  psz[v14] = a0123456789abcd[v15 & 0xF];
  v16 = v14 + 1;
  pcchLength = v16;
  if ( 2 * v16 >= 0x46 )
    _report_rangecheckfailure();
  psz[v16] = 0;
  if ( v16 >= 0x23 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2586;
  }
  KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Flink = DXGMONITOR::_UniqueEntryList.Flink;
  v19 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v19 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v16 && !memcmp(&Flink[1].Blink, psz, 2 * v16) )
      goto LABEL_31;
    Flink = Flink->Flink;
  }
  if ( !Flink )
  {
LABEL_31:
    if ( !v19 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2622;
    }
    if ( !*(_DWORD *)(v19 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2623;
    }
    ++*(_DWORD *)(v19 + 16);
    goto LABEL_44;
  }
  v20 = operator new[](2 * v16 + 32, 0x4D677844u, 256LL, v17);
  v19 = v20;
  if ( !v20 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2640;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    return 3221225495LL;
  }
  *(_DWORD *)(v20 + 20) = v16;
  *(_DWORD *)(v20 + 16) = 1;
  if ( (int)RtlStringCchCopyW((char *)(v20 + 24), v16 + 1, (char *)psz) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
  }
  *(_WORD *)(v19 + 2 * v16 + 24) = 0;
  v22 = (__int64 *)qword_14015D648;
  if ( *(struct _LIST_ENTRY **)qword_14015D648 != &DXGMONITOR::_UniqueEntryList )
    __fastfail(3u);
  *(_QWORD *)v19 = &DXGMONITOR::_UniqueEntryList;
  *(_QWORD *)(v19 + 8) = v22;
  *v22 = v19;
  qword_14015D648 = v19;
LABEL_44:
  *((_QWORD *)this + 55) = v19;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v23 = (struct _UNICODE_STRING *)((char *)this + 392);
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 392), psz) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2674;
    return 3221225495LL;
  }
  v24 = 1;
LABEL_50:
  *((_BYTE *)this + 384) = v24;
  if ( *((_QWORD *)this + 50) && v24 )
    MonitorUnifyCCDMonitorString(v23);
  *(struct _UNICODE_STRING *)((char *)this + 408) = *v23;
  if ( *((_BYTE *)this + 384) )
    *((_WORD *)this + 204) -= 6;
  v25 = (_QWORD *)*((_QWORD *)this + 21);
  v26 = *(_QWORD *)(*(_QWORD *)(v25[3] + 16LL) + 216LL);
  v27 = (const UNICODE_STRING *)((*(_QWORD *)(v26 + 64) + 4912LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(v26 + 64) + 4920LL) != 0LL));
  if ( !v27 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*(_QWORD *)(v25[3] + 16LL) + 216LL));
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 2737;
    return result;
  }
  v28 = *((_QWORD *)this + 21);
  String = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*v25 + 80LL))(v28) )
  {
    v30 = *((unsigned int *)this + 45);
    v31 = *((_QWORD *)this + 21);
    memset(v41, 0, 24);
    DXGADAPTER::GetVirtualMonitorInfo(
      *(DXGADAPTER **)(*(_QWORD *)(v31 + 24) + 16LL),
      v30,
      (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v41);
    if ( WORD4(v41[0]) )
      String = *(struct _UNICODE_STRING *)((char *)v41 + 8);
  }
  v43 = 0;
  if ( !String.Length )
  {
    v32 = *((_DWORD *)this + 45);
    *(_QWORD *)&String.Length = 1310720LL;
    String.Buffer = (wchar_t *)&v43;
    if ( RtlIntegerToUnicodeString(v32, 0x10u, &String) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2770;
    }
  }
  v33 = v27->Length + String.Length + 8;
  v34 = operator new[](v33, 0x4D677844u, 256LL, v29);
  if ( !v34 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2782;
    return 3221225495LL;
  }
  v35 = (struct _UNICODE_STRING *)((char *)this + 424);
  *v35 = 0LL;
  v35->MaximumLength = v33;
  v35->Buffer = (wchar_t *)v34;
  RtlAppendUnicodeToString(v35, L"_");
  RtlAppendUnicodeStringToString(v35, v27);
  RtlAppendUnicodeToString(v35, L"_");
  RtlAppendUnicodeStringToString(v35, &String);
  return 0LL;
}
