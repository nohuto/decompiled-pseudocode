/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x140226E44
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401AF3C8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1400344F4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14003B86C (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r8d
  __int64 AllocationCount; // rdx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v12; // r9
  __int64 v13; // rbx
  UINT v14; // eax
  int v15; // esi
  int *v16; // r15
  D3DKMT_HANDLE hResource; // r8d
  D3DKMT_HANDLE v18; // ecx
  UINT i; // r12d
  unsigned int *v20; // rdx
  unsigned int v21; // r8d
  UINT v22; // ebx
  UINT v23; // r12d
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v25; // rcx
  unsigned int v27; // [rsp+54h] [rbp-1C4h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-1C0h] BYREF
  UINT v29; // [rsp+5Ch] [rbp-1BCh]
  __int64 v30; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-1B0h]
  _QWORD v32[2]; // [rsp+70h] [rbp-1A8h] BYREF
  struct DXGPROCESS *v33; // [rsp+80h] [rbp-198h]
  unsigned __int64 v34; // [rsp+88h] [rbp-190h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v35; // [rsp+90h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v36; // [rsp+98h] [rbp-180h]
  _BYTE v37[32]; // [rsp+A0h] [rbp-178h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-158h] BYREF
  int v39; // [rsp+D0h] [rbp-148h]

  v33 = a2;
  v35 = this;
  v36 = this;
  v7 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 11417LL;
    v10 = L"Invalid resource and allocation count";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v9 = 11424LL;
    }
    else
    {
      if ( (unsigned int)(4 * AllocationCount + 56) >= 0x38 )
      {
        v7 = 4 * AllocationCount + 56;
        goto LABEL_8;
      }
      WdLogSingleEntry0(2LL);
      v9 = 11429LL;
    }
    v10 = L"Math overflow";
    goto LABEL_3;
  }
LABEL_8:
  v38 = 0LL;
  v39 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v38, this, v7, 0LL, 0LL, 0LL);
  v13 = v38;
  if ( !(_QWORD)v38 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11438;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGKVMB_COMMAND_QUERYALLOCATIONRESIDENCY",
      11438LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v38);
    return 3221225495LL;
  }
  *(_QWORD *)v38 = 0LL;
  *(_DWORD *)(v13 + 8) = 0;
  *(_BYTE *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 12) &= 0x1FFu;
  *(_QWORD *)(v13 + 16) = 41LL;
  *(_DWORD *)(v13 + 8) = *((_DWORD *)a2 + 122);
  *(_DWORD *)(v13 + 24) = *((_DWORD *)a3 + 118);
  *(_DWORD *)(v13 + 40) = a5->AllocationCount;
  v14 = 1;
  if ( !a5->hResource )
    v14 = a5->AllocationCount;
  v29 = v14;
  v15 = -1073741811;
  LODWORD(v30) = -1073741811;
  v31 = 4 * v14 + 4;
  v28 = (4 * v14 + 11) & 0xFFFFFFF8;
  v16 = (int *)operator new[](v28, 0x4B677844u, 64LL, v12);
  v32[1] = v16;
  if ( v16 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v37, a2);
    hResource = a5->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v30, hResource);
      if ( !v30 || (v18 = *(_DWORD *)(v30 + 20)) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11469;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid resource handle", 11469LL, 0LL, 0LL, 0LL, 0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v30);
LABEL_22:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37);
        goto LABEL_45;
      }
      a5->hResource = v18;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v30);
    }
    else
    {
      for ( i = 0; i < a5->AllocationCount; ++i )
      {
        v27 = 0;
        v34 = 4LL * i;
        v20 = (unsigned int *)&a5->phAllocationList[v34 / 4];
        if ( a4 )
        {
          if ( (unsigned __int64)v20 >= MmUserProbeAddress )
            v20 = (unsigned int *)MmUserProbeAddress;
          RtlCopyVolatileMemory(&v27, v20, 4uLL);
          v21 = v27;
        }
        else
        {
          v21 = *v20;
          v27 = *v20;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v33, (DXGALLOCATIONREFERENCE *)v32, v21);
        if ( !v32[0] || (*(_BYTE *)(v32[0] + 128LL) & 4) == 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 11502;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Invalid allocation handle",
            11502LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v32);
          goto LABEL_22;
        }
        *(_DWORD *)(v34 + v13 + 56) = *(_DWORD *)(v32[0] + 20LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v32);
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37);
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v35, (struct DXGVMBUSMESSAGE *)&v38, v16, &v28);
    if ( v15 >= 0 )
    {
      v15 = -1073741823;
      if ( v28 >= v31 )
      {
        v15 = *v16;
        if ( *v16 >= 0 )
        {
          v22 = 0;
          v23 = v29;
          while ( v22 < v23 )
          {
            pResidencyStatus = a5->pResidencyStatus;
            if ( a4 )
            {
              v25 = &pResidencyStatus[v22];
              if ( (unsigned __int64)v25 >= MmUserProbeAddress )
                v25 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v25, &v16[v22 + 1], 4uLL);
            }
            else
            {
              pResidencyStatus[v22] = v16[v22 + 1];
            }
            ++v22;
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11457;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate D3DKMT_ALLOCATIONRESIDENCYSTATUS",
      11457LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v15 = -1073741801;
  }
LABEL_45:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 11555;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBusSendQueryAllocationResidency failed: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v38);
  return (unsigned int)v15;
}
