/*
 * XREFs of DxgkGetMemoryBudgetTarget @ 0x1401E8860
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403D4508 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetMemoryBudgetTarget(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v8; // rax
  size_t v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  const void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGGLOBAL *Global; // rax
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  char v22; // [rsp+30h] [rbp-48h]
  unsigned int v23; // [rsp+38h] [rbp-40h]
  _BYTE v24[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v25; // [rsp+50h] [rbp-28h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2144;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2144);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2144);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v25 = 0LL;
    v8 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v23 = *v8;
    v9 = v23;
    if ( v23 >= 0x10 )
    {
      if ( v23 > 0x10 )
        v9 = 16LL;
      v23 = v9;
      v12 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v12 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v25, v12, v9);
      if ( DWORD1(v25) )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 5107;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v20);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGGLOBAL *)((char *)Global + 672), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
        *((_QWORD *)&v25 + 1) = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + 304780);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
        v16 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = DWORD2(v25);
        v17 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *v17 = HIDWORD(v25);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v20);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5085;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v20);
      return 3221225485LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 5062;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v20);
    }
    return 3221225506LL;
  }
}
