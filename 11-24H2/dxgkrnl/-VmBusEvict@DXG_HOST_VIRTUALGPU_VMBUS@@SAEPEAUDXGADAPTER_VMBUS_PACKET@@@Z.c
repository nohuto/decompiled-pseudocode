/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14039BAE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14035E31C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // eax
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-19h]
  _BYTE v13[8]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v14; // [rsp+58h] [rbp+1Fh]
  int v15; // [rsp+60h] [rbp+27h]
  _D3DKMT_EVICT v16; // [rsp+68h] [rbp+2Fh] BYREF
  UINT64 NumBytesToTrim; // [rsp+A0h] [rbp+67h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)a1 + 10);
  v4 = v3 == -248;
  v5 = v3 + 248;
  v15 = 0;
  v14 = v5;
  if ( !v4 && *(struct _KTHREAD **)(v5 + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v13);
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v7 + 32);
      if ( (_DWORD)v8 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 36) / v8 >= 4 )
      {
        *(_QWORD *)(&v16.Flags + 1) = 0LL;
        HIDWORD(v16.NumBytesToTrim) = 0;
        v16.Flags.Value = *(_DWORD *)(v7 + 28);
        v16.AllocationList = (const D3DKMT_HANDLE *)(v7 + 36);
        v16.NumAllocations = *(_DWORD *)(v7 + 32);
        v16.hDevice = *(_DWORD *)(v7 + 24);
        v9 = DxgkEvictInternal(&v16, 0, 0LL);
        if ( v9 < 0 )
        {
          v11 = v9;
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 5114;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"DxgkEvictInternal failed: 0x%I64x",
            v11,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
          NumBytesToTrim = v16.NumBytesToTrim;
          VmBusCompletePacket(v10, &NumBytesToTrim, 8u);
          v2 = 1;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
        v12 = *((unsigned int *)a1 + 36);
        WdLogGlobalForLineNumber = 5093;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid packet size 0x%I64x",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5086;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5086LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
}
