/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1401EE850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403D5E88 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int *v9; // rax
  size_t v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  const void *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  struct DXGPROCESS *Process; // r14
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  int v20; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A0h]
  char v22; // [rsp+60h] [rbp-98h]
  unsigned int v23; // [rsp+68h] [rbp-90h]
  int v24; // [rsp+6Ch] [rbp-8Ch]
  void *v25[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-78h]
  _BYTE v27[80]; // [rsp+90h] [rbp-68h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2143);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2143);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent();
    v5 = -1073741790;
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 5025;
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v20);
    }
    return v5;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal() + 416) )
  {
    v5 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
    WdLogGlobalForLineNumber = 5031;
    goto LABEL_7;
  }
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v9 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v23 = *v9;
  v10 = v23;
  if ( v23 >= 0x18 )
  {
    if ( v23 > 0x18 )
      v10 = 24LL;
    v23 = v10;
    v13 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v25, v13, v10);
    if ( !HIDWORD(v25[0]) )
    {
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v27, v25[1], 0x2000u);
      v16 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v27, 0);
      v5 = v16;
      if ( v16 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v27);
        v18 = *((unsigned int *)Process + 104);
        if ( (_DWORD)v18 != 1 )
        {
          if ( (v18 & 0xFFFFFFFD) != 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4885;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FALSE", 4885LL, 0LL, 0LL, 0LL, 0LL);
            v18 = 3LL;
          }
          else
          {
            v18 = 0LL;
          }
        }
        v24 = v18;
        if ( (_DWORD)v18 == 3 )
        {
          v5 = -1073741595;
          WdLogSingleEntry2(v18, Process, -1073741595LL);
          WdLogGlobalForLineNumber = 5102;
        }
        else
        {
          v19 = (_DWORD *)(a1 + 16);
          if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v19 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v19 = v18;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, v25[1], v16);
        WdLogGlobalForLineNumber = 5090;
      }
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v27);
      goto LABEL_7;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5078;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v20);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5056;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v20);
    return 3221225485LL;
  }
}
