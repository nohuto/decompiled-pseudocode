/*
 * XREFs of ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x180046C60
 * Callers:
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180046B98 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpReallocateHeap@@YAPEAXPEAX_K@Z @ 0x180046AD4 (-RmpReallocateHeap@@YAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_HAM_TERMINATION_HOST_BLOCK>(void **a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebp
  SIZE_T v10; // rax
  unsigned __int64 v11; // kr00_8
  char *Heap; // rax
  PVOID v13; // rdi

  if ( *a2 < a3 )
  {
    v7 = a3 - 1;
    if ( ((unsigned int)v7 & a3) != 0 )
      v8 = ((((((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 8) | (((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7 | (((((((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 8) | (((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 16))
         + 1;
    else
      v8 = 2 * a3;
    if ( v8 <= 0xFFFFFFFF
      && (v5 = 0, v9 = v8, v11 = (unsigned int)v8, v10 = 16LL * (unsigned int)v8, is_mul_ok(v11, 0x10uLL)) )
    {
      if ( *a1 )
        Heap = (char *)RmpReallocateHeap(*a1, v10);
      else
        Heap = (char *)HampAllocateHeap(v10);
      v13 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * (v9 - *a2));
        *a2 = v9;
        *a1 = v13;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
