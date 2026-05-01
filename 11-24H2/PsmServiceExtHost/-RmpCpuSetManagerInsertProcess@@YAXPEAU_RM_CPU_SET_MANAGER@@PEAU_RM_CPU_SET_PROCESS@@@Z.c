/*
 * XREFs of ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008AFA0
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008BA70 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall RmpCpuSetManagerInsertProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v2; // rbx
  int *v4; // r15
  char **v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  char *Heap; // r8
  char v11; // cl
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // edi
  __int64 v16; // rbp
  char *v17; // r11
  _QWORD *v18; // r9
  __int64 v19; // rdx
  char *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+8h]
  __int64 v22; // [rsp+50h] [rbp+8h]

  v2 = (unsigned __int64)a1 + 72;
  v4 = (int *)((char *)a1 + 76);
  v5 = (char **)((char *)a1 + 80);
  v6 = *((_DWORD *)a1 + 19);
  v21 = *((_QWORD *)a2 + 1) & (-1LL << (v6 & 0x1F));
  v7 = *((_QWORD *)a1 + 10);
  v8 = (37
      * (BYTE6(v21)
       + 37
       * (BYTE5(v21)
        + 37
        * (BYTE4(v21)
         + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
      + HIBYTE(v21)) & ((v6 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = a2;
  ++*(_DWORD *)v2;
  v9 = 2 * ((unsigned int)*v4 >> 5);
  if ( *(_DWORD *)v2 >= (unsigned int)v9 )
  {
    if ( (unsigned int)v9 < 4 )
      v9 = 4LL;
    Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v9);
    if ( Heap )
    {
      if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v9) = (unsigned int)v9 >> 1;
        }
        while ( (_DWORD)v9 );
        v9 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v9 > 0x4000000 )
        v9 = 0x4000000LL;
      v12 = v2 | 1;
      v13 = (unsigned int)v9;
      if ( Heap > &Heap[8 * v9] )
        v13 = 0LL;
      if ( v13 )
        memset64(Heap, v12, v13);
      v14 = *v4;
      v15 = 0;
      v16 = -1LL << (*(_BYTE *)v4 & 0x1F);
      if ( (*v4 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v17 = *v5;
          while ( 1 )
          {
            v18 = *(_QWORD **)&v17[8 * v15];
            if ( ((unsigned __int8)v18 & 1) != 0 )
              break;
            *(_QWORD *)&v17[8 * v15] = *v18;
            v22 = v16 & v18[1];
            v19 = (37
                 * (BYTE6(v22)
                  + 37
                  * (BYTE5(v22)
                   + 37
                   * (BYTE4(v22)
                    + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                 + HIBYTE(v22)) & (unsigned int)(v9 - 1);
            *v18 = *(_QWORD *)&Heap[8 * v19];
            *(_QWORD *)&Heap[8 * v19] = v18;
          }
          v14 = *v4;
          ++v15;
        }
        while ( v15 < (unsigned int)*v4 >> 5 );
      }
      v20 = *v5;
      *v5 = Heap;
      *v4 = (32 * v9) | v14 & 0x1F;
      if ( v20 )
        HampFreeHeap(v20);
    }
  }
}
