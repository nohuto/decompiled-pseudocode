/*
 * XREFs of DxgkOpenResource @ 0x140350590
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225660 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x140351948 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-78h]
  int v11; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+30h] [rbp-68h]
  char v13; // [rsp+38h] [rbp-60h]
  _DWORD v14[22]; // [rsp+40h] [rbp-58h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2005);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2005);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    memset(v14, 0, 0x48uLL);
    v4 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v4 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v14, v4, 0x48uLL);
    v5 = v14[1];
    v10 = v14[1];
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 4);
  }
  v6 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1, v5, 0LL, 0LL, v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v11);
  return v6;
}
