/*
 * XREFs of ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402F8FE8
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E08AC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14032FA20 (DxgkMapGpuVirtualAddress.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x14035FE10 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        const struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a6)
{
  __int64 v10; // rcx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-A0h] BYREF
  int v16; // [rsp+78h] [rbp-90h]
  char v17; // [rsp+7Ch] [rbp-8Ch] BYREF
  _QWORD v18[2]; // [rsp+188h] [rbp+80h] BYREF
  int v19; // [rsp+198h] [rbp+90h]

  v16 = 0;
  v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v15, this, 0x88u, 0LL, 0LL, 0LL);
  v10 = v15;
  if ( (_QWORD)v15 )
  {
    *(_QWORD *)v15 = 0LL;
    *(_DWORD *)(v10 + 20) = 0;
    *(_BYTE *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 12) &= 0x1FFu;
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 17;
    *(struct D3DDDI_MAPGPUVIRTUALADDRESS *)(v10 + 24) = *a6;
    *(_DWORD *)(v10 + 56) = a5;
    *(_DWORD *)(v10 + 24) = a4;
    if ( a3 )
      v12 = *((_DWORD *)a3 + 118);
    else
      v12 = 0;
    *(_DWORD *)(v10 + 128) = v12;
    v14 = 24;
    v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v15, v18, &v14);
    if ( v13 < 0
      || (v13 = -1073741823, v14 < 0x18)
      || (v13 = v19, a6->VirtualAddress = v18[0], a6->PagingFenceValue = v18[1], v13 < 0) )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 12522;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"VmBusSendMapGpuVirtualAddress failed: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v15);
    return (unsigned int)v13;
  }
  else
  {
    if ( *((_QWORD *)&v15 + 1) )
    {
      if ( *((char **)&v15 + 1) != &v17 )
        ExFreePoolWithTag(*((PVOID *)&v15 + 1), 0x4D767844u);
    }
    return 3221225495LL;
  }
}
