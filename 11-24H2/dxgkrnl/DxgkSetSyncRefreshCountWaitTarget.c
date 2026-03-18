/*
 * XREFs of DxgkSetSyncRefreshCountWaitTarget @ 0x14030BC90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTarget(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  unsigned int refreshed; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+30h] [rbp-28h]
  unsigned int v11[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = (const void *)a1;
  v8 = -1;
  v9 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2026);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2026);
  *(_OWORD *)v11 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v11, v3, 0x10uLL);
  refreshed = DxgkSetSyncRefreshCountWaitTargetInternal(v11[0], v11[1], v11[2], v11[3]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v8);
  return refreshed;
}
