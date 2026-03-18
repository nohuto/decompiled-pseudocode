/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14037B720
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14037B94C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-19h]
  _BYTE v10[24]; // [rsp+50h] [rbp+17h] BYREF
  _D3DKMT_EVICT v11; // [rsp+68h] [rbp+2Fh] BYREF
  UINT64 NumBytesToTrim; // [rsp+A0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v10);
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 + 32);
      if ( (_DWORD)v4 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 36) / v4 >= 4 )
      {
        *(_QWORD *)(&v11.Flags + 1) = 0LL;
        HIDWORD(v11.NumBytesToTrim) = 0;
        v11.Flags.Value = *(_DWORD *)(v3 + 28);
        v11.AllocationList = (const D3DKMT_HANDLE *)(v3 + 36);
        v11.NumAllocations = *(_DWORD *)(v3 + 32);
        v11.hDevice = *(_DWORD *)(v3 + 24);
        v5 = DxgkEvictInternal(&v11, 0, 0LL);
        if ( v5 >= 0 )
        {
          v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
          NumBytesToTrim = v11.NumBytesToTrim;
          VmBusCompletePacket(v8, &NumBytesToTrim, 8u);
          v2 = 1;
        }
        else
        {
          v6 = v5;
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 5105;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"DxgkEvictInternal failed: 0x%I64x",
            v6,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
        v9 = *((unsigned int *)a1 + 36);
        WdLogGlobalForLineNumber = 5084;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5077;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5077LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
