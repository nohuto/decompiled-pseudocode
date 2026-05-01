/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003AB80
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003A980 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  char *Heap; // r8
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // r10
  __int64 v14; // r14
  _QWORD *v15; // r9
  void *v16; // rcx
  __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // [rsp+50h] [rbp+8h]
  __int64 v20; // [rsp+50h] [rbp+8h]

  v2 = (unsigned __int64)a1 + 3360;
  v5 = (unsigned int)(2 * (*((_DWORD *)a1 + 841) >> 5));
  if ( *((_DWORD *)a1 + 840) >= (unsigned int)v5 )
  {
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v5);
    if ( Heap )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v18 = -1;
        do
        {
          ++v18;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v18);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v10 = (unsigned int)v5;
      if ( Heap > &Heap[8 * v5] )
        v10 = 0LL;
      if ( v10 )
        memset64(Heap, v2 | 1, v10);
      v11 = *(_DWORD *)(v2 + 4);
      v12 = 0;
      v13 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (v11 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * v12);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * v12) = *v15;
            v20 = v13 & v15[1];
            v17 = (37
                 * (BYTE6(v20)
                  + 37
                  * (BYTE5(v20)
                   + 37
                   * (BYTE4(v20)
                    + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                 + HIBYTE(v20)) & (unsigned int)(v5 - 1);
            *v15 = *(_QWORD *)&Heap[8 * v17];
            *(_QWORD *)&Heap[8 * v17] = v15;
          }
          v11 = *(_DWORD *)(v2 + 4);
          ++v12;
        }
        while ( v12 < v11 >> 5 );
      }
      v16 = *(void **)(v2 + 8);
      *(_QWORD *)(v2 + 8) = Heap;
      *(_DWORD *)(v2 + 4) = (32 * v5) | v11 & 0x1F;
      if ( v16 )
        HampFreeHeap(v16);
    }
  }
  v6 = *((_DWORD *)a1 + 841);
  v19 = *((_QWORD *)a2 + 1) & (-1LL << (v6 & 0x1F));
  v7 = *((_QWORD *)a1 + 421);
  v8 = (37
      * (BYTE6(v19)
       + 37
       * (BYTE5(v19)
        + 37
        * (BYTE4(v19)
         + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
      + HIBYTE(v19)) & ((v6 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = a2;
  ++*((_DWORD *)a1 + 840);
}
