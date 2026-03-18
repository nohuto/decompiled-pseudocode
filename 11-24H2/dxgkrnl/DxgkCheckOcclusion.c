/*
 * XREFs of DxgkCheckOcclusion @ 0x140308B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047050 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140308EE0 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h]
  char v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp-30h]
  char v22; // [rsp+80h] [rbp-28h]
  struct tagRECT v23; // [rsp+88h] [rbp-20h] BYREF

  v3 = (const void *)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2038);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2038);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v19 = 0LL;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v19, v3, 8uLL);
    if ( v19 )
    {
      v6 = *((_QWORD *)Current + 11);
      if ( (*(unsigned int (**)(void))(v6 + 224))() )
      {
        v11 = -1071775738;
        v23 = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v20, Current);
        if ( v22 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v20, 0LL, 0LL);
          WdLogGlobalForLineNumber = 1902;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v21 + 88) + 32LL))(1LL);
        v22 = 1;
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v6 + 376))(v19, &v23) == 1 )
        {
          Global = DXGGLOBAL::GetGlobal();
          v11 = DXGGLOBAL::IsWindowVisible(Global, &v23) == 0 ? 0xC01E0006 : 0;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 347;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
            347LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v20);
      }
      else
      {
        v11 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = -1071775738LL;
        WdLogGlobalForLineNumber = 322;
      }
    }
    else
    {
      v11 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 309;
    }
  }
  else
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 280;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v16);
  return v11;
}
