/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1403DF520
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1401F501C (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x14021E454 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x14022EE74 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a8)
{
  struct DXGKVMB_COMMAND_BASE *v12; // rcx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v20[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+78h] [rbp-90h]
  char v22; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v23; // [rsp+188h] [rbp+80h] BYREF
  int v24; // [rsp+18Ch] [rbp+84h]
  __int64 v25; // [rsp+190h] [rbp+88h]
  unsigned __int64 v26; // [rsp+198h] [rbp+90h]

  v21 = 0;
  *(_OWORD *)v20 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v20, this, 0x28u, 0LL, 0LL, 0LL);
  v12 = v20[0];
  if ( v20[0] )
  {
    v14 = *((_DWORD *)a5 + 21);
    if ( a3 )
      v15 = *((_DWORD *)a3 + 118);
    else
      v15 = 0;
    *((_DWORD *)v20[0] + 2) = *((_DWORD *)a2 + 122);
    *((_DWORD *)v12 + 8) = a7;
    *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v12 + 9) = a8;
    *((_BYTE *)v12 + 12) = 1;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 2) = 1002LL;
    *((_DWORD *)v12 + 6) = v15;
    *((_DWORD *)v12 + 7) = v14;
    v19 = 24;
    LODWORD(v16) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                     (struct _KTHREAD **)this,
                     (unsigned __int8 *)v20[1],
                     v20[0],
                     v21,
                     (char *)&v23,
                     &v19);
    if ( (int)v16 >= 0 )
    {
      if ( v19 < 0x18 )
      {
        LODWORD(v16) = -1073741823;
      }
      else
      {
        LODWORD(v16) = v24;
        if ( v24 >= 0 )
        {
          if ( a6 )
          {
            v17 = v26;
            *((_DWORD *)a6 + 11) = v23;
            *((_QWORD *)a6 + 6) = v25;
            v18 = MapGuestFenceCpuVaToHost(v17, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
            v16 = v18;
            if ( v18 < 0 )
            {
              WdLogSingleEntry1(2LL, v18);
              WdLogGlobalForLineNumber = 14045;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"MapCpuVaForParavirtualization failed: 0x%I64x",
                v16,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else
          {
            DXGSYNCOBJECT::SetHostHandle(a5, a4, v23);
          }
          goto LABEL_18;
        }
      }
    }
    WdLogSingleEntry1(2LL, (int)v16);
    WdLogGlobalForLineNumber = 14055;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmbusSendOpenSyncObject failed: 0x%I64x",
      (int)v16,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v20);
    return (unsigned int)v16;
  }
  if ( v20[1] )
  {
    if ( (char *)v20[1] != &v22 )
      ExFreePoolWithTag(v20[1], 0x4D767844u);
  }
  return 3221225495LL;
}
