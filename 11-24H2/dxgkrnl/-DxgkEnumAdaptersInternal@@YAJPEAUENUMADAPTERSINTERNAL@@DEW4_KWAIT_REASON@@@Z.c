/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x140348A38 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140348E00 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140349F80 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003A164 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x14036D5E0 (DxgkWaitForPnPTransitionDone.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // bl
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int ProcessSessionId; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v24; // rax
  struct DXGGLOBAL *v25; // rax
  __int64 v26; // rcx
  struct _KTHREAD **v27; // rbx
  __int64 v28; // rdx
  unsigned int v29; // ecx
  int v30; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  char v32; // [rsp+60h] [rbp-20h]
  char v33[8]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGPROCESS *v34; // [rsp+70h] [rbp-10h]
  char v35; // [rsp+78h] [rbp-8h]
  char v36; // [rsp+B0h] [rbp+30h] BYREF

  v30 = -1;
  v5 = a3;
  v31 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2078);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2078);
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1606;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pEnumAdapters != NULL", 1606LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      LOBYTE(v15) = a2;
      v16 = DxgkWaitForPnPTransitionDone(a4, v15, ProcessSessionId, 0LL);
      if ( v16 < 0 )
      {
        v17 = v16;
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 1629;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to wait for PnP notification on current session (ntStatus = 0x%I64x).",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v34 = v10;
    v35 = 0;
    v36 = 0;
    if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v36, 0);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(2LL, v18);
        WdLogGlobalForLineNumber = 1646;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
          v19,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
        if ( !v32 )
          return (unsigned int)v19;
        v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_41:
        if ( !v22 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v30);
        return (unsigned int)v19;
      }
    }
    else if ( a2 == 1 )
    {
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v33, 0);
    }
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    Global = DXGGLOBAL::GetGlobal();
    LODWORD(v19) = DXGGLOBAL::IterateAdaptersWithCallback(
                     (__int64)Global,
                     (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
                     (__int64)a1,
                     4);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1683;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1683LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1684;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1684LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v19 < 0 )
      goto LABEL_36;
    v24 = DXGGLOBAL::GetGlobal();
    LODWORD(v19) = DXGGLOBAL::IterateAdaptersWithCallback(
                     (__int64)v24,
                     (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
                     (__int64)a1,
                     3);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1696;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1696LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1697;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1697LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v19 < 0 )
      goto LABEL_36;
    v25 = DXGGLOBAL::GetGlobal();
    LODWORD(v19) = DXGGLOBAL::IterateAdaptersWithCallback(
                     (__int64)v25,
                     (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
                     (__int64)a1,
                     5);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1710;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1710LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1711;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1711LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v19 < 0 )
    {
LABEL_36:
      WdLogSingleEntry1(2LL, (int)v19);
      WdLogGlobalForLineNumber = 1717;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to iterate all the adapters (ntStatus = 0x%I64x).",
        (int)v19,
        0LL,
        0LL,
        0LL,
        0LL);
      v27 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v26);
      while ( *(_DWORD *)a1 )
      {
        v28 = *((_QWORD *)a1 + 2);
        v29 = *(_DWORD *)a1 - 1;
        *(_DWORD *)a1 = v29;
        DXGADAPTER::DestroyHandle(v27, *(_DWORD *)(v28 + 20LL * v29));
      }
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( !v32 )
      return (unsigned int)v19;
    v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
    goto LABEL_41;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 1612;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v30);
  }
  return 3221225485LL;
}
