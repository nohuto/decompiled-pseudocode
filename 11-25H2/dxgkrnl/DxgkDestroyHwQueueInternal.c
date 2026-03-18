/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1403C8148
 * Callers:
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021BD40 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyHwQueue @ 0x1403C8130 (DxgkDestroyHwQueue.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x14001F210 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  int *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  DXGHWQUEUE *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+50h] [rbp-48h] BYREF
  int *v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+68h] [rbp-30h]
  char v29; // [rsp+70h] [rbp-28h]
  _BYTE v30[24]; // [rsp+78h] [rbp-20h] BYREF

  v4 = (int *)a1;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2154);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2154);
  v25 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (int *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v25, v4, 4uLL);
    v4 = &v25;
  }
  v26 = v4;
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1119;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v27);
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, Current);
  v15 = ((unsigned int)*v4 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)v8 + 74) )
  {
    v16 = *((_QWORD *)v8 + 35);
    if ( (((unsigned int)*v4 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
      && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
    {
      v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
      if ( v17 )
      {
        if ( v17 == 15 )
        {
          v18 = *(DXGHWQUEUE **)(v16 + 16LL * v15);
          goto LABEL_19;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v18 = 0LL;
LABEL_19:
  v19 = (unsigned int)*v4;
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, v19, -1073741811LL);
    WdLogGlobalForLineNumber = 1133;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
    goto LABEL_9;
  }
  v20 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 < *((_DWORD *)v8 + 74) )
  {
    v21 = *((_QWORD *)v8 + 35);
    v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
    if ( (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
      && (v22 & 0x2000) == 0
      && (v22 & 0x1F) != 0 )
    {
      *(_DWORD *)(v21 + 16LL * (((unsigned int)v19 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
  DXGHWQUEUE::ReleaseReference(v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v27);
  return 0LL;
}
