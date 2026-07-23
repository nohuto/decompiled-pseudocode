/*
 * XREFs of KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14073AE58
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2C308 (KiInitializeDpcRuntimeHistoryHashTables.c)
 * Callees:
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KiDpcRuntimeHistoryHashTableAllocate @ 0x1404A4AE4 (KiDpcRuntimeHistoryHashTableAllocate.c)
 */

__int64 __fastcall KiInitializeSingleDpcRuntimeHistoryHashTable(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  struct _KDPC *v4; // rax
  struct _KDPC *v5; // rbp
  char *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // r15
  _QWORD *v11; // r10
  __int64 v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx
  __int64 v15; // [rsp+58h] [rbp+10h]

  v2 = KiDpcRuntimeHistoryHashTableAllocate(0x10uLL);
  if ( !v2 )
    return (unsigned int)-1073741801;
  v4 = (struct _KDPC *)KiDpcRuntimeHistoryHashTableAllocate(0x40uLL);
  v5 = v4;
  if ( v4 )
  {
    KeInitializeDpc(v4, (PKDEFERRED_ROUTINE)KiDpcRuntimeHistoryHashTableCleanupDpcRoutine, 0LL);
    if ( !v5->DpcData )
      v5->Number = *(_DWORD *)(a1 + 36) + 2048;
    *(_DWORD *)v2 = 0;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_DWORD *)(v2 + 4) = 0;
    v6 = (char *)KiDpcRuntimeHistoryHashTableAllocate(0x200uLL);
    if ( v6 )
    {
      if ( (v6 + 512 >= v6 ? 0x40 : 0) != 0 )
        memset64(v6, v2 | 1, v6 + 512 >= v6 ? 0x40 : 0);
      v7 = *(_DWORD *)(v2 + 4);
      v8 = 0LL;
      v9 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (v7 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v10 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v11 = *(_QWORD **)(v10 + 8 * v8);
            if ( ((unsigned __int8)v11 & 1) != 0 )
              break;
            *(_QWORD *)(v10 + 8 * v8) = *v11;
            v15 = v9 & v11[1];
            v12 = (21 * BYTE2(v15)
                 + 29 * BYTE4(v15)
                 + 13 * (_BYTE)v15
                 + 25 * BYTE5(v15)
                 + 9 * (BYTE1(v15) - 3 * BYTE6(v15))
                 - 15 * BYTE3(v15)
                 + HIBYTE(v15)
                 + 15) & 0x3F;
            *v11 = *(_QWORD *)&v6[8 * v12];
            *(_QWORD *)&v6[8 * v12] = v11;
          }
          v7 = *(_DWORD *)(v2 + 4);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < v7 >> 5 );
      }
      v13 = *(struct _PRIVILEGE_SET **)(v2 + 8);
      *(_QWORD *)(v2 + 8) = v6;
      *(_DWORD *)(v2 + 4) = v7 & 0x1F | 0x800;
      if ( v13 )
        CmSiFreeMemory(v13);
      goto LABEL_16;
    }
    if ( *(_DWORD *)(v2 + 4) >= 0x20u )
    {
LABEL_16:
      *(_QWORD *)(a1 + 14352) = v2;
      v3 = 0;
      *(_QWORD *)(a1 + 14360) = v5;
      return v3;
    }
  }
  v3 = -1073741801;
  CmSiFreeMemory((PPRIVILEGE_SET)v2);
  if ( v5 )
    CmSiFreeMemory((PPRIVILEGE_SET)v5);
  return v3;
}
