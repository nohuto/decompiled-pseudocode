/*
 * XREFs of ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1402C7384
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402C5A10 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140034428 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x14022F208 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _EX_RUNDOWN_REF *a2,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r14
  size_t v11; // r8
  void *v12; // rsi
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  __int64 PrivateDriverDataSize; // rax
  char *pPrivateDriverData; // rdx
  UINT i; // esi
  DXGALLOCATIONREFERENCE *AllocationUnsafe; // rax
  unsigned int v18; // edi
  unsigned int v19; // r8d
  __int64 v20; // rax
  ULONG_PTR Count; // r9
  int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  struct _EX_RUNDOWN_REF *v26; // [rsp+50h] [rbp-1B8h] BYREF
  struct _EX_RUNDOWN_REF *v27[2]; // [rsp+58h] [rbp-1B0h] BYREF
  char v28[8]; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-198h]
  char v30; // [rsp+78h] [rbp-190h]
  _BYTE v31[32]; // [rsp+80h] [rbp-188h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-168h] BYREF
  int v33; // [rsp+B0h] [rbp-158h]

  v27[1] = a2;
  v29 = *((_QWORD *)this + 9);
  v6 = 0;
  v30 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    v6 = -1073741130;
LABEL_40:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    return v6;
  }
  if ( g_VgpuDisableSubmitCommand )
    goto LABEL_40;
  v7 = 4 * a3->NumPrimaries;
  v8 = v7 + 80;
  if ( (unsigned int)v7 >= 0xFFFFFFB0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12545;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    return 3221225485LL;
  }
  v9 = v8 + a3->PrivateDriverDataSize;
  if ( v9 < v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12551;
    v6 = -1073741811;
    goto LABEL_40;
  }
  if ( v9 > 0x20000 )
  {
    WdLogSingleEntry0((unsigned int)(g_VgpuDisableSubmitCommand + 3));
    WdLogGlobalForLineNumber = 12557;
    v6 = -1073741637;
    goto LABEL_40;
  }
  v32 = 0LL;
  v33 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v32, this, v9, 0LL, 0LL, 0LL);
  v10 = v32;
  if ( !(_QWORD)v32 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 12565;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMANDTOHWQUEUE",
      12565LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
    v6 = -1073741801;
    goto LABEL_40;
  }
  *(_QWORD *)v32 = 0LL;
  *(_DWORD *)(v10 + 8) = 0;
  *(_BYTE *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 12) &= 0x1FFu;
  *(_QWORD *)(v10 + 16) = 52LL;
  *(_DWORD *)(v10 + 8) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
  *(_OWORD *)(v10 + 24) = *(_OWORD *)&a3->hHwQueue;
  *(_OWORD *)(v10 + 40) = *(_OWORD *)&a3->CommandBuffer;
  *(_OWORD *)(v10 + 56) = *(_OWORD *)&a3->pPrivateDriverData;
  *(_QWORD *)(v10 + 72) = a3->WrittenPrimaries;
  v11 = (unsigned int)v7;
  v12 = (void *)(v10 + 80 + v7);
  if ( a3->NumPrimaries )
  {
    WrittenPrimaries = a3->WrittenPrimaries;
    if ( (const D3DKMT_HANDLE *)((char *)WrittenPrimaries + v11) < WrittenPrimaries
      || (unsigned __int64)WrittenPrimaries + v11 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove((void *)(v10 + 80), WrittenPrimaries, v11);
  }
  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    pPrivateDriverData = (char *)a3->pPrivateDriverData;
    if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v12, pPrivateDriverData, (unsigned int)PrivateDriverDataSize);
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, (struct DXGPROCESS *)a2);
  for ( i = 0; i < a3->NumPrimaries; ++i )
  {
    v26 = 0LL;
    AllocationUnsafe = DXGPROCESS::GetAllocationUnsafe(
                         (__int64)a2,
                         (DXGALLOCATIONREFERENCE *)v27,
                         *(_DWORD *)(v10 + 4LL * i + 80));
    DXGALLOCATIONREFERENCE::MoveAssign(&v26, AllocationUnsafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v27);
    if ( !v26 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12607;
      v18 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
LABEL_25:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31);
      goto LABEL_38;
    }
    *(_DWORD *)(v10 + 4LL * i + 80) = HIDWORD(v26[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
  }
  v19 = *(_DWORD *)(v10 + 24);
  v20 = (v19 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 < LODWORD(a2[37].Count) )
  {
    Count = a2[35].Count;
    v22 = *(_DWORD *)(Count + 16 * v20 + 8);
    if ( ((v19 >> 25) & 0x60) == (*(_BYTE *)(Count + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
    {
      if ( (*(_BYTE *)(Count + 16 * (((unsigned __int64)v19 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xF )
      {
        v23 = *(_QWORD *)(Count + 16 * (((unsigned __int64)v19 >> 6) & 0xFFFFFF));
        goto LABEL_33;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v23 = 0LL;
LABEL_33:
  if ( !v23 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12617;
    v18 = -1073741811;
    goto LABEL_25;
  }
  *(_DWORD *)(v10 + 24) = *(_DWORD *)(v23 + 28);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31);
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(this, (struct DXGVMBUSMESSAGE *)&v32);
  v18 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(3LL, v24);
    WdLogGlobalForLineNumber = 12627;
  }
LABEL_38:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return v18;
}
