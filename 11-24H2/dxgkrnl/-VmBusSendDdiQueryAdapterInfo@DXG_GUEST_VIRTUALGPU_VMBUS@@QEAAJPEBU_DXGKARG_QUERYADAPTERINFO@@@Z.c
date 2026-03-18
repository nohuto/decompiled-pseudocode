/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403DEE84
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  UINT OutputDataSize; // edi
  unsigned int v5; // edx
  unsigned int v6; // eax
  UINT InputDataSize; // ebx
  __int64 v8; // rbx
  _DWORD *v9; // r14
  _DWORD *v11; // rbx
  int v12; // ebp
  unsigned int v13[4]; // [rsp+30h] [rbp-158h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-148h] BYREF
  int v15; // [rsp+50h] [rbp-138h]
  char v16; // [rsp+54h] [rbp-134h] BYREF

  OutputDataSize = a2->OutputDataSize;
  v5 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 434);
  if ( a2->Type == DXGKQAITYPE_DRIVERCAPS )
  {
    v6 = v5 < 0x28 ? 584 : 592;
  }
  else
  {
    if ( a2->Type != DXGKQAITYPE_PHYSICALADAPTERCAPS )
      goto LABEL_7;
    v6 = v5 < 0x1B ? 24 : 32;
  }
  if ( v6 < OutputDataSize )
    OutputDataSize = v6;
LABEL_7:
  InputDataSize = a2->InputDataSize;
  v15 = 0;
  v8 = InputDataSize + 40;
  v13[0] = (OutputDataSize + 7) & 0xFFFFFFF8;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, v13[0] + v8, 0LL, 0LL, 0LL);
  v9 = P[0];
  if ( P[0] )
  {
    *(_QWORD *)P[0] = 0LL;
    v9[2] = 0;
    v9[5] = 0;
    *((_BYTE *)v9 + 12) = 0;
    v9[3] &= 0x1FFu;
    v9[4] = 3;
    v9[6] = a2->Type;
    v9[7] = a2->InputDataSize;
    v9[8] = OutputDataSize;
    memmove(v9 + 9, a2->pInputData, a2->InputDataSize);
    v11 = (_DWORD *)((char *)v9 + v8);
    v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v11, v13);
    if ( v12 >= 0 )
    {
      if ( v13[0] >= OutputDataSize )
      {
        switch ( v9[6] )
        {
          case 1:
            v11[12] &= 0x3Fu;
            v11[13] &= ~0x80000000;
            v11[15] &= 0x7Fu;
            v11[16] &= 0x1FFFu;
            v11[17] &= 0x3FFFFu;
            v11[144] &= 0x1FFu;
            if ( (int)v11[84] > 12800 )
              v11[84] = 12800;
            break;
          case 0xD:
            *v11 &= 0x1FFFu;
            v11[5] &= 1u;
            break;
          case 0xF:
            v11[4] &= 0x1FFu;
            break;
        }
        if ( OutputDataSize >= a2->OutputDataSize )
          OutputDataSize = a2->OutputDataSize;
        memmove(a2->pOutputData, v11, OutputDataSize);
      }
      else
      {
        v12 = -1073741823;
      }
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v12;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v16 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
