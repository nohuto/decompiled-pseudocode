/*
 * XREFs of ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1402FC710
 * Callers:
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1402FC85C (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401EE930 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGSYNCOBJECT *a3,
        int a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // ebx
  _BYTE *v10; // rsi
  int HostHandle; // edx
  int v13; // eax
  int v14; // eax
  PVOID P[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-148h]
  char v17; // [rsp+44h] [rbp-144h] BYREF

  v5 = 0;
  v16 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x20u, 0LL, 0LL, 0LL);
  v10 = P[0];
  if ( P[0] )
  {
    HostHandle = DXGSYNCOBJECT::GetHostHandle(a3, a4);
    v13 = *((_DWORD *)a2 + 122);
    v10[12] = 0;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = v13;
    *((_QWORD *)v10 + 2) = 46LL;
    *((_DWORD *)v10 + 6) = HostHandle;
    v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v16);
    if ( v14 < 0 )
    {
      if ( v14 == -1071775484 )
        *a5 = 0;
      else
        v5 = v14;
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return v5;
    }
    else
    {
      *a5 = 1;
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return 0LL;
    }
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v17 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
