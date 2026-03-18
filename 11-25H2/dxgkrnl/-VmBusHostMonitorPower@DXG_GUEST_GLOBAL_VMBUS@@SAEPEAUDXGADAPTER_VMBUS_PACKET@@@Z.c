/*
 * XREFs of ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021DC20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401EE5FC (-FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER.c)
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x14027B978 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusHostMonitorPower(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v3; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v5; // rax
  DXGADAPTER *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r8d
  int v9; // edi
  __int64 HighPart; // rdi
  DXGDODPRESENT *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+28h] [rbp-D8h]
  struct _LUID v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+70h] [rbp-90h]
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  v16 = 0LL;
  *(_OWORD *)&v15[0].LowPart = 0LL;
  v17 = *(_QWORD *)(v1 + 24);
  v18 = *(_DWORD *)(v1 + 32);
  Global = DXGGLOBAL::GetGlobal();
  if ( (int)REMOTEMONITORMAPPING::FindMappingFromHostId(
              (struct _KTHREAD **)Global + 38147,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v17,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)v15) >= 0 )
  {
    v3 = DXGGLOBAL::GetGlobal();
    LowPart = v15[0].LowPart;
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(v3, v15[0], &v16);
    v6 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v5, 0LL);
      v9 = COREADAPTERACCESS::AcquireExclusive((__int64)v19, v8 + 1, v8);
      DXGADAPTER::ReleaseReference(v6);
      if ( v9 >= 0 )
      {
        if ( !*((_QWORD *)v6 + 391) )
        {
          v11 = *(DXGDODPRESENT **)(*((_QWORD *)v6 + 390) + 456LL);
          if ( v11 )
            DXGDODPRESENT::NotifyHostMonitorPowerState(v11, v15[1].HighPart, *(_BYTE *)(v1 + 36) & 1);
        }
      }
      else
      {
        HighPart = v15[0].HighPart;
        WdLogSingleEntry2(2LL, v15[0].HighPart, LowPart);
        WdLogGlobalForLineNumber = 14816;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid adapter specified, AdapterLuid = 0x%08I64x%08I64x",
          HighPart,
          LowPart,
          0LL,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
    }
    else
    {
      v7 = v15[0].HighPart;
      WdLogSingleEntry2(2LL, v15[0].HighPart, LowPart);
      WdLogGlobalForLineNumber = 14805;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid adapter specified, GuestAdapterLuid = 0x%08I64x%08I64x",
        v7,
        LowPart,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *(int *)(v1 + 28), *(unsigned int *)(v1 + 24));
    v14 = *(unsigned int *)(v1 + 24);
    v13 = *(int *)(v1 + 28);
    WdLogGlobalForLineNumber = 14795;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Could not find guest adapter info, HostAdapterLuid = 0x%08I64x%08I64x",
      v13,
      v14,
      0LL,
      0LL,
      0LL);
  }
  return 0;
}
