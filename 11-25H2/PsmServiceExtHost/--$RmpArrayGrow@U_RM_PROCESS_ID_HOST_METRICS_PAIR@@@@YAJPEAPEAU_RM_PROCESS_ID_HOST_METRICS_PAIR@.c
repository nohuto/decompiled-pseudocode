/*
 * XREFs of ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x1800469E0
 * Callers:
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x18000EC8C (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpReallocateHeap@@YAPEAXPEAX_K@Z @ 0x180046AD4 (-RmpReallocateHeap@@YAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(void **a1, unsigned int *a2, unsigned int a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  char *Heap; // rax
  PVOID v12; // rdi

  if ( *a2 >= a3 )
  {
    return 0;
  }
  else
  {
    v5 = a3 - 1;
    if ( ((unsigned int)v5 & a3) != 0 )
      v6 = ((((((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 8) | (((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5 | (((((((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 8) | (((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 16))
         + 1;
    else
      v6 = 2 * a3;
    if ( v6 <= 0xFFFFFFFF
      && (v7 = 0, v8 = v6, v10 = (unsigned int)v6, v9 = 16LL * (unsigned int)v6, is_mul_ok(v10, 0x10uLL)) )
    {
      if ( *a1 )
        Heap = (char *)RmpReallocateHeap(*a1, v9);
      else
        Heap = (char *)HampAllocateHeap(v9);
      v12 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * (v8 - *a2));
        *a2 = v8;
        *a1 = v12;
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
  return v7;
}
