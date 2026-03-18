/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A278C
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400A1970 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1400A20E8 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_H.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400A2E64 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1400A3394 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400CF710 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D09A0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        union _LARGE_INTEGER **a5,
        LONGLONG *a6,
        _BYTE *a7,
        char a8)
{
  LONGLONG v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rbx
  _QWORD *v12; // rax
  union _LARGE_INTEGER *v13; // rax
  union _LARGE_INTEGER *v14; // r13
  int Block; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _VIDMM_PROCESS_HEAP_BLOCK *v18; // r15
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v19; // rax
  __int64 v21; // r8
  _QWORD **BlockListHead; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  VIDMM_LINEAR_POOL *v25; // rcx
  bool v26; // sf
  union _LARGE_INTEGER v27; // rbx
  int v28; // edi
  int v29; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v31; // edx
  int v32; // ecx
  __int64 (__fastcall *v33)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int); // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+28h] [rbp-69h]
  unsigned __int64 v40; // [rsp+30h] [rbp-61h]
  char v41[8]; // [rsp+38h] [rbp-59h]
  char v42[8]; // [rsp+40h] [rbp-51h]
  char v43; // [rsp+68h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v44; // [rsp+70h] [rbp-21h] BYREF
  LONGLONG v45; // [rsp+78h] [rbp-19h] BYREF
  union _LARGE_INTEGER v46; // [rsp+80h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v47; // [rsp+88h] [rbp-9h] BYREF
  _QWORD **v48; // [rsp+90h] [rbp-1h]
  char v49; // [rsp+D8h] [rbp+47h]
  unsigned __int64 v50; // [rsp+E0h] [rbp+4Fh] BYREF
  unsigned int v51; // [rsp+F0h] [rbp+5Fh]

  v51 = a4;
  v50 = a2;
  v8 = 0LL;
  v45 = 0LL;
  v9 = a4;
  v10 = a3;
  v44 = 0LL;
  v47 = 0LL;
  v46.QuadPart = 0LL;
  v49 = 0;
  v43 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v12[3] = v50;
    v12[4] = v10;
    v12[5] = a1;
    WdLogGlobalForLineNumber = 627;
  }
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v14 = v13;
  if ( v13 )
  {
    memset(v13, 0, 0x70uLL);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 16));
    v43 = 1;
    BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, v9, v21);
    v48 = BlockListHead;
    v24 = *BlockListHead;
    while ( v24 != BlockListHead )
    {
      v18 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v24 - 1);
      v25 = (VIDMM_LINEAR_POOL *)v24[8];
      v24 = (_QWORD *)*v24;
      v44 = v18;
      v26 = (int)VIDMM_LINEAR_POOL::Allocate(v25, v50, v10, 1u, 0LL, 0LL, 0, 0, 0LL, &v46, (void **)&v47) < 0;
      BlockListHead = v48;
      if ( !v26 )
        goto LABEL_22;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v23);
      WdLogGlobalForLineNumber = 706;
    }
    Block = VIDMM_PROCESS_HEAP::AllocateBlock(a1, v50, v10, v9, (__int64 *)&v44, a8);
    if ( Block < 0 )
      goto LABEL_6;
    v18 = v44;
    v49 = 1;
    Block = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)v44 + 9),
              v50,
              v10,
              1u,
              0LL,
              0LL,
              0,
              0,
              0LL,
              &v46,
              (void **)&v47);
    if ( Block < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v23);
        WdLogGlobalForLineNumber = 739;
      }
      goto LABEL_7;
    }
LABEL_22:
    v27 = v46;
    if ( !*((_QWORD *)v18 + 7) && !*((_QWORD *)v18 + 11) )
    {
      v28 = *((_DWORD *)v18 + 20);
      v45 = v46.QuadPart + *((_QWORD *)v18 + 4);
      v29 = *((_DWORD *)v18 + 12);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v31 = 8392704;
      v32 = 4096;
      v33 = *(__int64 (__fastcall **)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int))VirtualMemoryInterface;
      if ( v28 != 2 )
        v32 = 8392704;
      if ( !a8 )
        v31 = v32;
      Block = v33(-1LL, &v45, 0LL, &v50, v31, v29);
      if ( Block < 0 )
      {
        v45 = 0LL;
        _InterlockedIncrement(&dword_14008179C);
        WdLogSingleEntry0(6LL);
        v17 = 774LL;
        goto LABEL_5;
      }
      v9 = v51;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v23);
      v34[4] = v46.HighPart;
      v34[5] = v27.LowPart;
      v34[3] = v18;
      WdLogGlobalForLineNumber = 786;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += v50;
    v35 = *(_QWORD **)(a1 + 8);
    if ( v9 == 1 )
    {
      v35[20] += v50;
    }
    else if ( v9 == 2 )
    {
      v35[22] += v50;
    }
    else
    {
      v35[24] += v50;
    }
    v14->LowPart &= ~1u;
    v14[7].QuadPart = v50;
    v14[3].QuadPart = (LONGLONG)v47;
    LOBYTE(v14[9].LowPart) = 0;
    v14[1].QuadPart = (LONGLONG)v18;
    v14[2] = v27;
    v14[4].QuadPart = 0LL;
    ++*((_DWORD *)v18 + 6);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
    *a5 = v14;
    if ( v9 - 3 > 1 )
      v8 = v14[2].QuadPart + *(_QWORD *)(v14[1].QuadPart + 32);
    *a6 = v8;
    if ( (byte_140081241 & 0x10) != 0 )
    {
      if ( v9 - 3 <= 3 )
        v38 = *((_QWORD *)v18 + 11);
      else
        v38 = *((_QWORD *)v18 + 4);
      McTemplateK0qxxx_EtwWriteTransfer(
        v36,
        &EventCreateProcessAllocationDetails,
        v37,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v14,
        v50,
        v38);
    }
    *a7 = 1;
    return 0LL;
  }
  else
  {
    Block = -1073741801;
    _InterlockedIncrement(&dword_140081704);
    WdLogSingleEntry0(6LL);
    v17 = 653LL;
LABEL_5:
    *(_QWORD *)v42 = 0LL;
    *(_QWORD *)v41 = 0LL;
    v40 = 0LL;
    v39 = v17;
    WdLogGlobalForLineNumber = v17;
    DxgkLogInternalTriageEvent(v16, 262145LL);
LABEL_6:
    v18 = v44;
LABEL_7:
    if ( v45 )
    {
      v19 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, LONGLONG *, unsigned __int64 *, __int64, unsigned __int64, unsigned __int64, char *, char *))v19
       + 2))(
        -1LL,
        &v45,
        &v50,
        0x4000LL,
        v39,
        v40,
        *(char **)v41,
        *(char **)v42);
    }
    if ( v47 && v18 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v18 + 9), v47);
    if ( v49 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v18);
    if ( v14 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64), v14);
    if ( v43 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
    return (unsigned int)Block;
  }
}
