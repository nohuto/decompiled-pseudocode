/*
 * XREFs of ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140226974
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1401EECCC (-SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
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
  __int64 v15; // r9
  void *v16; // [rsp+20h] [rbp-E0h]
  struct _MDL *v17; // [rsp+30h] [rbp-D0h]
  unsigned int v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v20; // [rsp+70h] [rbp-90h]
  unsigned int v21; // [rsp+180h] [rbp+80h] BYREF
  int v22; // [rsp+184h] [rbp+84h]

  v6 = *((unsigned int *)a3 + 42);
  if ( (unsigned int)v6 > 0x1FFE0 )
  {
    WdLogSingleEntry1(2LL, v6 + 32);
    v16 = (void *)(*((unsigned int *)a3 + 42) + 32LL);
    WdLogGlobalForLineNumber = 13892;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid VM bus message size: 0x%I64x",
      (__int64)v16,
      0LL,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v20 = 0;
  *(_OWORD *)v19 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v19, this, v6 + 32, 0LL, 0LL, 0LL);
  v10 = v19[0];
  if ( v19[0] )
  {
    v12 = *((_DWORD *)a3 + 42);
    v13 = *((_DWORD *)a3 + 8);
    v14 = *((_DWORD *)a2 + 122);
    *(_QWORD *)v19[0] = 0LL;
    *((_DWORD *)v10 + 5) = 0;
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_DWORD *)v10 + 6) = v13;
    *((_DWORD *)v10 + 2) = v14;
    *((_DWORD *)v10 + 4) = 1012;
    *((_DWORD *)v10 + 7) = v12;
    memmove((char *)v10 + 32, *((const void **)a3 + 20), *((unsigned int *)a3 + 42));
    v18[0] = 8;
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v19[1], v19[0], v20, &v21, v18, v17);
    if ( v11 >= 0 )
    {
      if ( v18[0] < 8 )
      {
        v11 = -1073741823;
      }
      else
      {
        v11 = v22;
        if ( v22 >= 0 )
        {
          DXGKEYEDMUTEX::SetHostHandle(a3, a4, v21, v15);
          goto LABEL_11;
        }
      }
    }
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 13930;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v19);
  return (unsigned int)v11;
}
