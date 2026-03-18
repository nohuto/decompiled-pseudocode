/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x14022D730
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401B1978 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140034428 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140039E2C (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
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
  __int64 v12; // rbx
  UINT v13; // eax
  int v14; // esi
  int *v15; // r15
  D3DKMT_HANDLE hResource; // r8d
  D3DKMT_HANDLE v17; // ecx
  UINT i; // r12d
  unsigned int *v19; // rdx
  unsigned int v20; // r8d
  UINT v21; // ebx
  UINT v22; // r12d
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v24; // rcx
  unsigned int v26; // [rsp+54h] [rbp-1C4h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-1C0h] BYREF
  UINT v28; // [rsp+5Ch] [rbp-1BCh]
  __int64 v29; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-1B0h]
  _QWORD v31[2]; // [rsp+70h] [rbp-1A8h] BYREF
  struct DXGPROCESS *v32; // [rsp+80h] [rbp-198h]
  unsigned __int64 v33; // [rsp+88h] [rbp-190h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v34; // [rsp+90h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v35; // [rsp+98h] [rbp-180h]
  _BYTE v36[32]; // [rsp+A0h] [rbp-178h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-158h] BYREF
  int v38; // [rsp+D0h] [rbp-148h]

  v32 = a2;
  v34 = this;
  v35 = this;
  v7 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 11605LL;
    v10 = L"Invalid resource and allocation count";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v9 = 11612LL;
    }
    else
    {
      if ( (unsigned int)(4 * AllocationCount + 56) >= 0x38 )
      {
        v7 = 4 * AllocationCount + 56;
        goto LABEL_8;
      }
      WdLogSingleEntry0(2LL);
      v9 = 11617LL;
    }
    v10 = L"Math overflow";
    goto LABEL_3;
  }
LABEL_8:
  v37 = 0LL;
  v38 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v37, this, v7, 0LL, 0LL, 0LL);
  v12 = v37;
  if ( !(_QWORD)v37 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11626;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGKVMB_COMMAND_QUERYALLOCATIONRESIDENCY",
      11626LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v37);
    return 3221225495LL;
  }
  *(_QWORD *)v37 = 0LL;
  *(_DWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 12) = 0;
  *(_DWORD *)(v12 + 12) &= 0x1FFu;
  *(_QWORD *)(v12 + 16) = 41LL;
  *(_DWORD *)(v12 + 8) = *((_DWORD *)a2 + 122);
  *(_DWORD *)(v12 + 24) = *((_DWORD *)a3 + 118);
  *(_DWORD *)(v12 + 40) = a5->AllocationCount;
  v13 = 1;
  if ( !a5->hResource )
    v13 = a5->AllocationCount;
  v28 = v13;
  v14 = -1073741811;
  LODWORD(v29) = -1073741811;
  v30 = 4 * v13 + 4;
  v27 = (4 * v13 + 11) & 0xFFFFFFF8;
  v15 = (int *)operator new[](v27, 0x4B677844u, 64LL);
  v31[1] = v15;
  if ( v15 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, a2);
    hResource = a5->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v29, hResource);
      if ( !v29 || (v17 = *(_DWORD *)(v29 + 20)) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11657;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid resource handle",
          11657LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v29);
LABEL_22:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
        goto LABEL_45;
      }
      a5->hResource = v17;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v29);
    }
    else
    {
      for ( i = 0; i < a5->AllocationCount; ++i )
      {
        v26 = 0;
        v33 = 4LL * i;
        v19 = (unsigned int *)&a5->phAllocationList[v33 / 4];
        if ( a4 )
        {
          if ( (unsigned __int64)v19 >= MmUserProbeAddress )
            v19 = (unsigned int *)MmUserProbeAddress;
          RtlCopyVolatileMemory(&v26, v19, 4uLL);
          v20 = v26;
        }
        else
        {
          v20 = *v19;
          v26 = *v19;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v32, (DXGALLOCATIONREFERENCE *)v31, v20);
        if ( !v31[0] || (*(_BYTE *)(v31[0] + 128LL) & 4) == 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 11690;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid allocation handle",
            11690LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v31);
          goto LABEL_22;
        }
        *(_DWORD *)(v33 + v12 + 56) = *(_DWORD *)(v31[0] + 20LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v31);
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v34, (struct DXGVMBUSMESSAGE *)&v37, v15, &v27);
    if ( v14 >= 0 )
    {
      v14 = -1073741823;
      if ( v27 >= v30 )
      {
        v14 = *v15;
        if ( *v15 >= 0 )
        {
          v21 = 0;
          v22 = v28;
          while ( v21 < v22 )
          {
            pResidencyStatus = a5->pResidencyStatus;
            if ( a4 )
            {
              v24 = &pResidencyStatus[v21];
              if ( (unsigned __int64)v24 >= MmUserProbeAddress )
                v24 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v24, &v15[v21 + 1], 4uLL);
            }
            else
            {
              pResidencyStatus[v21] = v15[v21 + 1];
            }
            ++v21;
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11645;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate D3DKMT_ALLOCATIONRESIDENCYSTATUS",
      11645LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741801;
  }
LABEL_45:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 11743;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSendQueryAllocationResidency failed: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v37);
  return (unsigned int)v14;
}
