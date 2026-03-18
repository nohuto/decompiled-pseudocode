/*
 * XREFs of ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x14040424C
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1402A4B90 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
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

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // rsi
  _OWORD *v11; // rax
  struct _D3DKMT_SUBMITCOMMAND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  size_t v15; // r8
  void *v16; // rdi
  D3DKMT_HANDLE *HistoryBufferArray; // rdx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  UINT i; // edi
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  struct _EX_RUNDOWN_REF **v22; // rcx
  unsigned int v23; // edi
  UINT j; // edi
  struct _EX_RUNDOWN_REF **v25; // rax
  unsigned int k; // edi
  unsigned int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  struct _EX_RUNDOWN_REF *v34; // [rsp+50h] [rbp-1C8h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+58h] [rbp-1C0h] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+60h] [rbp-1B8h] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+68h] [rbp-1B0h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v38; // [rsp+70h] [rbp-1A8h]
  struct DXGPROCESS *v39; // [rsp+78h] [rbp-1A0h]
  char v40[8]; // [rsp+80h] [rbp-198h] BYREF
  __int64 v41; // [rsp+88h] [rbp-190h]
  char v42; // [rsp+90h] [rbp-188h]
  _BYTE v43[24]; // [rsp+98h] [rbp-180h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-168h] BYREF
  int v45; // [rsp+C0h] [rbp-158h]

  v38 = this;
  v39 = a2;
  v41 = *((_QWORD *)this + 9);
  v6 = 0;
  v42 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    v6 = -1073741130;
LABEL_50:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    return v6;
  }
  if ( g_VgpuDisableSubmitCommand )
    goto LABEL_50;
  v7 = 4LL * a3->NumHistoryBuffers;
  if ( v7 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12421;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    return 3221225485LL;
  }
  v8 = v7 + 408;
  if ( (unsigned int)v7 >= 0xFFFFFE68 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12426;
    goto LABEL_49;
  }
  v9 = v8 + a3->PrivateDriverDataSize;
  if ( v9 < v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12431;
LABEL_49:
    v6 = -1073741811;
    goto LABEL_50;
  }
  if ( v9 > 0x20000 )
  {
    WdLogSingleEntry0((unsigned int)(g_VgpuDisableSubmitCommand + 3));
    WdLogGlobalForLineNumber = 12436;
    v6 = -1073741637;
    goto LABEL_50;
  }
  v44 = 0LL;
  v45 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v44, this, v9, 0LL, 0LL, 0LL);
  v10 = v44;
  if ( !(_QWORD)v44 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 12443;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMAND",
      12443LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v44);
    v6 = -1073741801;
    goto LABEL_50;
  }
  *(_QWORD *)v44 = 0LL;
  *(_DWORD *)(v10 + 8) = 0;
  *(_BYTE *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 12) &= 0x1FFu;
  *(_QWORD *)(v10 + 16) = 20LL;
  *(_DWORD *)(v10 + 8) = DXGPROCESS::GetHostProcess(a2);
  v11 = (_OWORD *)(v10 + 24);
  v12 = a3;
  v13 = 3LL;
  do
  {
    *v11 = *(_OWORD *)&v12->Commands;
    v11[1] = *(_OWORD *)&v12->PresentHistoryToken;
    v11[2] = *(_OWORD *)&v12->BroadcastContext[1];
    v11[3] = *(_OWORD *)&v12->BroadcastContext[5];
    v11[4] = *(_OWORD *)&v12->BroadcastContext[9];
    v11[5] = *(_OWORD *)&v12->BroadcastContext[13];
    v11[6] = *(_OWORD *)&v12->BroadcastContext[17];
    v11 += 8;
    *(v11 - 1) = *(_OWORD *)&v12->BroadcastContext[21];
    v12 = (struct _D3DKMT_SUBMITCOMMAND *)((char *)v12 + 128);
    --v13;
  }
  while ( v13 );
  v14 = v10 + 408;
  v15 = (unsigned int)v7;
  v16 = (void *)((unsigned int)v7 + v10 + 408);
  HistoryBufferArray = a3->HistoryBufferArray;
  if ( (D3DKMT_HANDLE *)((char *)HistoryBufferArray + v15) < HistoryBufferArray
    || (unsigned __int64)HistoryBufferArray + v15 > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove((void *)(v10 + 408), HistoryBufferArray, v15);
  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  pPrivateDriverData = (char *)a3->pPrivateDriverData;
  if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
    || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v16, pPrivateDriverData, PrivateDriverDataSize);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, a2);
  for ( i = 0; i < a3->NumPrimaries; ++i )
  {
    v34 = 0LL;
    AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                    (__int64)a2,
                                                    (DXGALLOCATIONREFERENCE *)&v36,
                                                    *(_DWORD *)(v10 + 4LL * i + 328));
    DXGALLOCATIONREFERENCE::MoveAssign(&v34, AllocationUnsafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36);
    if ( !v34 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12479;
      v22 = &v34;
      goto LABEL_24;
    }
    *(_DWORD *)(v10 + 4LL * i + 328) = HIDWORD(v34[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34);
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= a3->NumHistoryBuffers )
    {
      for ( k = 0; ; ++k )
      {
        if ( k >= *(_DWORD *)(v10 + 48) )
        {
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43);
          v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v38, (struct DXGVMBUSMESSAGE *)&v44);
          v23 = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry1(3LL, v32);
            WdLogGlobalForLineNumber = 12513;
          }
          goto LABEL_46;
        }
        v27 = *(_DWORD *)(v10 + 4LL * k + 52);
        v28 = (v27 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v28 >= *((_DWORD *)a2 + 74) )
          goto LABEL_39;
        v29 = *((_QWORD *)a2 + 35);
        v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
        if ( ((v27 >> 25) & 0x60) != (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) || (v30 & 0x2000) != 0 || (v30 & 0x1F) == 0 )
          goto LABEL_39;
        if ( (*(_BYTE *)(v29 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
          break;
        v31 = *(_QWORD *)(v29 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF));
LABEL_40:
        if ( !v31 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 12502;
          v23 = -1073741811;
          goto LABEL_25;
        }
        *(_DWORD *)(v10 + 4LL * k + 52) = *(_DWORD *)(v31 + 28);
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_39:
      v31 = 0LL;
      goto LABEL_40;
    }
    v35 = 0LL;
    v25 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                       (__int64)a2,
                                       (DXGALLOCATIONREFERENCE *)&v37,
                                       *(_DWORD *)(v14 + 4LL * j));
    DXGALLOCATIONREFERENCE::MoveAssign(&v35, v25);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37);
    if ( !v35 )
      break;
    *(_DWORD *)(v14 + 4LL * j) = HIDWORD(v35[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 12491;
  v22 = &v35;
LABEL_24:
  v23 = -1073741811;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v22);
LABEL_25:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43);
LABEL_46:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v44);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  return v23;
}
