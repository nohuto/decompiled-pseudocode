/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1403BE1BC
 * Callers:
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021C090 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1403BE180 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1403BE1A0 (DxgkDestroyPagingQueue.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x14001E780 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v7; // ecx
  __int64 v8; // r9
  int v9; // edx
  DXGPAGINGQUEUE *v10; // rdi
  __int64 hPagingQueue; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-48h] BYREF
  struct D3DDDI_DESTROYPAGINGQUEUE *v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+60h] [rbp-38h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h]
  char v24; // [rsp+70h] [rbp-28h]
  _BYTE v25[24]; // [rsp+78h] [rbp-20h] BYREF

  v4 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2118);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2118);
  v20 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v20, v4, 4uLL);
    v4 = (struct D3DDDI_DESTROYPAGINGQUEUE *)&v20;
    v21 = (struct D3DDDI_DESTROYPAGINGQUEUE *)&v20;
  }
  else
  {
    v21 = v4;
  }
  Current = DXGPROCESS::GetCurrent(v5);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current);
  v7 = (v4->hPagingQueue >> 6) & 0xFFFFFF;
  if ( v7 < *((_DWORD *)Current + 74) )
  {
    v8 = *((_QWORD *)Current + 35);
    if ( ((v4->hPagingQueue >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60)
      && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0 )
    {
      v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
      if ( v9 )
      {
        if ( v9 == 10 )
        {
          v10 = *(DXGPAGINGQUEUE **)(v8 + 16LL * v7);
          goto LABEL_13;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v10 = 0LL;
LABEL_13:
  hPagingQueue = v4->hPagingQueue;
  if ( v10 )
  {
    v12 = ((unsigned int)hPagingQueue >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *((_DWORD *)Current + 74) )
    {
      v13 = *((_QWORD *)Current + 35);
      v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
      if ( (((unsigned int)hPagingQueue >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0 )
      {
        *(_DWORD *)(v13 + 16LL * (((unsigned int)hPagingQueue >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
    DXGPAGINGQUEUE::ReleaseReference(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v22);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 412;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v22);
    return 3221225485LL;
  }
}
