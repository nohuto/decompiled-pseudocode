/*
 * XREFs of ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x140229564
 * Callers:
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401DAA6C (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        void *a4,
        struct _D3DKMT_CREATEHWQUEUE *a5,
        unsigned int *a6)
{
  UINT PrivateDriverDataSize; // r14d
  unsigned int v12; // edi
  unsigned int v13; // r14d
  char *v14; // rbx
  UINT v15; // eax
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // r13
  UINT v19; // eax
  UINT v20; // eax
  unsigned int v21; // [rsp+50h] [rbp-178h] BYREF
  unsigned int *v22; // [rsp+58h] [rbp-170h]
  void *v23[2]; // [rsp+60h] [rbp-168h] BYREF
  int v24; // [rsp+70h] [rbp-158h]

  v22 = a6;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  if ( PrivateDriverDataSize <= 0x20000 )
  {
    v12 = 0;
    *(_OWORD *)v23 = 0LL;
    v13 = (PrivateDriverDataSize + 78) & 0xFFFFFFF8;
    v24 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v23, this, v13, 0LL, 0LL, 0LL);
    v14 = (char *)v23[0];
    if ( v23[0] )
    {
      *((_BYTE *)v23[0] + 12) = 0;
      *((_DWORD *)v14 + 3) &= 0x1FFu;
      *((_DWORD *)v14 + 2) = a2;
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 2) = 50LL;
      *((_DWORD *)v14 + 14) = a3;
      *((_DWORD *)v14 + 15) = a5->Flags.0;
      *((_DWORD *)v14 + 16) = a5->PrivateDriverDataSize;
      v15 = a5->PrivateDriverDataSize;
      if ( v15 )
        memmove(v14 + 68, a4, v15);
      v21 = v13;
      LODWORD(v16) = -1073741823;
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)v23, v14, &v21);
      v18 = v21;
      if ( v17 < 0 || v21 < v13 )
      {
        WdLogSingleEntry2(2LL, v21, v13);
        WdLogGlobalForLineNumber = 9060;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VmBusSendSyncMessage failed. OutputSize:0x%I64x, OutputsizeOriginal:0x%I64x",
          v18,
          v13,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v16 = *((int *)v14 + 6);
        if ( (int)v16 < 0 )
        {
          WdLogSingleEntry1(2LL, *((int *)v14 + 6));
          WdLogGlobalForLineNumber = 9054;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"CreateHwQueue failed on host with Status: 0x%I64x",
            v16,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *v22 = *((_DWORD *)v14 + 7);
          a5->hHwQueueProgressFence = *((_DWORD *)v14 + 8);
          a5->HwQueueProgressFenceGPUVirtualAddress = *((_QWORD *)v14 + 6);
          a5->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)v14 + 5);
          v19 = a5->PrivateDriverDataSize;
          if ( v19 )
            memmove(a4, v14 + 68, v19);
        }
      }
      v20 = a5->PrivateDriverDataSize;
      if ( v20 )
        memmove(a4, v14 + 68, v20);
      v12 = v16;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 9019;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for DXGKVMB_COMMAND_CREATEHWQUEUE",
        9019LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v23);
    return v12;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 9007;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PrivateDriverDataSize is invalid",
      9007LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
