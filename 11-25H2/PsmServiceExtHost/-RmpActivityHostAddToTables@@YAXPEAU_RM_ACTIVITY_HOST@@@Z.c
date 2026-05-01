/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005E9DC
 * Callers:
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003AA38 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000E82C (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x1800189C0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdi
  char *Heap; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // edi
  __int64 v12; // r10
  __int64 v13; // r15
  _QWORD *v14; // r9
  void *v15; // rcx
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // [rsp+50h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 177) = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)a1, (unsigned __int64)a1 + 88);
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock(v1 + 16, a1);
  v3 = (unsigned int)(2 * (*(_DWORD *)(v1 + 3348) >> 5));
  if ( *(_DWORD *)(v1 + 3344) >= (unsigned int)v3 )
  {
    if ( (unsigned int)v3 < 4 )
      v3 = 4LL;
    Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v3);
    if ( Heap )
    {
      if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
      {
        v17 = -1;
        do
        {
          ++v17;
          LODWORD(v3) = (unsigned int)v3 >> 1;
        }
        while ( (_DWORD)v3 );
        v3 = (unsigned int)(1 << v17);
      }
      if ( (unsigned int)v3 > 0x4000000 )
        v3 = 0x4000000LL;
      v9 = (unsigned int)v3;
      if ( Heap > &Heap[8 * v3] )
        v9 = 0LL;
      if ( v9 )
        memset64(Heap, (v1 + 3344) | 1, v9);
      v10 = *(_DWORD *)(v1 + 3348);
      v11 = 0;
      v12 = -1LL << (*(_BYTE *)(v1 + 3348) & 0x1F);
      if ( (v10 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(v1 + 3352);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v11);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v11) = *v14;
            v18 = v12 & v14[1];
            v16 = (37
                 * (BYTE6(v18)
                  + 37
                  * (BYTE5(v18)
                   + 37
                   * (BYTE4(v18)
                    + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                 + HIBYTE(v18)) & (unsigned int)(v3 - 1);
            *v14 = *(_QWORD *)&Heap[8 * v16];
            *(_QWORD *)&Heap[8 * v16] = v14;
          }
          v10 = *(_DWORD *)(v1 + 3348);
          ++v11;
        }
        while ( v11 < v10 >> 5 );
      }
      v15 = *(void **)(v1 + 3352);
      *(_QWORD *)(v1 + 3352) = Heap;
      *(_DWORD *)(v1 + 3348) = (32 * v3) | v10 & 0x1F;
      if ( v15 )
        HampFreeHeap(v15);
    }
  }
  v4 = *(_DWORD *)(v1 + 3348);
  v5 = *((_QWORD *)a1 + 177) & (-1LL << (v4 & 0x1F));
  v6 = *(_QWORD *)(v1 + 3352);
  v7 = (37
      * (BYTE6(v5)
       + 37
       * (BYTE5(v5)
        + 37
        * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
      + HIBYTE(v5)) & ((v4 >> 5) - 1);
  *((_QWORD *)a1 + 176) = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)(v6 + 8 * v7) = (char *)a1 + 1408;
  ++*(_DWORD *)(v1 + 3344);
  RtlReleaseSRWLockExclusive(v1 + 32);
}
