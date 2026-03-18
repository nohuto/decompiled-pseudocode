/*
 * XREFs of ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051320 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkReclaimAllocations2 @ 0x1402963B0 (DxgkReclaimAllocations2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReclaimAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rbx
  __int64 v5; // r9
  __int128 *v6; // rsi
  __int64 v7; // r14
  unsigned int v8; // r12d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int128 v12; // [rsp+50h] [rbp-29h] BYREF
  __int128 v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  _BYTE v15[24]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v16; // [rsp+90h] [rbp+17h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( v4 )
    {
      v6 = &v16;
      LODWORD(v7) = -1073741811;
      v16 = 0LL;
      v14 = 0LL;
      v12 = 0LL;
      v8 = 16;
      v13 = 0LL;
      v9 = *(unsigned int *)(v4 + 32);
      if ( (_DWORD)v9
        && (v10 = ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) % v9,
            ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v9 >= 4) )
      {
        if ( !*(_BYTE *)(v4 + 37)
          || (unsigned int)v9 <= 1
          || (v8 = 4 * v9 + 12, (v6 = (__int128 *)operator new[](v8, 0x4B677844u, 64LL, v5)) != 0LL) )
        {
          *(_QWORD *)&v12 = *(_QWORD *)(v4 + 28);
          if ( *(_BYTE *)(v4 + 36) )
            *((_QWORD *)&v12 + 1) = v4 + 40;
          else
            *(_QWORD *)&v13 = v4 + 40;
          if ( *(_BYTE *)(v4 + 37) )
            *((_QWORD *)&v13 + 1) = (char *)v6 + 12;
          v11 = DxgkReclaimAllocations2(&v12, v10);
          v7 = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(2LL, v11);
            WdLogGlobalForLineNumber = 1679;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"DxgkReclaimAllocations failed: 0x%I64x",
              v7,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1654;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for reclaim results",
            1654LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v7) = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1644;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size", 1644LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_DWORD *)v6 + 2) = v7;
      *(_QWORD *)v6 = v14;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v6, v8);
      if ( v6 != &v16 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1631;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1631LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return 0;
  }
}
