/*
 * XREFs of ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x14009C218
 * Callers:
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400D3588 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z@Z @ 0x14009EAC4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400D3AD0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140103044 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(
        VIDMM_SEGMENT *this,
        __int64 a2,
        struct VIDMM_PHYSICAL_ALLOC *a3,
        char a4,
        char a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // r12
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  VIDMM_LINEAR_POOL *v14; // rcx
  unsigned __int64 v15; // r15
  __int64 result; // rax
  unsigned int v17; // eax
  unsigned __int64 v18; // r15
  char v19; // bp
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r10
  int (*v24)(VIDMM_SEGMENT *__hidden, struct VIDMM_PHYSICAL_ALLOC *, bool *, void *); // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v28[10]; // [rsp+68h] [rbp-50h] BYREF
  char v29; // [rsp+C8h] [rbp+10h] BYREF
  union _LARGE_INTEGER v30; // [rsp+D0h] [rbp+18h] BYREF
  char v31; // [rsp+D8h] [rbp+20h]

  v31 = a4;
  v5 = *((unsigned int *)a3 + 8);
  v7 = *((_QWORD *)a3 + 2);
  v9 = ~(v5 - 1);
  v10 = a2 & v9;
  if ( (a2 & (unsigned __int64)v9) < v7 || v10 - v7 <= *((_QWORD *)this + 53) )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    v11 = -1073741801;
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 3) + 41192LL), Executive, 0, 0, 0LL);
    if ( !*((_QWORD *)this + 59) )
    {
      v12 = *((_QWORD *)this + 63);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 57);
        v14 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
        v30.QuadPart = 0LL;
        v15 = v13 - v12;
        result = VIDMM_LINEAR_POOL::Allocate(v14, v12, 1u, 0, v13 - v12, v13, v31, a5, 0LL, &v30, (void **)this + 62);
        v11 = result;
        if ( (int)result < 0 )
          return result;
        v10 = v15 & v9;
      }
    }
    v17 = v5;
    v18 = v9 & (v10 - v7) & ~*((_QWORD *)this + 55);
    v19 = a5;
    if ( (unsigned int)v5 <= *((_DWORD *)this + 112) )
      v17 = *((_DWORD *)this + 112);
    if ( !(v7 % v17) )
      v11 = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)this + 26),
              v7,
              v5,
              0,
              v18,
              v10,
              v31,
              a5,
              a3,
              (union _LARGE_INTEGER *)a3 + 12,
              (void **)a3 + 11);
    if ( v11 < 0 )
    {
      v20 = *((_QWORD *)this + 3);
      v21 = *(_QWORD *)(v20 + 24);
      if ( (*(_DWORD *)(344LL * *((unsigned __int16 *)this + 210) + *(_QWORD *)(v21 + 2992) + 16) & 4) != 0 )
      {
        v22 = *((_QWORD *)this + 58);
        v27 = 0LL;
        v23 = *((_QWORD *)this + 26);
        v28[1] = v22;
        v29 = 0;
        v28[0] = v18;
        if ( !*(_BYTE *)(v21 + 3056)
          || (v24 = VIDMM_SEGMENT::ReserveOutsideRangeCB,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 744LL) + 152LL) != 1) )
        {
          v24 = VIDMM_SEGMENT::ReserveOutsideRangeNoDisplayingCB;
        }
        v11 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                v23,
                v18,
                v10,
                0,
                (__int64)v24,
                (__int64)this,
                (__int64)v28,
                (__int64)&v27,
                (__int64)&v29);
        if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 6984LL) & 0x80000) != 0 )
        {
          v11 = -1073741823;
        }
        else if ( v11 >= 0 )
        {
          v11 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 26),
                  v7,
                  v5,
                  0,
                  v18,
                  v10,
                  v31,
                  v19,
                  a3,
                  (union _LARGE_INTEGER *)a3 + 12,
                  (void **)a3 + 11);
          if ( v11 >= 0 )
            return (unsigned int)v11;
        }
        WdLogSingleEntry1(3LL, v11);
        v25 = *((_QWORD *)this + 9);
        v26 = *((_QWORD *)this + 26);
        WdLogGlobalForLineNumber = 2029;
        VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(v26, 0LL, v25, 0LL);
      }
    }
  }
  return (unsigned int)v11;
}
