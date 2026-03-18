/*
 * XREFs of ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x140409C60
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_RENDER *a4)
{
  struct DXG_VMBUS_CHANNEL_BASE *v4; // r15
  UINT CommandLength; // ecx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  UINT AllocationCount; // eax
  size_t v13; // rbx
  struct DXGKVMB_COMMAND_BASE *v14; // r14
  __int64 v15; // rsi
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdx
  int v17; // r12d
  struct _EX_RUNDOWN_REF *v18; // r15
  D3DKMT_HANDLE hAllocation; // r14d
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  struct _EX_RUNDOWN_REF *v23; // rdx
  int v24; // eax
  struct _EX_RUNDOWN_REF *v25; // [rsp+50h] [rbp-178h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v26; // [rsp+58h] [rbp-170h]
  struct DXGKVMB_COMMAND_BASE *v27[2]; // [rsp+60h] [rbp-168h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-158h]

  v4 = this;
  v26 = this;
  CommandLength = a4->CommandLength;
  if ( CommandLength > 0x20000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 11319LL;
    v10 = L"CommandLength is invalid";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount > 0x4000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 11324LL;
    v10 = L"AllocationCount is invalid";
    goto LABEL_3;
  }
  v13 = 8 * AllocationCount;
  *(_OWORD *)v27 = 0LL;
  v28 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v27, v4, v13 + CommandLength + 56, 0LL, 0LL, 0LL);
  v14 = v27[0];
  if ( v27[0] )
  {
    *((_BYTE *)v27[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *((_DWORD *)v14 + 2) = 0;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 2) = 40LL;
    *((_DWORD *)v14 + 2) = *((_DWORD *)a2 + 122);
    *((_DWORD *)v14 + 8) = a4->AllocationCount;
    *((_DWORD *)v14 + 7) = a4->CommandLength;
    *((_QWORD *)v14 + 5) = a4->pNewCommandBuffer;
    *((_DWORD *)v14 + 12) = a4->Flags;
    *((_DWORD *)v14 + 6) = *((_DWORD *)a3 + 7);
    pNewAllocationList = a4->pNewAllocationList;
    v25 = (struct _EX_RUNDOWN_REF *)((char *)v14 + 56);
    memmove((char *)v14 + 56, pNewAllocationList, v13);
    memmove((char *)v14 + v13 + 56, a4->pNewCommandBuffer, a4->CommandLength);
    v17 = 0;
    if ( !a4->AllocationCount )
    {
LABEL_19:
      v24 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v4, (unsigned __int8 *)v27[1], v27[0], v28);
      v15 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry1(2LL, v24);
        WdLogGlobalForLineNumber = 11355;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"VmBusSendCddGdiCommand failed: 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_21;
    }
    v18 = v25;
    while ( 1 )
    {
      hAllocation = a4->pNewAllocationList[v17].hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
      v20 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 < *((_DWORD *)a2 + 74) )
      {
        v21 = *((_QWORD *)a2 + 35);
        v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
          && (v22 & 0x2000) == 0
          && (v22 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v21 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
          {
            v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF));
            goto LABEL_17;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v23 = 0LL;
LABEL_17:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v25, v23);
      _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
      ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      LODWORD(v18[v17].Count) = HIDWORD(v25[2].Ptr);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
      if ( ++v17 >= a4->AllocationCount )
      {
        v4 = v26;
        goto LABEL_19;
      }
    }
  }
  LODWORD(v15) = -1073741801;
LABEL_21:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v27);
  return (unsigned int)v15;
}
