/*
 * XREFs of ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x14040045C
 * Callers:
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14029C930 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
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

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a5,
        const unsigned int *a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  const wchar_t *v10; // r9
  UINT NumAllocations; // eax
  __int64 v12; // r14
  __int64 v13; // rsi
  int *v14; // r14
  UINT i; // r15d
  DXGHANDLETABLELOCKEXCLUSIVE *v16; // rcx
  DXGHANDLETABLELOCKEXCLUSIVE *v17; // rcx
  UINT j; // r15d
  int v19; // eax
  BOOL *pDiscarded; // rcx
  size_t v21; // r8
  struct _EX_RUNDOWN_REF *v23; // [rsp+50h] [rbp-1C8h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-1C0h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-1BCh]
  struct DXGPROCESS *v26; // [rsp+60h] [rbp-1B8h]
  const struct DXGDEVICE *v27; // [rsp+68h] [rbp-1B0h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v28; // [rsp+70h] [rbp-1A8h]
  const struct DXGDEVICE *v29; // [rsp+78h] [rbp-1A0h]
  _BYTE v30[24]; // [rsp+80h] [rbp-198h] BYREF
  _BYTE v31[24]; // [rsp+98h] [rbp-180h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-168h] BYREF
  int v33; // [rsp+C0h] [rbp-158h]

  v23 = a4;
  v27 = a3;
  v26 = a2;
  v28 = this;
  v29 = a3;
  LODWORD(v8) = -1073741811;
  if ( !a4 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 10807LL;
    v10 = L"Paging queue must be present";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v8;
  }
  NumAllocations = a5->NumAllocations;
  if ( NumAllocations > 0x8000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 10812LL;
    v10 = L"NumAllocations is invalid";
    goto LABEL_3;
  }
  v12 = 4 * NumAllocations + 44;
  v25 = v12;
  v24 = (4 * NumAllocations + 51) & 0xFFFFFFF8;
  v32 = 0LL;
  v33 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v32, this, v24 + v12, 0LL, 0LL, 0LL);
  v13 = v32;
  if ( (_QWORD)v32 )
  {
    *(_QWORD *)v32 = 0LL;
    *(_DWORD *)(v13 + 8) = 0;
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 12) &= 0x1FFu;
    *(_QWORD *)(v13 + 16) = 58LL;
    v14 = (int *)(v13 + v12);
    *(_DWORD *)(v13 + 24) = *((_DWORD *)a3 + 118);
    *(_DWORD *)(v13 + 8) = *((_DWORD *)a2 + 122);
    *(_DWORD *)(v13 + 32) = a5->NumAllocations;
    *(_DWORD *)(v13 + 28) = HIDWORD(v23[3].Ptr);
    *(_BYTE *)(v13 + 37) = a5->pDiscarded != 0LL;
    if ( a5->pResources )
    {
      *(_BYTE *)(v13 + 36) = 1;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, a2);
      for ( i = 0; i < a5->NumAllocations; ++i )
      {
        DXGPROCESS::GetResourceUnsafe((__int64)v26, (DXGRESOURCEREFERENCE *)&v23, a6[i]);
        if ( !v23 )
        {
          WdLogSingleEntry3(3LL, v27, a6[i], -1073741811LL);
          WdLogGlobalForLineNumber = 10848;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v23);
          v16 = (DXGHANDLETABLELOCKEXCLUSIVE *)v30;
          goto LABEL_14;
        }
        *(_DWORD *)(v13 + 4LL * i + 40) = HIDWORD(v23[2].Ptr);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v23);
      }
      v17 = (DXGHANDLETABLELOCKEXCLUSIVE *)v30;
LABEL_22:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE(v17);
      v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v28, (struct DXGVMBUSMESSAGE *)&v32, v14, &v24);
      v8 = v19;
      if ( v19 < 0 || v24 > v25 )
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 10876;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VmBusSendOfferAllocations failed: 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( (int)v8 >= 0 )
          LODWORD(v8) = -1073741823;
      }
      else
      {
        v8 = v14[2];
        if ( (int)v8 >= 0 )
        {
          pDiscarded = a5->pDiscarded;
          if ( pDiscarded )
          {
            v21 = a5->NumAllocations;
            if ( (unsigned __int64)&pDiscarded[v21] > MmUserProbeAddress || &pDiscarded[v21] <= pDiscarded )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(pDiscarded, v14 + 3, v21 * 4);
          }
          a5->PagingFenceValue = *(_QWORD *)v14;
        }
        else
        {
          WdLogSingleEntry1(2LL, v14[2]);
          WdLogGlobalForLineNumber = 10886;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"VmBusSendOfferAllocations failed by host: 0x%I64x",
            v8,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
    else
    {
      *(_BYTE *)(v13 + 36) = 0;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, a2);
      for ( j = 0; ; ++j )
      {
        if ( j >= a5->NumAllocations )
        {
          v17 = (DXGHANDLETABLELOCKEXCLUSIVE *)v31;
          goto LABEL_22;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v26, (DXGALLOCATIONREFERENCE *)&v23, a6[j]);
        if ( !v23 )
          break;
        *(_DWORD *)(v13 + 4LL * j + 40) = HIDWORD(v23[2].Ptr);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
      }
      WdLogSingleEntry3(3LL, v27, a6[j], -1073741811LL);
      WdLogGlobalForLineNumber = 10866;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
      v16 = (DXGHANDLETABLELOCKEXCLUSIVE *)v31;
LABEL_14:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE(v16);
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 10824;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate storage for input buffer",
      10824LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
  return (unsigned int)v8;
}
