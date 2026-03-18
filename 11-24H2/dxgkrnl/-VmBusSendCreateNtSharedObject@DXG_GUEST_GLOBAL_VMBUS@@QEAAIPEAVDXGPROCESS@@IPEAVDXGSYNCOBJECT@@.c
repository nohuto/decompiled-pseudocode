/*
 * XREFs of ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x140229844
 * Callers:
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403289FC (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14032B210 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401F453C (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x14022EE74 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        struct DXGSYNCOBJECT *a4,
        struct DXGDEVICESYNCOBJECT *a5,
        struct DXGRESOURCE *a6)
{
  unsigned int v6; // edi
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  int HostProcess; // eax
  int HostHandle; // eax
  int v13; // eax
  __int64 v14; // rbx
  struct _MDL *v16; // [rsp+30h] [rbp-D0h]
  DXGPROCESS *v17; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+70h] [rbp-90h]
  unsigned int v20; // [rsp+180h] [rbp+80h] BYREF

  v6 = 0;
  v17 = a2;
  if ( !a4 && !a5 && !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13942;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pSyncObject || pDeviceSyncObject || pResource",
      13942LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = 0;
  *(_OWORD *)v18 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v18, this, 0x20u, 0LL, 0LL, 0LL);
  v10 = v18[0];
  if ( v18[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(v17);
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = HostProcess;
    *((_QWORD *)v10 + 2) = 1004LL;
    if ( a6 )
    {
      HostHandle = *((_DWORD *)a6 + 5);
    }
    else if ( a5 )
    {
      HostHandle = *((_DWORD *)a5 + 11);
    }
    else
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(a4, a3);
    }
    *((_DWORD *)v10 + 6) = HostHandle;
    LODWORD(v17) = 8;
    v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            this,
            (unsigned __int8 *)v18[1],
            v18[0],
            v19,
            &v20,
            (unsigned int *)&v17,
            v16);
    if ( v13 < 0 || (v13 = -1073741823, (unsigned int)v17 < 4) )
    {
      v14 = v13;
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 13962;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendCreateNtSharedObject failed: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v6 = v20;
    }
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v18);
  return v6;
}
