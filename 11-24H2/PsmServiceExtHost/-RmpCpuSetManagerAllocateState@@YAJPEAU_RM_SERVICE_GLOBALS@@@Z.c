/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180089EC8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085754 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008992C (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008AEEC (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008BE20 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  int State; // edi
  __int64 v3; // rbx
  char *Heap; // r8
  char v5; // cl
  unsigned __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r14
  _QWORD *v11; // r9
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h]

  v1 = (char *)a1 + 680;
  State = RmpObjectTableAllocateState((unsigned __int64)a1 + 704);
  if ( State >= 0 )
  {
    State = RmpObjectTableAllocateState((unsigned __int64)(v1 + 48));
    if ( State >= 0 )
    {
      v3 = (unsigned int)(2 * (*((_DWORD *)v1 + 19) >> 5));
      if ( *((_DWORD *)v1 + 18) >= (unsigned int)v3 )
      {
        if ( (unsigned int)v3 < 4 )
          v3 = 4LL;
        Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v3);
        if ( Heap )
        {
          if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
          {
            v5 = -1;
            do
            {
              ++v5;
              LODWORD(v3) = (unsigned int)v3 >> 1;
            }
            while ( (_DWORD)v3 );
            v3 = (unsigned int)(1 << v5);
          }
          if ( (unsigned int)v3 > 0x4000000 )
            v3 = 0x4000000LL;
          v6 = (unsigned int)v3;
          if ( Heap > &Heap[8 * v3] )
            v6 = 0LL;
          if ( v6 )
            memset64(Heap, (unsigned __int64)(v1 + 72) | 1, v6);
          v7 = *((_DWORD *)v1 + 19);
          v8 = 0;
          v9 = -1LL << (v1[76] & 0x1F);
          if ( (v7 & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v10 = *((_QWORD *)v1 + 10);
              while ( 1 )
              {
                v11 = *(_QWORD **)(v10 + 8LL * v8);
                if ( ((unsigned __int8)v11 & 1) != 0 )
                  break;
                *(_QWORD *)(v10 + 8LL * v8) = *v11;
                v15 = v9 & v11[1];
                v12 = (37
                     * (BYTE6(v15)
                      + 37
                      * (BYTE5(v15)
                       + 37
                       * (BYTE4(v15)
                        + 37
                        * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                     + HIBYTE(v15)) & (unsigned int)(v3 - 1);
                *v11 = *(_QWORD *)&Heap[8 * v12];
                *(_QWORD *)&Heap[8 * v12] = v11;
              }
              v7 = *((_DWORD *)v1 + 19);
              ++v8;
            }
            while ( v8 < v7 >> 5 );
          }
          v13 = (void *)*((_QWORD *)v1 + 10);
          *((_QWORD *)v1 + 10) = Heap;
          *((_DWORD *)v1 + 19) = (32 * v3) | v7 & 0x1F;
          if ( v13 )
            HampFreeHeap(v13);
        }
        else if ( *((_DWORD *)v1 + 19) < 0x20u )
        {
          return (unsigned int)-1073741801;
        }
      }
      State = RmpCpuSetManagerInitializeReservedCpuSets((struct _RM_CPU_SET_MANAGER *)v1);
      if ( State >= 0 )
      {
        RmpAcquireGlobalLock();
        State = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
        RmpReleaseGlobalLock();
        if ( State >= 0 )
          return 0;
      }
    }
  }
  return (unsigned int)State;
}
