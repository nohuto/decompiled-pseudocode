/*
 * XREFs of DxgkGetMemoryBudgetTarget @ 0x1401EE220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007328C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738A8 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403D5E88 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
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
  struct DXGGLOBAL *v16; // rax
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h]
  char v23; // [rsp+30h] [rbp-58h]
  unsigned int v24; // [rsp+38h] [rbp-50h]
  DXGADAPTERLISTLOCK *v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+48h] [rbp-40h]
  _BYTE v27[16]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v28; // [rsp+60h] [rbp-28h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2144;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2144);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2144);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v28 = 0LL;
    v8 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v24 = *v8;
    v9 = v24;
    if ( v24 >= 0x10 )
    {
      if ( v24 > 0x10 )
        v9 = 16LL;
      v24 = v9;
      v12 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v12 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v28, v12, v9);
      if ( DWORD1(v28) )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 5185;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v21);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
          (DXGAUTOADAPTERLISTLOCK *)&v25,
          (struct DXGGLOBAL *)((char *)Global + 672));
        v16 = DXGGLOBAL::GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGGLOBAL *)((char *)v16 + 304808), 0);
        if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
        {
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
        }
        else
        {
          DXGADAPTERLISTLOCK::AcquireExclusive(v25);
          v26 = 2;
        }
        *((_QWORD *)&v28 + 1) = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + 304860);
        if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
        else
          DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)&v25);
        v17 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *v17 = DWORD2(v28);
        v18 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = HIDWORD(v28);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
        DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)&v25);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v21);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5163;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v21);
      return 3221225485LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 5140;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v21);
    }
    return 3221225506LL;
  }
}
