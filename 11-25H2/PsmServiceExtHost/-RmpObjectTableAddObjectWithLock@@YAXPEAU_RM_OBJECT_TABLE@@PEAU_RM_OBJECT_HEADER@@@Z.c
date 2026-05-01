/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000E82C
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x18000E5A8 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000E7D4 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005E9DC (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  char *Heap; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r14
  _QWORD *v13; // r10
  void *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // [rsp+50h] [rbp+8h]
  __int64 v19; // [rsp+50h] [rbp+8h]

  v3 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v3 )
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
        memset64(Heap, a1 | 1, v9);
      v10 = 0;
      v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * v10);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * v10) = *v13;
            v19 = v11 & v13[1];
            v16 = (37
                 * (BYTE6(v19)
                  + 37
                  * (BYTE5(v19)
                   + 37
                   * (BYTE4(v19)
                    + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                 + HIBYTE(v19)) & (unsigned int)(v3 - 1);
            *v13 = *(_QWORD *)&Heap[8 * v16];
            *(_QWORD *)&Heap[8 * v16] = v13;
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v14 = *(void **)(a1 + 8);
      v15 = (32 * v3) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = Heap;
      *(_DWORD *)(a1 + 4) = v15;
      if ( v14 )
        HampFreeHeap(v14);
    }
  }
  v5 = *(_DWORD *)(a1 + 4);
  v18 = *((_QWORD *)a2 + 1) & (-1LL << (v5 & 0x1F));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (37
      * (BYTE6(v18)
       + 37
       * (BYTE5(v18)
        + 37
        * (BYTE4(v18)
         + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
      + HIBYTE(v18)) & ((v5 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)(v6 + 8 * v7) = a2;
  ++*(_DWORD *)a1;
}
