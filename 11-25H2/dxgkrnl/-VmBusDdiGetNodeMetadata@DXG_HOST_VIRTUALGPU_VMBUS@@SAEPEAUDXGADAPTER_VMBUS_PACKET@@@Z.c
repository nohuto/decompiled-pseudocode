/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021B410
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  char v3; // bl
  struct DXGADAPTER *v4; // rsi
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  _BYTE v11[32]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v12[5]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v13[144]; // [rsp+C0h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 173) )
  {
    memset(v12, 0, sizeof(v12));
    v4 = *(struct DXGADAPTER **)(v2 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, v4, 0LL);
    HIDWORD(v12[4]) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
    if ( v12[4] >= 0 )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v4);
      if ( v6 < NumDifferentPhysicalAdapters )
      {
        v8 = (unsigned __int16 *)(*((_QWORD *)v4 + 374) + 344LL * v6);
        if ( (unsigned int)v7 < *v8 )
        {
          v9 = *((_QWORD *)v8 + 4);
          v12[0] = *(_OWORD *)(74 * v7 + v9);
          v12[1] = *(_OWORD *)(74 * v7 + v9 + 16);
          v12[2] = *(_OWORD *)(74 * v7 + v9 + 32);
          v12[3] = *(_OWORD *)(74 * v7 + v9 + 48);
          *(_QWORD *)&v12[4] = *(_QWORD *)(74 * v7 + v9 + 64);
          WORD4(v12[4]) = *(_WORD *)(74 * v7 + v9 + 72);
          goto LABEL_10;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4850;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4842;
      }
      HIDWORD(v12[4]) = -1073741811;
    }
LABEL_10:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v12, 0x50u);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
    v3 = 1;
    goto LABEL_11;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4829;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    4829LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
