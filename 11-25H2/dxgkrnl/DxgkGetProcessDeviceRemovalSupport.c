/*
 * XREFs of DxgkGetProcessDeviceRemovalSupport @ 0x1401E8BB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038794 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1401E7088 (-GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x14028A750 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkGetProcessDeviceRemovalSupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KTHREAD **Process; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 v13; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-98h]
  char v16; // [rsp+38h] [rbp-90h]
  struct _LUID v17[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+50h] [rbp-78h]
  _BYTE v19[80]; // [rsp+60h] [rbp-68h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2156;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2156);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2156);
  *(_OWORD *)&v17[0].LowPart = 0LL;
  v18 = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v17, v4, 0x18uLL);
  v13 = 1;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v19, *(void **)v17, 0x1000u);
  v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v19, 0);
  if ( v5 >= 0 )
  {
    Process = (struct _KTHREAD **)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v19);
    DXGPROCESS::GetDeviceRemovalSupport(Process, &v17[1], (bool *)&v13);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v19);
    v10 = (_BYTE *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = v13;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)v17);
    WdLogGlobalForLineNumber = 5247;
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v14);
    }
    return (unsigned int)v5;
  }
}
