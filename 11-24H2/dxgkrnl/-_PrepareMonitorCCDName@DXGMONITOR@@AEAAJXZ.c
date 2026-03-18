/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1403E9D68
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036AC4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringLengthWorkerW @ 0x1400438AC (RtlStringLengthWorkerW.c)
 *     __report_rangecheckfailure @ 0x140064EF0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     memcmp @ 0x1400A2520 (memcmp.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140186BB0 (-MonitorLogBadEDID@@YAXJ@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140188ECC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x14026FAE0 (-MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z.c)
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
  struct _LIST_ENTRY *Flink; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 result; // rax
  __int64 *v21; // rax
  struct _UNICODE_STRING *v22; // rdi
  char v23; // al
  _QWORD *v24; // rdx
  __int64 v25; // r8
  const UNICODE_STRING *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  ULONG v30; // ecx
  unsigned __int16 v31; // di
  __int64 v32; // rax
  struct _UNICODE_STRING *v33; // rbx
  unsigned __int8 v34; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 v35; // [rsp+2Ch] [rbp-85h] BYREF
  size_t pcchLength; // [rsp+30h] [rbp-81h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v39[2]; // [rsp+58h] [rbp-59h] BYREF
  WCHAR psz[40]; // [rsp+78h] [rbp-39h] BYREF
  __int16 v41; // [rsp+C8h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 50) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2549;
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
    v22 = (struct _UNICODE_STRING *)((char *)this + 392);
    *((_QWORD *)this + 55) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 392), v6);
    v23 = 0;
    goto LABEL_50;
  }
  pcchLength = 0LL;
  memset(psz, 0, 0x46uLL);
  v3 = v2[16];
  if ( !v3 )
    v3 = v2[17];
  v38[0] = 4587520LL;
  v38[1] = psz;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 64LL))(v3, v38);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 2599;
LABEL_9:
    MonitorLogBadEDID(v5);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, v38);
  v5 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
    WdLogGlobalForLineNumber = 2612;
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 80LL))(v3, v38);
  v5 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 2624;
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
    WdLogGlobalForLineNumber = 2636;
  }
  if ( v9 > 0x17 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2637;
  }
  v34 = 0;
  v35 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int16 *))(*(_QWORD *)v3 + 88LL))(
          v3,
          &v34,
          &v35);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 2658;
    MonitorLogBadEDID(v11);
  }
  v12 = v35;
  v13 = v34;
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
    WdLogGlobalForLineNumber = 2690;
  }
  KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Flink = DXGMONITOR::_UniqueEntryList.Flink;
  v18 = 0LL;
  while ( Flink != &DXGMONITOR::_UniqueEntryList )
  {
    v18 = (__int64)Flink;
    if ( HIDWORD(Flink[1].Flink) == v16 && !memcmp(&Flink[1].Blink, psz, 2 * v16) )
      goto LABEL_31;
    Flink = Flink->Flink;
  }
  if ( !Flink )
  {
LABEL_31:
    if ( !v18 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2726;
    }
    if ( !*(_DWORD *)(v18 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2727;
    }
    ++*(_DWORD *)(v18 + 16);
    goto LABEL_44;
  }
  v19 = operator new[](2 * v16 + 32, 0x4D677844u, 256LL);
  v18 = v19;
  if ( !v19 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2744;
    KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
    return 3221225495LL;
  }
  *(_DWORD *)(v19 + 20) = v16;
  *(_DWORD *)(v19 + 16) = 1;
  if ( (int)RtlStringCchCopyW((char *)(v19 + 24), v16 + 1, (char *)psz) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2754;
  }
  *(_WORD *)(v18 + 2 * v16 + 24) = 0;
  v21 = (__int64 *)qword_140160668;
  if ( *(struct _LIST_ENTRY **)qword_140160668 != &DXGMONITOR::_UniqueEntryList )
    __fastfail(3u);
  *(_QWORD *)v18 = &DXGMONITOR::_UniqueEntryList;
  *(_QWORD *)(v18 + 8) = v21;
  *v21 = v18;
  qword_140160668 = v18;
LABEL_44:
  *((_QWORD *)this + 55) = v18;
  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v22 = (struct _UNICODE_STRING *)((char *)this + 392);
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 392), psz) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2778;
    return 3221225495LL;
  }
  v23 = 1;
LABEL_50:
  *((_BYTE *)this + 384) = v23;
  if ( *((_QWORD *)this + 50) && v23 )
    MonitorUnifyCCDMonitorString(v22);
  *(struct _UNICODE_STRING *)((char *)this + 408) = *v22;
  if ( *((_BYTE *)this + 384) )
    *((_WORD *)this + 204) -= 6;
  v24 = (_QWORD *)*((_QWORD *)this + 21);
  v25 = *(_QWORD *)(*(_QWORD *)(v24[3] + 16LL) + 216LL);
  v26 = (const UNICODE_STRING *)((*(_QWORD *)(v25 + 64) + 4912LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(v25 + 64) + 4920LL) != 0LL));
  if ( !v26 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*(_QWORD *)(v24[3] + 16LL) + 216LL));
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 2841;
    return result;
  }
  v27 = *((_QWORD *)this + 21);
  String = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*v24 + 80LL))(v27) )
  {
    v28 = *((unsigned int *)this + 45);
    v29 = *((_QWORD *)this + 21);
    memset(v39, 0, 24);
    DXGADAPTER::GetVirtualMonitorInfo(
      *(DXGADAPTER **)(*(_QWORD *)(v29 + 24) + 16LL),
      v28,
      (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v39);
    if ( WORD4(v39[0]) )
      String = *(struct _UNICODE_STRING *)((char *)v39 + 8);
  }
  v41 = 0;
  if ( !String.Length )
  {
    v30 = *((_DWORD *)this + 45);
    *(_QWORD *)&String.Length = 1310720LL;
    String.Buffer = (wchar_t *)&v41;
    if ( RtlIntegerToUnicodeString(v30, 0x10u, &String) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2874;
    }
  }
  v31 = v26->Length + String.Length + 8;
  v32 = operator new[](v31, 0x4D677844u, 256LL);
  if ( !v32 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2886;
    return 3221225495LL;
  }
  v33 = (struct _UNICODE_STRING *)((char *)this + 424);
  *v33 = 0LL;
  v33->MaximumLength = v31;
  v33->Buffer = (wchar_t *)v32;
  RtlAppendUnicodeToString(v33, L"_");
  RtlAppendUnicodeStringToString(v33, v26);
  RtlAppendUnicodeToString(v33, L"_");
  RtlAppendUnicodeStringToString(v33, &String);
  return 0LL;
}
