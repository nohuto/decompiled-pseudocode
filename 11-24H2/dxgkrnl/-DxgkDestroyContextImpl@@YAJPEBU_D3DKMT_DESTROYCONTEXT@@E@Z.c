/*
 * XREFs of ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1403A0A98
 * Callers:
 *     DxgkDestroyContextInternal @ 0x14018C558 (DxgkDestroyContextInternal.c)
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221FA0 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyContext @ 0x1403A0A80 (DxgkDestroyContext.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A0E60 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_DESTROYCONTEXT *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE v20[16]; // [rsp+50h] [rbp-48h] BYREF
  int v21; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]
  char v23; // [rsp+70h] [rbp-28h]
  _BYTE v24[24]; // [rsp+78h] [rbp-20h] BYREF
  D3DKMT_HANDLE hContext; // [rsp+B0h] [rbp+18h] BYREF

  v4 = a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2040);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2040);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 505;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_28;
  }
  hContext = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYCONTEXT *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&hContext, v4, 4uLL);
  }
  else
  {
    hContext = v4->hContext;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, Current);
  v7 = hContext;
  v8 = (hContext >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)Current + 74) )
    goto LABEL_35;
  v9 = *((_QWORD *)Current + 35);
  if ( ((hContext >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60) )
    goto LABEL_35;
  if ( (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) != 0 )
    goto LABEL_35;
  v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
  if ( !v10 )
    goto LABEL_35;
  if ( v10 != 7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    v7 = hContext;
LABEL_35:
    v11 = 0LL;
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(v9 + 16LL * v8);
LABEL_15:
  if ( v11 )
  {
    v12 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *((_DWORD *)Current + 74) )
    {
      v13 = *((_QWORD *)Current + 35);
      v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0 )
      {
        *(_DWORD *)(v13 + 16 * (((unsigned __int64)(unsigned int)v7 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
    if ( (*(_DWORD *)(v11 + 392) & 0x10) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v20,
        *(struct DXGDEVICE **)(v11 + 16));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v24,
        (struct _KTHREAD **)(*(_QWORD *)(v11 + 16) + 144LL));
      DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v11, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
    }
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v21);
    }
    return 0LL;
  }
  WdLogSingleEntry2(3LL, v7, -1073741811LL);
  WdLogGlobalForLineNumber = 541;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
  return 3221225485LL;
}
