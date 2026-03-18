/*
 * XREFs of ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1404012B0
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E5AAC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x1402A7570 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403D937C (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403F9C8C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        unsigned int a2,
        int a3,
        int a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        unsigned int a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  __int64 v12; // rcx
  unsigned int v14; // eax
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // esi
  unsigned int v20; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+78h] [rbp-90h]
  _QWORD v23[2]; // [rsp+188h] [rbp+80h] BYREF
  int v24; // [rsp+198h] [rbp+90h]

  v20 = a2;
  if ( a6 - 1 > 0x7FFF )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11964;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"NumAllocations is invalid", 11964LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  else
  {
    *(_OWORD *)&v21[1] = 0LL;
    v22 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v21[1], this, 4 * a6 + 44, 0LL, 0LL, 0LL);
    v12 = v21[1];
    if ( v21[1] )
    {
      v14 = v20;
      *(_BYTE *)(v21[1] + 12LL) = 0;
      *(_DWORD *)(v12 + 12) &= 0x1FFu;
      *(_DWORD *)(v12 + 8) = v14;
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 11LL;
      *(struct D3DDDI_MAKERESIDENT_FLAGS *)(v12 + 32) = a5;
      *(_DWORD *)(v12 + 24) = a3;
      *(_DWORD *)(v12 + 28) = a4;
      *(_DWORD *)(v12 + 36) = a6;
      if ( a6 )
      {
        v16 = (_DWORD *)(v12 + 40);
        v17 = a6;
        do
        {
          v18 = *(_QWORD *)a7;
          a7 = (const struct DXGALLOCATIONREFERENCE *)((char *)a7 + 8);
          *v16++ = *(_DWORD *)(v18 + 20);
          --v17;
        }
        while ( v17 );
      }
      v20 = 24;
      v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v21[1], v23, &v20);
      if ( v19 < 0 )
        goto LABEL_14;
      v19 = -1073741823;
      if ( v20 < 0x18 )
        goto LABEL_14;
      if ( a8 )
        *a8 = v23[0];
      if ( a9 )
        *a9 = v23[1];
      v19 = v24;
      if ( v24 < 0 )
      {
LABEL_14:
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 12005;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VmBusSendMakeResident failed: 0x%I64x",
          v19,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21[1]);
      return (unsigned int)v19;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 11972;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate storage for input buffer",
        11972LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21[1]);
      return 3221225495LL;
    }
  }
}
