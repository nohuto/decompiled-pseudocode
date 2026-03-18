/*
 * XREFs of ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x14022B200
 * Callers:
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1401B1330 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140034428 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140039E2C (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        struct _D3DKMT_GETALLOCATIONPRIORITY *a4)
{
  int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  UINT AllocationCount; // eax
  unsigned int v11; // r13d
  __int64 v12; // rbx
  int *v13; // r12
  struct DXGPROCESS *v14; // r15
  int v15; // eax
  D3DKMT_HANDLE hResource; // r8d
  __int64 v17; // r15
  const D3DKMT_HANDLE *phAllocationList; // rdx
  __int64 i; // rbx
  UINT *pPriorities; // rcx
  ULONG64 v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-198h] BYREF
  struct DXGPROCESS *v23; // [rsp+38h] [rbp-190h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-188h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-184h] BYREF
  const struct DXGDEVICE *v26; // [rsp+48h] [rbp-180h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v27; // [rsp+50h] [rbp-178h]
  _BYTE v28[24]; // [rsp+58h] [rbp-170h] BYREF
  __int128 v29; // [rsp+70h] [rbp-158h] BYREF
  int v30; // [rsp+80h] [rbp-148h]

  v26 = a3;
  v23 = a2;
  v27 = this;
  v6 = -1073741811;
  v7 = 40;
  v24 = 40;
  v8 = 0LL;
  v25 = 0;
  v29 = 0LL;
  v30 = 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) <= 0x10u )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v29);
    return 0LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v11 = 4;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_31;
      v8 = AllocationCount;
      v7 = v8 * 4 + 40;
      v24 = v8 * 4 + 40;
      v11 = 4 * AllocationCount;
    }
    v22 = v11 + 4;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v29, this, v7, &v24, &v22, &v25);
    v12 = v29;
    if ( !(_QWORD)v29 )
    {
      v6 = -1073741801;
LABEL_32:
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 11131;
      goto LABEL_33;
    }
    v13 = (int *)(v29 + v25);
    v14 = v23;
    v15 = *((_DWORD *)v23 + 122);
    *(_QWORD *)v29 = 0LL;
    *(_DWORD *)(v12 + 8) = v15;
    *(_BYTE *)(v12 + 12) = 0;
    *(_DWORD *)(v12 + 12) &= 0x1FFu;
    *(_DWORD *)(v12 + 16) = 60;
    *(_DWORD *)(v12 + 20) = 0;
    *(_DWORD *)(v12 + 24) = *((_DWORD *)v26 + 118);
    *(_DWORD *)(v12 + 32) = a4->AllocationCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, v14);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)v14, (DXGRESOURCEREFERENCE *)&v23, hResource);
      if ( !v23 )
      {
        v6 = -1073741811;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
LABEL_13:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28);
        goto LABEL_31;
      }
      *(_DWORD *)(v12 + 28) = *((_DWORD *)v23 + 5);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
    }
    else
    {
      v17 = v12 + 40;
      phAllocationList = a4->phAllocationList;
      if ( &phAllocationList[v8] < phAllocationList || (unsigned __int64)&phAllocationList[v8] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((void *)(v12 + 40), phAllocationList, (unsigned int)(v8 * 4));
      for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
      {
        DXGPROCESS::GetAllocationUnsafe((__int64)v23, (DXGALLOCATIONREFERENCE *)&v26, *(_DWORD *)(v17 + 4 * i));
        if ( !v26 )
        {
          v6 = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26);
          goto LABEL_13;
        }
        *(_DWORD *)(v17 + 4 * i) = *((_DWORD *)v26 + 5);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26);
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28);
    v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v27, (struct DXGVMBUSMESSAGE *)&v29, v13, &v22);
    if ( v6 >= 0 )
    {
      if ( v11 + 4 > v22 )
      {
        v6 = -1073741811;
        goto LABEL_32;
      }
      v6 = *v13;
      if ( *v13 < 0 )
        goto LABEL_32;
      pPriorities = a4->pPriorities;
      v21 = (ULONG64)&pPriorities[v11 / 4];
      if ( v21 > MmUserProbeAddress || v21 <= (unsigned __int64)pPriorities )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pPriorities, v13 + 1, v11);
    }
  }
LABEL_31:
  if ( v6 < 0 )
    goto LABEL_32;
LABEL_33:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v29);
  return (unsigned int)v6;
}
