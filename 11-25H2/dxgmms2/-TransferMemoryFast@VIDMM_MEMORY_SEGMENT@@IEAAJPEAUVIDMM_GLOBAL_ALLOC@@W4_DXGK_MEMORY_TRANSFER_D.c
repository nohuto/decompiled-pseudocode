/*
 * XREFs of ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1400A8A14
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400A88F0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?AddPendingTemporaryResource@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_TEMPORARY_RESOURCE@@@Z @ 0x1400A7958 (-AddPendingTemporaryResource@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_TEMPORARY_RESOURCE@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A94B0 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemoryFast(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6)
{
  __int64 v8; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // r12
  int v14; // edi
  struct _MDL *MDLForRange; // rax
  struct _MDL *v16; // rdx
  struct _MDL *v17; // r10
  struct _MDL *v18; // r11
  struct VIDMM_SEGMENT *v19; // rdx
  union _LARGE_INTEGER *v20; // rax
  union _LARGE_INTEGER *v21; // rcx
  struct _MDL *v23; // [rsp+68h] [rbp-30h] BYREF
  char v24; // [rsp+A0h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 3);
  if ( (*(_DWORD *)(v8 + 6984) & 0x400) == 0 )
  {
    v11 = *((unsigned __int16 *)this + 210);
    v12 = *(_QWORD *)a2;
    v24 = 0;
    v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 40232) + 8 * v11) + 476LL);
    v23 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _BYTE, char *, struct _MDL **))(**(_QWORD **)(v12 + 144) + 96LL))(
            *(_QWORD *)(v12 + 144),
            a2,
            0LL,
            *(_QWORD *)(v12 + 16),
            0,
            &v24,
            &v23);
    if ( v14 >= 0 )
    {
      MDLForRange = VidMmGetMDLForRange(a2, 0LL, *(_QWORD *)(v12 + 16));
      v23 = MDLForRange;
      v16 = MDLForRange;
      if ( MDLForRange )
      {
        if ( v24 )
        {
LABEL_7:
          v17 = 0LL;
          v18 = 0LL;
          if ( (v13 & 0x20) != 0 )
          {
            if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
              v17 = v16;
            else
              v18 = v16;
            v19 = 0LL;
            v20 = &a5;
            v21 = &a5;
            if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            {
              v20 = 0LL;
            }
            else
            {
              v19 = a4;
              a4 = 0LL;
              v21 = 0LL;
            }
          }
          else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          {
            v21 = &a5;
            v20 = (union _LARGE_INTEGER *)(v12 + 136);
            v19 = *(struct VIDMM_SEGMENT **)(v12 + 144);
          }
          else
          {
            v19 = a4;
            v20 = &a5;
            a4 = *(struct VIDMM_SEGMENT **)(v12 + 144);
            v21 = (union _LARGE_INTEGER *)(v12 + 136);
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 3),
            a2,
            *(_QWORD *)(v12 + 16),
            0LL,
            v19,
            v20,
            v17,
            a4,
            v21,
            v18,
            0);
          if ( (*((_DWORD *)a2 + 8) & 4) != 0 )
          {
            WdLogSingleEntry1(4LL, a2);
            WdLogGlobalForLineNumber = 2314;
            *a6 = 1;
          }
          else
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(4LL) + 24) = v12;
              WdLogGlobalForLineNumber = 2323;
            }
            VIDMM_PHYSICAL_ADAPTER::AddPendingTemporaryResource(
              *((VIDMM_PHYSICAL_ADAPTER ****)this + 4),
              (struct VIDMM_TEMPORARY_RESOURCE *)(v12 + 112));
          }
          if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            *(_BYTE *)(*((_QWORD *)this + 3) + 40943LL) = 1;
          return (unsigned int)v14;
        }
        v14 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(**(_QWORD **)(v12 + 144) + 112LL))(
                *(_QWORD *)(v12 + 144),
                a2,
                0LL,
                *(_QWORD *)(v12 + 16),
                MDLForRange);
        if ( v14 >= 0 )
        {
          v16 = v23;
          goto LABEL_7;
        }
      }
      else
      {
        v14 = -1071775487;
      }
      (*(void (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, _QWORD))(**(_QWORD **)(v12 + 144) + 104LL))(
        *(_QWORD *)(v12 + 144),
        a2,
        0LL);
    }
    return (unsigned int)v14;
  }
  return 3223191809LL;
}
