/*
 * XREFs of RtlpInsertEnvironmentHashTableEntry @ 0x1800AE9C0
 * Callers:
 *     RtlpScanEnvironment @ 0x1800AE5E0 (RtlpScanEnvironment.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpFindEnvironmentHashEntry @ 0x1800AEC80 (RtlpFindEnvironmentHashEntry.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x1800AF1D8 (RtlpAllocateEnvironmentHashTable.c)
 */

__int64 __fastcall RtlpInsertEnvironmentHashTableEntry(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // r8d
  unsigned __int64 v7; // r14
  _QWORD *v8; // rdx
  char *EnvironmentHashTable; // r11
  char v10; // cl
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r15
  _QWORD **v14; // r10
  _QWORD *v15; // r9
  unsigned __int64 v16; // rcx
  void *v17; // rcx
  int v18; // eax

  if ( RtlpFindEnvironmentHashEntry(a1, a2[2], a2[4]) )
    return 3221225525LL;
  v5 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v5 )
  {
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(8LL * (unsigned int)v5, 0LL);
    if ( EnvironmentHashTable )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v10 = -1;
        do
        {
          ++v10;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v10);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v11 = (unsigned int)v5;
      if ( EnvironmentHashTable > &EnvironmentHashTable[8 * v5] )
        v11 = 0LL;
      if ( v11 )
        memset64(EnvironmentHashTable, a1 | 1, v11);
      v12 = 0;
      v13 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = (_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL * v12);
          while ( 1 )
          {
            v15 = *v14;
            if ( ((unsigned __int8)*v14 & 1) != 0 )
              break;
            *v14 = (_QWORD *)*v15;
            v16 = (((v15[1] & (unsigned __int64)v13) >> 56)
                 + 37
                 * ((unsigned __int8)((v15[1] & (unsigned __int64)v13) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)((v15[1] & (unsigned __int64)v13) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)((v15[1] & (unsigned __int64)v13) >> 32)
                    + 37
                    * ((((_DWORD)v15[1] & (unsigned int)v13) >> 24)
                     + 37
                     * ((unsigned __int8)(((_DWORD)v15[1] & (unsigned int)v13) >> 16)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(v15[1] & v13) >> 8)
                       + 37 * ((unsigned __int8)(v15[1] & v13) + 11623883)))))))) & (unsigned int)(v5 - 1);
            *v15 = *(_QWORD *)&EnvironmentHashTable[8 * v16];
            *(_QWORD *)&EnvironmentHashTable[8 * v16] = v15;
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v17 = *(void **)(a1 + 8);
      v18 = (32 * v5) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = EnvironmentHashTable;
      *(_DWORD *)(a1 + 4) = v18;
      if ( v17 )
        RtlpSysVolFree(v17);
    }
  }
  v6 = *(_DWORD *)(a1 + 4);
  v7 = a2[1] & (-1LL << (v6 & 0x1F));
  result = 0LL;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                + 8
                * ((HIBYTE(v7)
                  + 37
                  * (BYTE6(v7)
                   + 37
                   * (BYTE5(v7)
                    + 37
                    * (BYTE4(v7)
                     + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))) & ((v6 >> 5) - 1)));
  *a2 = *v8;
  *v8 = a2;
  ++*(_DWORD *)a1;
  return result;
}
