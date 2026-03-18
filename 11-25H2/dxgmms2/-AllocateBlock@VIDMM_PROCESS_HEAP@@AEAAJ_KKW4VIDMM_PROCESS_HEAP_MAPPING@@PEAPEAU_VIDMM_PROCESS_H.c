/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1400A0868
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A0F0C (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043F1C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004CA30 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z @ 0x14009E180 (--0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z @ 0x14009E878 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1400A1B14 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        char a6)
{
  unsigned __int64 v7; // r8
  int v8; // r13d
  unsigned int v9; // r15d
  VIDMM_LINEAR_POOL *v10; // rsi
  HANDLE v11; // r12
  SIZE_T v12; // r8
  int v13; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  NTSTATUS inserted; // eax
  NTSTATUS v22; // eax
  VIDMM_LINEAR_POOL *v23; // rax
  VIDMM_LINEAR_POOL *v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  int v32; // r15d
  _QWORD *v33; // rcx
  __int64 v34; // rax
  PVOID v35; // r9
  __int64 BlockListHead; // rax
  _QWORD *v37; // r8
  __int64 v38; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v39; // rax
  __int64 NewObject; // [rsp+20h] [rbp-50h]
  PHANDLE Handle; // [rsp+28h] [rbp-48h]
  __int64 v43; // [rsp+30h] [rbp-40h]
  __int64 v44; // [rsp+38h] [rbp-38h]
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v47; // [rsp+60h] [rbp-10h] BYREF
  SIZE_T v48; // [rsp+68h] [rbp-8h] BYREF
  PVOID Address; // [rsp+B8h] [rbp+48h] BYREF

  v7 = a2 + a3;
  Address = 0LL;
  v8 = 0;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v47 = 0LL;
  v11 = 0LL;
  if ( v7 <= (unsigned int)dword_14008143C )
    v7 = (unsigned int)dword_14008143C;
  v12 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Size = v12;
  if ( v12 < a2 )
    goto LABEL_57;
  if ( a4 != 3 )
  {
    if ( a4 == 4 )
    {
LABEL_22:
      v18 = 134479872;
      goto LABEL_24;
    }
    if ( a4 != 5 )
    {
      if ( a4 != 6 )
      {
        v8 = 4;
        v9 = 8400896;
        if ( a4 != 2 )
          v8 = 1028;
        v13 = 12288;
        if ( a4 != 2 )
          v13 = 8400896;
        if ( !a6 )
          v9 = v13;
        if ( dword_1400812C8 )
          v9 &= ~0x1000u;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        if ( (*(int (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, unsigned int, int))VirtualMemoryInterface)(
               -1LL,
               &Address,
               0LL,
               &Size,
               v9,
               v8) < 0 )
        {
          v9 &= ~0x800000u;
          v15 = DxgkGetVirtualMemoryInterface();
          v16 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, unsigned int, int))v15)(
                  -1LL,
                  &Address,
                  0LL,
                  &Size,
                  v9,
                  v8);
          v17 = v16;
          if ( v16 < 0 )
          {
            Address = 0LL;
            _InterlockedIncrement(&dword_1400816E8);
            WdLogSingleEntry1(6LL, v16);
            WdLogGlobalForLineNumber = 2024;
            v44 = 0LL;
            v43 = 0LL;
            Handle = 0LL;
            NewObject = v17;
            DxgkLogInternalTriageEvent(0LL, 262145LL);
LABEL_62:
            if ( v11 )
              MmUnsecureVirtualMemory(v11);
            if ( Address )
            {
              v39 = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, __int64, __int64))v39 + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handle,
                v43,
                v44);
              Address = 0LL;
            }
LABEL_72:
            if ( v10 )
              VIDMM_LINEAR_POOL::`scalar deleting destructor'(v10);
            return (unsigned int)v17;
          }
        }
        if ( (v9 & 0x1000) != 0 )
        {
          v11 = MmSecureVirtualMemory(Address, Size, 4u);
          if ( !v11 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2045;
            LODWORD(v17) = -1073741801;
            goto LABEL_62;
          }
        }
        goto LABEL_33;
      }
      goto LABEL_22;
    }
  }
  v18 = 1208221696;
LABEL_24:
  v48 = v12;
  LODWORD(v17) = MmCreateSection(&Object, 0LL, 0LL, &v48, 4, v18, -1LL, 0LL);
  if ( (int)v17 < 0 )
  {
    Object = 0LL;
    _InterlockedIncrement(&dword_1400817A4);
    WdLogSingleEntry0(6LL);
    v44 = 0LL;
    v43 = 0LL;
    Handle = 0LL;
    WdLogGlobalForLineNumber = 1944;
    NewObject = 1944LL;
LABEL_26:
    v20 = 262145LL;
LABEL_27:
    DxgkLogInternalTriageEvent(v19, v20);
LABEL_58:
    if ( a4 != 3 && a4 != 4 )
    {
      if ( a4 != 5 && a4 != 6 )
        goto LABEL_62;
      if ( Address )
        MmUnmapViewInSystemSpace(Address);
    }
    if ( Object )
    {
      if ( v47 )
        ObCloseHandle(v47, ((unsigned __int64)v47 & 0xFFFFFFFF80000000uLL) == 0);
      ObfDereferenceObject(Object);
    }
    goto LABEL_72;
  }
  ObfReferenceObject(Object);
  inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v47);
  v17 = inserted;
  if ( inserted < 0 )
  {
    WdLogSingleEntry2(1LL, Object, inserted);
    v19 = 0LL;
    WdLogGlobalForLineNumber = 1964;
    v44 = 0LL;
    v20 = 0x40000LL;
    v43 = 0LL;
    Handle = (PHANDLE)v17;
    NewObject = (__int64)Object;
    goto LABEL_27;
  }
  if ( a4 - 5 <= 1 )
  {
    v22 = MmMapViewInSystemSpace(Object, &Address, &Size);
    v17 = v22;
    if ( v22 < 0 )
    {
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry1(6LL, v22);
      v19 = 0LL;
      WdLogGlobalForLineNumber = 1977;
      v44 = 0LL;
      v43 = 0LL;
      Handle = 0LL;
      NewObject = v17;
      goto LABEL_26;
    }
  }
LABEL_33:
  v23 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
  if ( !v23 || (v24 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v23, 0LL), (v10 = v24) == 0LL) )
  {
    _InterlockedIncrement(&dword_1400816EC);
    WdLogSingleEntry0(6LL);
    v30 = 2060LL;
    goto LABEL_56;
  }
  v25 = VIDMM_LINEAR_POOL::Init(v24, Size, 0, 0LL, 0LL);
  v17 = v25;
  if ( v25 < 0 )
  {
    _InterlockedIncrement(&dword_1400816F0);
    WdLogSingleEntry1(6LL, v25);
    v19 = 0LL;
    WdLogGlobalForLineNumber = 2070;
    v44 = 0LL;
    v43 = 0LL;
    Handle = 0LL;
    NewObject = v17;
    goto LABEL_26;
  }
  v26 = operator new(104LL, 0x31316956u, 256LL);
  v28 = v26;
  if ( !v26 )
  {
    _InterlockedIncrement(&dword_1400816F4);
    WdLogSingleEntry0(6LL);
    v30 = 2082LL;
LABEL_56:
    v44 = 0LL;
    v43 = 0LL;
    Handle = 0LL;
    NewObject = v30;
    WdLogGlobalForLineNumber = v30;
    DxgkLogInternalTriageEvent(v29, 262145LL);
LABEL_57:
    LODWORD(v17) = -1073741801;
    goto LABEL_58;
  }
  *(_QWORD *)v26 = a1;
  *(_DWORD *)(v26 + 24) = 0;
  *(_QWORD *)(v26 + 32) = Address;
  *(_QWORD *)(v26 + 40) = Size;
  v31 = 2;
  v32 = (v9 >> 23) & 1;
  *(_DWORD *)(v28 + 48) = v8;
  *(_QWORD *)(v28 + 72) = v10;
  *(_QWORD *)(v28 + 56) = v11;
  if ( a4 != 2 )
    v31 = 0;
  *(_DWORD *)(v28 + 80) = a4;
  *(_DWORD *)(v28 + 64) = v31 | v32;
  *(_QWORD *)(v28 + 88) = Object;
  *(_QWORD *)(v28 + 96) = v47;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v28;
    WdLogGlobalForLineNumber = 2106;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += *(_QWORD *)(v28 + 40);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
  v33 = *(_QWORD **)(a1 + 8);
  v34 = *(_QWORD *)(v28 + 40);
  if ( a4 == 1 )
  {
    v33[21] += v34;
  }
  else if ( a4 == 2 )
  {
    v33[23] += v34;
  }
  else
  {
    v33[25] += v34;
  }
  if ( (byte_140081242 & 4) != 0 )
  {
    v35 = Address;
    LODWORD(v44) = 1;
    if ( a4 - 3 <= 3 )
      v35 = Object;
    LODWORD(Handle) = a4;
    LODWORD(v43) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    McTemplateK0pxqqt_EtwWriteTransfer(
      (unsigned int)v43,
      &EventCreateProcessAllocation,
      v27,
      v35,
      Size,
      Handle,
      v43,
      v44);
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v28 + 8);
  v38 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v37[1] = BlockListHead;
  *v37 = v38;
  *(_QWORD *)(v38 + 8) = v37;
  *(_QWORD *)BlockListHead = v37;
  *a5 = v28;
  return (unsigned int)v17;
}
