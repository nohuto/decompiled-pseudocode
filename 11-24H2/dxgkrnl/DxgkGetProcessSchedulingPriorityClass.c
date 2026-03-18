/*
 * XREFs of DxgkGetProcessSchedulingPriorityClass @ 0x1403ECBA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1402984DC (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityClass(void *a1, void *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  int Src; // [rsp+20h] [rbp-88h] BYREF
  int v12; // [rsp+28h] [rbp-80h] BYREF
  __int64 v13; // [rsp+30h] [rbp-78h]
  char v14; // [rsp+38h] [rbp-70h]
  _BYTE v15[80]; // [rsp+40h] [rbp-68h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2032;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2032);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2032);
  Src = 0;
  if ( a2 )
  {
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v15, a1, 512);
    v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v15, 1);
    if ( v8 >= 0 )
    {
      Src = *((_DWORD *)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v15) + 78);
      v8 = 0;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a2, &Src, 4uLL);
      DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v15);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v12);
    return (unsigned int)v8;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v12);
    }
    return 3221225485LL;
  }
}
