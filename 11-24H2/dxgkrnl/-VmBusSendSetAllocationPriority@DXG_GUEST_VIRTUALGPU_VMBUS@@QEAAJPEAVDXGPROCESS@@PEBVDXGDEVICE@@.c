/*
 * XREFs of ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x14022E05C
 * Callers:
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x140329CF8 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140034428 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140039E2C (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_SETALLOCATIONPRIORITY *a4)
{
  int v6; // ebx
  int v7; // esi
  size_t v8; // r15
  UINT AllocationCount; // eax
  unsigned int v11; // r12d
  struct DXGKVMB_COMMAND_BASE *v12; // rsi
  int v13; // eax
  char *v14; // r13
  D3DKMT_HANDLE hResource; // r8d
  const UINT *pPriorities; // rdx
  ULONG64 v17; // rcx
  const D3DKMT_HANDLE *phAllocationList; // rdx
  __int64 i; // rsi
  const struct DXGDEVICE *v20; // [rsp+30h] [rbp-198h] BYREF
  __int64 v21; // [rsp+38h] [rbp-190h] BYREF
  struct DXGPROCESS *v22; // [rsp+40h] [rbp-188h]
  struct DXG_VMBUS_CHANNEL_BASE *v23; // [rsp+48h] [rbp-180h]
  void *v24; // [rsp+50h] [rbp-178h]
  _BYTE v25[24]; // [rsp+58h] [rbp-170h] BYREF
  struct DXGKVMB_COMMAND_BASE *v26[2]; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-148h]

  v20 = a3;
  v22 = a2;
  v23 = this;
  v6 = -1073741811;
  v7 = 40;
  v8 = 0LL;
  *(_OWORD *)v26 = 0LL;
  v27 = 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) <= 0x10u )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v26);
    return 0LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v11 = 1;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_27;
      v8 = AllocationCount;
      v7 = v8 * 4 + 40;
      v11 = AllocationCount;
    }
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v26, v23, v11 * 4 + v7, 0LL, 0LL, 0LL);
    v12 = v26[0];
    if ( !v26[0] )
    {
      v6 = -1073741801;
LABEL_28:
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 11012;
      goto LABEL_29;
    }
    v13 = *((_DWORD *)a2 + 122);
    *(_QWORD *)v26[0] = 0LL;
    *((_DWORD *)v12 + 2) = v13;
    *((_BYTE *)v12 + 12) = 0;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *((_DWORD *)v12 + 4) = 59;
    *((_DWORD *)v12 + 5) = 0;
    *((_DWORD *)v12 + 6) = *((_DWORD *)v20 + 118);
    *((_DWORD *)v12 + 8) = a4->AllocationCount;
    v14 = (char *)v12 + 40;
    v24 = (char *)v12 + v8 * 4 + 40;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v25, v22);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)v22, (DXGRESOURCEREFERENCE *)&v21, hResource);
      if ( !v21 )
      {
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v21);
LABEL_13:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
        goto LABEL_27;
      }
      *((_DWORD *)v12 + 7) = *(_DWORD *)(v21 + 20);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v21);
    }
    else
    {
      phAllocationList = a4->phAllocationList;
      if ( &phAllocationList[v8] < phAllocationList || (unsigned __int64)&phAllocationList[v8] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v12 + 40, phAllocationList, v8 * 4);
      for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
      {
        DXGPROCESS::GetAllocationUnsafe((__int64)v22, (DXGALLOCATIONREFERENCE *)&v20, *(_DWORD *)&v14[4 * i]);
        if ( !v20 )
        {
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20);
          goto LABEL_13;
        }
        *(_DWORD *)&v14[4 * i] = *((_DWORD *)v20 + 5);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20);
      }
    }
    pPriorities = a4->pPriorities;
    v17 = (ULONG64)&pPriorities[v11];
    if ( v17 < (unsigned __int64)pPriorities || v17 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, pPriorities, v11 * 4);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
    v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v23, (unsigned __int8 *)v26[1], v26[0], v27);
  }
LABEL_27:
  if ( v6 < 0 )
    goto LABEL_28;
LABEL_29:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v26);
  return (unsigned int)v6;
}
