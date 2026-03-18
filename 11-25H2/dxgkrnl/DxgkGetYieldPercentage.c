/*
 * XREFs of DxgkGetYieldPercentage @ 0x1401E9270
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

__int64 __fastcall DxgkGetYieldPercentage(ULONG64 a1, __int64 a2, __int64 a3)
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
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+30h] [rbp-48h]
  unsigned int v24; // [rsp+38h] [rbp-40h]
  _BYTE v25[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2142;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2142);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2142);
  if ( CheckTokenForResourceManagerAccess() )
  {
    Src = 0LL;
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
      RtlCopyVolatileMemory(&Src, v12, v9);
      if ( DWORD1(Src) )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 4894;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v21);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGGLOBAL *)((char *)Global + 672), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
        v16 = DXGGLOBAL::GetGlobal();
        DWORD2(Src) = DWORD2(Src) & 0xFFFFFFFE | *((_DWORD *)v16 + 76197) & 1;
        HIDWORD(Src) = *((_DWORD *)v16 + 76194);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
        v17 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *v17 = HIDWORD(Src);
        v18 = (void *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v18 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v18, (char *)&Src + 8, 4uLL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v21);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 4872;
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
    WdLogGlobalForLineNumber = 4848;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v21);
    }
    return 3221225506LL;
  }
}
