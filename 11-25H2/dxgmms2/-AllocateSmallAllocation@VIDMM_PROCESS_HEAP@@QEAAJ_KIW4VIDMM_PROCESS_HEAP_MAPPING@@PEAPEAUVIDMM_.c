/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A0F0C
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400A00F0 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1400A0868 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_H.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400A15E4 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1400A1B14 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400D3AD0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D4D64 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
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
  unsigned __int64 v36; // [rsp+28h] [rbp-69h]
  unsigned __int64 v37; // [rsp+30h] [rbp-61h]
  char v38[8]; // [rsp+38h] [rbp-59h]
  char v39[8]; // [rsp+40h] [rbp-51h]
  char v40; // [rsp+68h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v41; // [rsp+70h] [rbp-21h] BYREF
  LONGLONG v42; // [rsp+78h] [rbp-19h] BYREF
  union _LARGE_INTEGER v43; // [rsp+80h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v44; // [rsp+88h] [rbp-9h] BYREF
  _QWORD **v45; // [rsp+90h] [rbp-1h]
  char v46; // [rsp+D8h] [rbp+47h]
  unsigned __int64 v47; // [rsp+E0h] [rbp+4Fh] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+5Fh]

  v48 = a4;
  v47 = a2;
  v8 = 0LL;
  v42 = 0LL;
  v9 = a4;
  v10 = a3;
  v41 = 0LL;
  v44 = 0LL;
  v43.QuadPart = 0LL;
  v46 = 0;
  v40 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v12[3] = v47;
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
    v40 = 1;
    BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, v9, v21);
    v45 = BlockListHead;
    v24 = *BlockListHead;
    while ( v24 != BlockListHead )
    {
      v18 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v24 - 1);
      v25 = (VIDMM_LINEAR_POOL *)v24[8];
      v24 = (_QWORD *)*v24;
      v41 = v18;
      v26 = (int)VIDMM_LINEAR_POOL::Allocate(v25, v47, v10, 1u, 0LL, 0LL, 0, 0, 0LL, &v43, (void **)&v44) < 0;
      BlockListHead = v45;
      if ( !v26 )
        goto LABEL_22;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v23);
      WdLogGlobalForLineNumber = 706;
    }
    Block = VIDMM_PROCESS_HEAP::AllocateBlock(a1, v47, v10, v9, (__int64 *)&v41, a8);
    if ( Block < 0 )
      goto LABEL_6;
    v18 = v41;
    v46 = 1;
    Block = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)v41 + 9),
              v47,
              v10,
              1u,
              0LL,
              0LL,
              0,
              0,
              0LL,
              &v43,
              (void **)&v44);
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
    v27 = v43;
    if ( !*((_QWORD *)v18 + 7) && !*((_QWORD *)v18 + 11) )
    {
      v28 = *((_DWORD *)v18 + 20);
      v42 = v43.QuadPart + *((_QWORD *)v18 + 4);
      v29 = *((_DWORD *)v18 + 12);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v31 = 8392704;
      v32 = 4096;
      v33 = *(__int64 (__fastcall **)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int))VirtualMemoryInterface;
      if ( v28 != 2 )
        v32 = 8392704;
      if ( !a8 )
        v31 = v32;
      Block = v33(-1LL, &v42, 0LL, &v47, v31, v29);
      if ( Block < 0 )
      {
        v42 = 0LL;
        _InterlockedIncrement(&dword_14008177C);
        WdLogSingleEntry0(6LL);
        v17 = 774LL;
        goto LABEL_5;
      }
      v9 = v48;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v23);
      v34[4] = v43.HighPart;
      v34[5] = v27.LowPart;
      v34[3] = v18;
      WdLogGlobalForLineNumber = 786;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += v47;
    v35 = *(_QWORD **)(a1 + 8);
    if ( v9 == 1 )
    {
      v35[20] += v47;
    }
    else if ( v9 == 2 )
    {
      v35[22] += v47;
    }
    else
    {
      v35[24] += v47;
    }
    v14->LowPart &= ~1u;
    v14[7].QuadPart = v47;
    v14[3].QuadPart = (LONGLONG)v44;
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
      McTemplateK0qxxx_EtwWriteTransfer();
    *a7 = 1;
    return 0LL;
  }
  else
  {
    Block = -1073741801;
    _InterlockedIncrement(&dword_1400816E4);
    WdLogSingleEntry0(6LL);
    v17 = 653LL;
LABEL_5:
    *(_QWORD *)v39 = 0LL;
    *(_QWORD *)v38 = 0LL;
    v37 = 0LL;
    v36 = v17;
    WdLogGlobalForLineNumber = v17;
    DxgkLogInternalTriageEvent(v16, 262145LL);
LABEL_6:
    v18 = v41;
LABEL_7:
    if ( v42 )
    {
      v19 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, LONGLONG *, unsigned __int64 *, __int64, unsigned __int64, unsigned __int64, char *, char *))v19
       + 2))(
        -1LL,
        &v42,
        &v47,
        0x4000LL,
        v36,
        v37,
        *(char **)v38,
        *(char **)v39);
    }
    if ( v44 && v18 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v18 + 9), v44);
    if ( v46 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v18);
    if ( v14 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64), v14);
    if ( v40 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
    return (unsigned int)Block;
  }
}
