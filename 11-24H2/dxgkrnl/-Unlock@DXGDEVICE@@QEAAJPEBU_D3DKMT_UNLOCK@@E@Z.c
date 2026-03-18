/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4
 * Callers:
 *     DxgkUnlock @ 0x1402A90D0 (DxgkUnlock.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1402A9490 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402A9884 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F72C8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     DxgkLock @ 0x140365AD0 (DxgkLock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140040510 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401DD13C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1403FAE8C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, char a3)
{
  __int64 NumAllocations; // rcx
  _DWORD *phAllocations; // rdx
  int v7; // r13d
  UINT v8; // r12d
  const D3DKMT_HANDLE *v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  struct DXGALLOCATION *v12; // rax
  DXGDEVICE *v13; // r9
  int v14; // eax
  int v15; // r14d
  unsigned int v17; // r14d
  __int64 v18; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v20; // r14d
  __int64 v21; // r13
  struct DXGALLOCATION *DisplayedPrimary; // rcx
  unsigned int v23; // [rsp+50h] [rbp-58h] BYREF
  int v24; // [rsp+54h] [rbp-54h]
  struct DXGALLOCATION *v25; // [rsp+58h] [rbp-50h] BYREF
  struct _D3DKMT_UNLOCK2 v26; // [rsp+60h] [rbp-48h] BYREF
  char v27; // [rsp+C0h] [rbp+18h]
  unsigned int v28; // [rsp+C8h] [rbp+20h]

  v27 = a3;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 258;
    return 3221225485LL;
  }
  phAllocations = a2->phAllocations;
  if ( !phAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 267;
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v24 = v7;
      if ( v8 >= a2->NumAllocations )
        return (unsigned int)v7;
      v23 = 0;
      if ( a3 )
      {
        v9 = &a2->phAllocations[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        RtlCopyVolatileMemory(&v23, v9, 4uLL);
        v10 = v23;
      }
      else
      {
        v10 = a2->phAllocations[v8];
        v23 = v10;
      }
      v11 = v10 & 0x3F;
      v28 = v11;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v25, v10);
      v12 = v25;
      if ( !v25 )
      {
        WdLogSingleEntry3(3LL, this, v23, -1073741811LL);
        WdLogGlobalForLineNumber = 346;
LABEL_22:
        v15 = -1073741811;
        goto LABEL_16;
      }
      if ( !*((_QWORD *)v25 + 3) )
      {
        WdLogSingleEntry4(3LL, this, v23, v25, -1073741811LL);
        WdLogGlobalForLineNumber = 356;
        goto LABEL_22;
      }
      if ( !*((_DWORD *)this + 116) )
        break;
LABEL_13:
      v13 = (DXGDEVICE *)*((_QWORD *)v12 + 1);
      if ( v13 != this )
      {
        WdLogSingleEntry4(3LL, v12, this, v13, -1073741811LL);
        WdLogGlobalForLineNumber = 391;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v25);
        return 3221225485LL;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 248LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              *((_QWORD *)v12 + 3),
              v11,
              0LL);
      v15 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry4(3LL, this, v23, v25, v14);
        WdLogGlobalForLineNumber = 407;
      }
LABEL_16:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v25);
      ++v8;
      if ( v7 < 0 )
        v15 = v7;
      v7 = v15;
      a3 = v27;
    }
    v17 = *(_DWORD *)(*((_QWORD *)v25 + 6) + 4LL);
    if ( (v17 & 4) == 0 || !v27 )
    {
LABEL_26:
      v11 = v28;
      goto LABEL_13;
    }
    v20 = (v17 >> 6) & 0xF;
    v21 = *((_QWORD *)this + 237);
    if ( v21 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 237)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 374;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsCoreResourceSharedOwner()",
          374LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + 152) != 1
        || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v21 + 3120), this, v20) )
      {
        goto LABEL_46;
      }
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v20);
      v12 = v25;
      if ( DisplayedPrimary == v25 )
      {
        DXGDEVICE::UpdateDodFrontBuffer((ADAPTER_RENDER **)this, v25);
LABEL_46:
        v12 = v25;
      }
    }
    v7 = v24;
    goto LABEL_26;
  }
  if ( (_DWORD)NumAllocations != 1 )
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 278;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: NumAllocations must be 1, returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v26 = 0LL;
  if ( a3 )
  {
    if ( (unsigned __int64)phAllocations >= MmUserProbeAddress )
      phAllocations = (_DWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v26.hAllocation, phAllocations, 4uLL);
  }
  else
  {
    v26.hAllocation = *phAllocations;
  }
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  Current = DXGPROCESS::GetCurrent(NumAllocations);
  return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v18 + 4664),
           Current,
           this,
           &v26,
           1u);
}
