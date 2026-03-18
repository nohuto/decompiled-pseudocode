/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1403B9B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x14018467C (-VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ @ 0x1403B9C94 (-FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(ULONG64 a1)
{
  const void *v1; // rdx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER *v4; // rbx
  DXGADAPTER *v6; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGADAPTER *v8; // [rsp+48h] [rbp-20h]
  char v9; // [rsp+50h] [rbp-18h]
  unsigned int v10; // [rsp+78h] [rbp+10h] BYREF
  struct DXGADAPTER *v11; // [rsp+80h] [rbp+18h] BYREF

  v1 = (const void *)a1;
  v10 = 0;
  if ( a1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v10, v1, 4uLL);
  v11 = 0LL;
  Current = DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11727;
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v6, v10, Current, &v11, 1);
  v4 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(3LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 11738;
    if ( v6 )
      DXGADAPTER::ReleaseReference(v6);
    return 3221225485LL;
  }
  v8 = v11;
  v9 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( *((_DWORD *)v4 + 50) == 1 && *((_QWORD *)v11 + 391) )
  {
    if ( *((_BYTE *)v11 + 209) )
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions((struct DXGADAPTER *)((char *)v11 + 4664));
    else
      ADAPTER_RENDER::FlushHeapTransitions(*((ADAPTER_RENDER **)v11 + 391));
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( v6 )
    DXGADAPTER::ReleaseReference(v6);
  return 0LL;
}
