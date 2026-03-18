/*
 * XREFs of ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x14022D260
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B601C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1401F4F28 (-SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x14022EE74 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGKEYEDMUTEX *a3,
        int a4)
{
  __int64 v6; // r8
  struct DXGKVMB_COMMAND_BASE *v10; // r9
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  void *v15; // [rsp+20h] [rbp-E0h]
  struct _MDL *v16; // [rsp+30h] [rbp-D0h]
  unsigned int v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+70h] [rbp-90h]
  unsigned int v20; // [rsp+180h] [rbp+80h] BYREF
  int v21; // [rsp+184h] [rbp+84h]

  v6 = *((unsigned int *)a3 + 42);
  if ( (unsigned int)v6 > 0x1FFE0 )
  {
    WdLogSingleEntry1(2LL, v6 + 32);
    v15 = (void *)(*((unsigned int *)a3 + 42) + 32LL);
    WdLogGlobalForLineNumber = 14080;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VM bus message size: 0x%I64x",
      (__int64)v15,
      0LL,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v19 = 0;
  *(_OWORD *)v18 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v18, this, v6 + 32, 0LL, 0LL, 0LL);
  v10 = v18[0];
  if ( v18[0] )
  {
    v12 = *((_DWORD *)a3 + 42);
    v13 = *((_DWORD *)a3 + 8);
    v14 = *((_DWORD *)a2 + 122);
    *(_QWORD *)v18[0] = 0LL;
    *((_DWORD *)v10 + 5) = 0;
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_DWORD *)v10 + 6) = v13;
    *((_DWORD *)v10 + 2) = v14;
    *((_DWORD *)v10 + 4) = 1012;
    *((_DWORD *)v10 + 7) = v12;
    memmove((char *)v10 + 32, *((const void **)a3 + 20), *((unsigned int *)a3 + 42));
    v17[0] = 8;
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v18[1], v18[0], v19, &v20, v17, v16);
    if ( v11 >= 0 )
    {
      if ( v17[0] < 8 )
      {
        v11 = -1073741823;
      }
      else
      {
        v11 = v21;
        if ( v21 >= 0 )
        {
          DXGKEYEDMUTEX::SetHostHandle(a3, a4, v20);
          goto LABEL_11;
        }
      }
    }
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 14118;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmbusSendOpenSyncObject failed: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  v11 = -1073741801;
LABEL_11:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v18);
  return (unsigned int)v11;
}
