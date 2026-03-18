/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1400A45F4
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400A88F0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     Use64KbPagesForTransfer @ 0x140091B10 (Use64KbPagesForTransfer.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A94B0 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  struct _MDL *v16; // r8
  struct _MDL *v17; // r11
  struct _MDL *v18; // r9
  struct VIDMM_SEGMENT *v19; // r8
  union _LARGE_INTEGER *v20; // rax
  struct VIDMM_SEGMENT *v21; // rdx
  union _LARGE_INTEGER *v22; // rcx
  __int64 v23; // r8
  struct VIDMM_SEGMENT *v24; // [rsp+20h] [rbp-50h]
  struct _MDL *MDLForRange; // [rsp+60h] [rbp-10h] BYREF
  char v26; // [rsp+B0h] [rbp+40h] BYREF
  char v27; // [rsp+B8h] [rbp+48h]
  struct VIDMM_SEGMENT *v28; // [rsp+C8h] [rbp+58h]

  v28 = a4;
  v5 = *((_QWORD *)this + 3);
  v6 = *(_QWORD *)a2;
  v26 = 0;
  v10 = 0LL;
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 40232) + 8LL * *((unsigned __int16 *)this + 210)) + 476LL);
  MDLForRange = 0LL;
  v11 = *(_QWORD *)(v6 + 16);
  v12 = v11 >> 1;
  v27 = v5 & 0x20;
  if ( (v5 & 0x20) == 0 || (v13 = 0x10000LL, !Use64KbPagesForTransfer(v6, (__int64)this)) )
    v13 = 4096LL;
  if ( v11 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 3)) )
        return;
      v15 = ~(v13 - 1) & (v13 + v12 - 1);
      if ( (*(_DWORD *)(v14 + 6984) & 0x800) == 0 || v13 == v15 )
      {
        LOBYTE(v24) = v13 == v15;
        if ( (*(int (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct VIDMM_SEGMENT *, char *, struct _MDL **))(**(_QWORD **)(v6 + 144) + 96LL))(
               *(_QWORD *)(v6 + 144),
               a2,
               v10,
               v15,
               v24,
               &v26,
               &MDLForRange) >= 0 )
        {
          v16 = MDLForRange;
          if ( MDLForRange || (MDLForRange = VidMmGetMDLForRange(a2, v10, v15), (v16 = MDLForRange) != 0LL) )
          {
            if ( v26 )
              goto LABEL_18;
            if ( (*(int (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**(_QWORD **)(v6 + 144) + 112LL))(
                   *(_QWORD *)(v6 + 144),
                   a2,
                   v10,
                   v15,
                   v16) >= 0 )
            {
              v16 = MDLForRange;
LABEL_18:
              v17 = 0LL;
              if ( v27 )
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v17 = v16;
                  v18 = 0LL;
                }
                else
                {
                  v18 = v16;
                }
                v19 = v28;
                v20 = &a5;
                v21 = 0LL;
                v22 = &a5;
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v20 = 0LL;
                else
                  v21 = v28;
                if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v19 = 0LL;
                  v22 = 0LL;
                }
              }
              else
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v19 = v28;
                  v22 = &a5;
                  v20 = (union _LARGE_INTEGER *)(v6 + 136);
                  v21 = *(struct VIDMM_SEGMENT **)(v6 + 144);
                }
                else
                {
                  v21 = v28;
                  v20 = &a5;
                  v22 = (union _LARGE_INTEGER *)(v6 + 136);
                  v19 = *(struct VIDMM_SEGMENT **)(v6 + 144);
                }
                v18 = 0LL;
              }
              VIDMM_GLOBAL::MemoryTransfer(*((VIDMM_GLOBAL **)this + 3), a2, v15, v10, v21, v20, v17, v19, v22, v18, 0);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), a2);
              (*(void (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**(_QWORD **)(v6 + 144) + 120LL))(
                *(_QWORD *)(v6 + 144),
                a2,
                v10,
                v15,
                MDLForRange);
              LOBYTE(v23) = 1;
              (*(void (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, __int64))(**(_QWORD **)(v6 + 144) + 104LL))(
                *(_QWORD *)(v6 + 144),
                a2,
                v23);
              v10 += v15;
              v12 = *(_QWORD *)(v6 + 16) - v10;
              continue;
            }
          }
          (*(void (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, _QWORD))(**(_QWORD **)(v6 + 144) + 104LL))(
            *(_QWORD *)(v6 + 144),
            a2,
            0LL);
        }
      }
      v12 = v15 >> 1;
    }
    while ( v10 != *(_QWORD *)(v6 + 16) );
  }
}
