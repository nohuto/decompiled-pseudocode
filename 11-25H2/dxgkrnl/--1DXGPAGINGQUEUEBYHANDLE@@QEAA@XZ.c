/*
 * XREFs of ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001DFA4
 * Callers:
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401CBC28 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1402963B0 (DxgkReclaimAllocations2.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1402FA170 (DxgkUpdateAllocationProperty.c)
 *     DxgkMapGpuVirtualAddress @ 0x14032FA20 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403A21E0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403349D8 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(DXGPAGINGQUEUEBYHANDLE *this)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // r8
  bool v6; // r8
  struct DXGADAPTER *v7; // rdx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  struct COREDEVICEACCESS *v12; // r8
  unsigned __int64 v13; // rdx
  _BYTE v14[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  char v17; // [rsp+70h] [rbp-90h]
  _BYTE v18[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v20[64]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v21; // [rsp+108h] [rbp+8h]
  char v22; // [rsp+110h] [rbp+10h]

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(v1 + 64));
    if ( v2 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 67;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NewReferenceCount >= 0", 67LL, 0LL, 0LL, 0LL, 0LL);
    }
    else if ( !v2 )
    {
      v3 = *(_QWORD *)(v1 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v14,
        (struct DXGDEVICE *)v3);
      v4 = *(_QWORD *)(v3 + 16);
      v17 = 0;
      v16 = *(_QWORD *)(v4 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      COREACCESS::COREACCESS((COREACCESS *)v19, *(struct DXGADAPTER *const *)(*(_QWORD *)(v3 + 16) + 16LL), v5);
      v7 = *(struct DXGADAPTER **)(v3 + 1880);
      if ( !v7 )
        v7 = *(struct DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v20, v7, v6);
      v9 = *(_QWORD *)(v3 + 16);
      v10 = *(_QWORD *)(v3 + 1880);
      v21 = v3;
      if ( v10 == *(_QWORD *)(v9 + 16) || (v22 = 1, !v10) )
        v22 = 0;
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v18, v8);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v3, (struct DXGPAGINGQUEUE *)v1, v12);
      COREACCESS::~COREACCESS((COREACCESS *)v20, v11);
      COREACCESS::~COREACCESS((COREACCESS *)v19, v13);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v3 + 16), (struct DXGDEVICE *)v3);
    }
  }
}
