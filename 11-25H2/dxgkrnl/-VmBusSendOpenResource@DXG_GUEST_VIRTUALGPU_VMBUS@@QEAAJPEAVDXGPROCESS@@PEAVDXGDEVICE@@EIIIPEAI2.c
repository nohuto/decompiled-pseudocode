/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1402F91F8
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140361554 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int *v9; // rbx
  _DWORD *v14; // rdi
  __int64 v16; // r9
  int v17; // edi
  unsigned int *v18; // rax
  unsigned int *v19; // rsi
  __int64 v20; // rdx
  unsigned int v21[4]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+70h] [rbp-90h]
  char v24; // [rsp+74h] [rbp-8Ch] BYREF

  v9 = a9;
  v23 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x30u, 0LL, 0LL, 0LL);
  v14 = P[0];
  if ( P[0] )
  {
    v14[2] = DXGPROCESS::GetHostProcess(a2);
    *((_BYTE *)v14 + 12) = 0;
    v14[3] &= 0x1FFu;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 2) = 32LL;
    v14[6] = *((_DWORD *)a3 + 118);
    v14[8] = a5;
    v14[10] = a7;
    *((_BYTE *)v14 + 28) = a4;
    v14[9] = a6;
    if ( a6 < 0x8000 )
    {
      v18 = (unsigned int *)operator new[]((4 * a6 + 15) & 0xFFFFFFF8, 0x4B677844u, 64LL, v16);
      v19 = v18;
      if ( v18 )
      {
        v21[0] = (4 * a6 + 15) & 0xFFFFFFF8;
        v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v18, v21);
        if ( v17 < 0 || (v17 = -1073741823, v21[0] < ((4 * a6 + 15) & 0xFFFFFFF8)) || (v17 = v19[1], v17 < 0) )
        {
          WdLogSingleEntry1(2LL, v17);
          WdLogGlobalForLineNumber = 10462;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"VmBusSendOpenResource failed: 0x%I64x",
            v17,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *a8 = *v19;
          if ( a6 )
          {
            v20 = a6;
            do
            {
              *v9 = *(unsigned int *)((char *)v9 + (char *)(v19 + 2) - (char *)a9);
              ++v9;
              --v20;
            }
            while ( v20 );
          }
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19);
      }
      else
      {
        v17 = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10428;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"NumAllocatoins is invalid", 10428LL, 0LL, 0LL, 0LL, 0LL);
      v17 = -1073741811;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v17;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v24 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
