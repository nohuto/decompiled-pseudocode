/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x1407E974C
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 __fastcall MiConvertInitialMemoryBlock(__int64 a1, __int64 a2)
{
  int v2; // edi
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // rdx

  v2 = 1;
  if ( *(_DWORD *)a2 > 1u )
  {
    v5 = (_QWORD *)(a2 + 32);
    v6 = (_QWORD *)(a2 + 16);
    v7 = (unsigned int)(*(_DWORD *)a2 - 1);
    do
    {
      v8 = v2 + 1;
      v9 = *v6 + v6[1];
      v6 += 2;
      v10 = *v5 == v9;
      v5 += 2;
      if ( v10 )
        v8 = v2;
      v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  result = MiAllocatePool(0x40uLL, 16 * ((unsigned int)(v2 - 1) + 3LL), 1817013581);
  if ( result )
  {
    v12 = result + 16;
    *(_QWORD *)(result + 8) = 1LL;
    *(_DWORD *)(result + 16) = v2;
    v13 = 0;
    *(_QWORD *)result = a1;
    v14 = 0;
    *(_QWORD *)(result + 24) = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)a2 )
    {
      while ( v14 )
      {
        v15 = v14;
        if ( *(_QWORD *)(a2 + 16LL * v14 + 16) != *(_QWORD *)(a2 + 16LL * (v14 - 1) + 16)
                                                + *(_QWORD *)(a2 + 16LL * (v14 - 1) + 24) )
          goto LABEL_12;
        *(_QWORD *)(v12 + 16LL * (v13 - 1) + 24) += *(_QWORD *)(a2 + 16LL * v14 + 24);
LABEL_13:
        if ( ++v14 >= *(_DWORD *)a2 )
          goto LABEL_14;
      }
      v15 = 0LL;
LABEL_12:
      v16 = 2 * v15;
      v17 = 2LL * v13++;
      *(_QWORD *)(v12 + 8 * v17 + 16) = *(_QWORD *)(a2 + 8 * v16 + 16);
      *(_QWORD *)(v12 + 8 * v17 + 24) = *(_QWORD *)(a2 + 8 * v16 + 24);
      goto LABEL_13;
    }
LABEL_14:
    result += 16LL;
  }
  return result;
}
