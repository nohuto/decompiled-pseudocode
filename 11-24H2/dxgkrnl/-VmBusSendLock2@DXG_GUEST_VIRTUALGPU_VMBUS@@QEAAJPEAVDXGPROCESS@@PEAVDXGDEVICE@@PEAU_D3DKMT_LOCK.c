/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1403FB920
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     DxgkLock2Internal @ 0x1402A3F00 (DxgkLock2Internal.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403F9C8C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035BD0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401B1E58 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  volatile signed __int32 *v6; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  struct DXGALLOCATION *v15; // rbx
  int v17; // edi
  PVOID v18; // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  int HostProcess; // eax
  int v24; // eax
  struct _MDL *v25; // r14
  __int64 v26; // r13
  unsigned int v27; // edi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v29; // eax
  __int64 v30; // rbx
  const wchar_t *v31; // r9
  PMDL Mdl; // rax
  struct _MDL *v33; // rdx
  struct _MDL *v34; // rcx
  __int64 v35; // r8
  struct _MDL *v36; // rax
  NTSTATUS v37; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v38; // rax
  ULONG Length[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID VirtualAddress; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+64h] [rbp-9Ch] BYREF
  struct DXGALLOCATION *v43; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  _BYTE v46[24]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v47[24]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+1D0h] [rbp+D0h] BYREF
  int v51; // [rsp+1E0h] [rbp+E0h]
  int v52; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned __int64 v53; // [rsp+2F8h] [rbp+1F8h]
  char v54[16]; // [rsp+300h] [rbp+200h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (volatile signed __int32 *)((char *)a2 + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)a2 + 74) )
    goto LABEL_7;
  v12 = *((_QWORD *)a2 + 35);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_7;
  if ( v13 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v43, v14);
  _InterlockedDecrement(v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v15 = v43;
  v44 = (struct _EX_RUNDOWN_REF *)v43;
  v43 = 0LL;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v43);
  if ( !v15 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11151;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
    return -1073741811LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
  {
    v17 = -1073741811;
    WdLogSingleEntry3(2LL, a3, v15, -1073741811LL);
    WdLogGlobalForLineNumber = 11159;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)a3,
      (__int64)v15,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_61;
  }
  *(_QWORD *)Length = *((unsigned int *)v15 + 30);
  if ( !*((_QWORD *)v15 + 13) )
  {
    v45 = *((_QWORD *)v15 + 6);
    v50 = 0LL;
    v51 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v50, this, 0x40u, 0LL, 0LL, 0LL);
    v22 = v50;
    if ( !(_QWORD)v50 )
    {
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v50);
      v17 = -1073741801;
      goto LABEL_61;
    }
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_BYTE *)(v22 + 12) = 0;
    *(_DWORD *)(v22 + 12) &= 0x1FFu;
    *(_QWORD *)v22 = 0LL;
    *(_DWORD *)(v22 + 8) = HostProcess;
    *(_QWORD *)(v22 + 16) = 23LL;
    *(_BYTE *)(v22 + 48) = 0;
    *(_QWORD *)(v22 + 52) = 0LL;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v47, a2);
    *(_DWORD *)(v22 + 28) = *((_DWORD *)v15 + 5);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    v24 = *((_DWORD *)a3 + 118);
    v25 = 0LL;
    *(_DWORD *)(v22 + 24) = v24;
    *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v22 + 32) = a4->Flags.0;
    if ( a5 )
    {
      *(_BYTE *)(v22 + 48) = 1;
      *(_QWORD *)(v22 + 52) = 0LL;
    }
    v42 = 16;
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v50, &v52, &v42);
    if ( v17 < 0 )
      goto LABEL_59;
    v17 = -1073741823;
    if ( v42 < 0x10 )
      goto LABEL_59;
    v17 = v52;
    if ( v52 < 0 )
      goto LABEL_59;
    v26 = v45;
    VirtualAddress = 0LL;
    v27 = *(_DWORD *)(v45 + 4);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v29 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG *, int, unsigned int))VirtualMemoryInterface)(
            -1LL,
            &VirtualAddress,
            0LL,
            Length,
            8392704,
            ~(unsigned __int16)(v27 >> 9) & 0x400 | 4u);
    v17 = v29;
    if ( v29 >= 0 )
    {
      Mdl = IoAllocateMdl(0LL, Length[0], 0, 0, 0LL);
      v25 = Mdl;
      if ( Mdl )
      {
        v33 = Mdl + 1;
        v34 = (struct _MDL *)(v53 >> 12);
        if ( (unsigned int)(*(_QWORD *)Length >> 12) )
        {
          v35 = (unsigned int)(*(_QWORD *)Length >> 12);
          do
          {
            v36 = v34;
            v34 = (struct _MDL *)((char *)v34 + 1);
            v33->Next = v36;
            v33 = (struct _MDL *)((char *)v33 + 8);
            --v35;
          }
          while ( v35 );
        }
        v37 = MmRotatePhysicalView(VirtualAddress, (PSIZE_T)Length, v25, MmToFrameBufferNoCopy, 0LL, 0LL);
        v17 = v37;
        if ( v37 >= 0 )
        {
          *((_DWORD *)v15 + 18) |= 0x80000u;
          *((_QWORD *)v15 + 13) = VirtualAddress;
          *((_QWORD *)v15 + 14) = v53;
          _InterlockedAdd((volatile signed __int32 *)v15 + 24, 1u);
          _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
          _InterlockedAdd(&g_VgpuNumAllocationsLocked, 1u);
          g_VgpuNumLockedBytes += *(_QWORD *)Length;
          a4->pData = VirtualAddress;
          goto LABEL_57;
        }
        this = (DXG_GUEST_VIRTUALGPU_VMBUS *)v37;
        WdLogSingleEntry1(2LL, v37);
        v31 = L"MmRotatePhysicalView failed: 0x%I64x";
        WdLogGlobalForLineNumber = 11300;
        v30 = 0LL;
      }
      else
      {
        v17 = -1073741801;
        WdLogSingleEntry2(2LL, *((_QWORD *)this + 9), -1073741801LL);
        this = (DXG_GUEST_VIRTUALGPU_VMBUS *)*((_QWORD *)this + 9);
        v31 = L"Adapter 0x%I64x: Failed to allocate memory for CPU visible buffer, returning 0x%I64x";
        WdLogGlobalForLineNumber = 11285;
        v30 = -1073741801LL;
      }
    }
    else
    {
      v30 = v29;
      WdLogSingleEntry2(2LL, this, v29);
      v31 = L"Adapter 0x%I64x: Failed to allocate memory, returning 0x%I64x";
      WdLogGlobalForLineNumber = 11277;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v31, (__int64)this, v30, 0LL, 0LL, 0LL);
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 11317;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"VmBusSendLock2 failed: 0x%I64x", v17, 0LL, 0LL, 0LL, 0LL);
    if ( VirtualAddress )
    {
      if ( (*(_DWORD *)(v26 + 4) & 0x40000) != 0 )
      {
        MmUnmapLockedPages(VirtualAddress, v25);
      }
      else
      {
        v38 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, PVOID *, ULONG *, __int64))v38 + 2))(-1LL, &VirtualAddress, Length, 0x8000LL);
      }
    }
    if ( !v25 )
    {
LABEL_58:
      if ( v17 >= 0 )
      {
LABEL_60:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v50);
        goto LABEL_61;
      }
LABEL_59:
      WdLogSingleEntry1(2LL, v17);
      WdLogGlobalForLineNumber = 11340;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendLock2 failed: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_60;
    }
LABEL_57:
    IoFreeMdl(v25);
    goto LABEL_58;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)v15 + 24) == 1
    && !(*((_BYTE *)v15 + 128) & 1 | ((*((_BYTE *)v15 + 128) & 2) != 0)) )
  {
    _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
  }
  if ( (*((_BYTE *)v15 + 128) & 2) != 0 && (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1744) & 1) != 0 )
  {
    v18 = *(PVOID *)(*((_QWORD *)v15 + 13) + 32LL);
  }
  else
  {
    v19 = *((_BYTE *)v15 + 128);
    if ( (v19 & 1) != 0 )
    {
      v20 = *((_QWORD *)v15 + 13);
      if ( (*(_BYTE *)(v20 + 10) & 5) != 0 )
        v18 = *(PVOID *)(v20 + 24);
      else
        v18 = MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, 0x40000010u);
    }
    else
    {
      if ( *((_BYTE *)this + 80) && (v19 & 2) == 0 )
      {
        v48 = 0LL;
        v49 = 0;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v48, this, 0x40u, 0LL, 0LL, 0LL);
        v21 = v48;
        *(_DWORD *)(v21 + 8) = DXGPROCESS::GetHostProcess(a2);
        *(_BYTE *)(v21 + 12) = 0;
        *(_DWORD *)(v21 + 12) &= 0x1FFu;
        *(_QWORD *)v21 = 0LL;
        *(_BYTE *)(v21 + 48) = 0;
        *(_QWORD *)(v21 + 52) = 0LL;
        *(_QWORD *)(v21 + 16) = 23LL;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, a2);
        *(_DWORD *)(v21 + 28) = HIDWORD(v44[2].Ptr);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
        *(_DWORD *)(v21 + 24) = *((_DWORD *)a3 + 118);
        *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v21 + 32) = a4->Flags.0;
        if ( a5 )
        {
          *(_BYTE *)(v21 + 48) = 1;
          *(_QWORD *)(v21 + 52) = 0LL;
        }
        v41 = 16;
        if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v48, v54, &v41) < 0
          || v41 < 0x10 )
        {
          UnlockParavirtualizedAllocationOnGuest(v15, 1);
          *((_QWORD *)v15 + 13) = 0LL;
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v48);
          v17 = -1073741823;
          goto LABEL_61;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v48);
      }
      v18 = (PVOID)*((_QWORD *)v15 + 13);
    }
  }
  a4->pData = v18;
  v17 = 0;
LABEL_61:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
  return (unsigned int)v17;
}
