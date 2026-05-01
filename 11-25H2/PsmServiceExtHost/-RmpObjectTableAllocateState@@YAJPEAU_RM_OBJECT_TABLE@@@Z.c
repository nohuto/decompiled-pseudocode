/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x1800894CC
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800884B4 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180089A68 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char *Heap; // rax
  char v4; // r8
  char *v5; // r9
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r14
  _QWORD *v11; // r11
  __int64 v12; // rdx
  void *v13; // rcx
  int v14; // eax
  __int64 v16; // [rsp+40h] [rbp+8h]

  v2 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 < (unsigned int)v2 )
    goto LABEL_23;
  if ( (unsigned int)v2 < 4 )
    v2 = 4LL;
  Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v2);
  v4 = 0;
  v5 = Heap;
  if ( Heap )
  {
    if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
    {
      v6 = -1;
      do
      {
        ++v6;
        LODWORD(v2) = (unsigned int)v2 >> 1;
      }
      while ( (_DWORD)v2 );
      v2 = (unsigned int)(1 << v6);
    }
    if ( (unsigned int)v2 > 0x4000000 )
      v2 = 0x4000000LL;
    v7 = (unsigned int)v2;
    if ( Heap > &Heap[8 * v2] )
      v7 = 0LL;
    if ( v7 )
      memset64(Heap, a1 | 1, v7);
    v8 = 0;
    v9 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v10 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v11 = *(_QWORD **)(v10 + 8LL * v8);
          if ( ((unsigned __int8)v11 & 1) != 0 )
            break;
          *(_QWORD *)(v10 + 8LL * v8) = *v11;
          v16 = v9 & v11[1];
          v12 = (37
               * (BYTE6(v16)
                + 37
                * (BYTE5(v16)
                 + 37
                 * (BYTE4(v16)
                  + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))
               + HIBYTE(v16)) & (unsigned int)(v2 - 1);
          *v11 = *(_QWORD *)&Heap[8 * v12];
          *(_QWORD *)&Heap[8 * v12] = v11;
        }
        ++v8;
      }
      while ( v8 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v13 = *(void **)(a1 + 8);
    v14 = (32 * v2) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 4) = v14;
    if ( v13 )
      HampFreeHeap(v13);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
LABEL_23:
    v4 = 1;
  return v4 == 0 ? 0xC0000017 : 0;
}
