/*
 * XREFs of HalpMceRecoveryMemoryErrorAmd @ 0x140552524
 * Callers:
 *     HalpMceRecoveryMemoryError @ 0x140552500 (HalpMceRecoveryMemoryError.c)
 * Callees:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1405484A0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceMemoryErrorRecovery @ 0x140552270 (HalpMceMemoryErrorRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryErrorAmd(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // r9d
  int v8; // eax

  v2 = 0;
  v3 = 0LL;
  v4 = -1073741637;
  v5 = *(_QWORD *)(a1 + 20);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = ((unsigned int)v5 >> 1) & 1;
  if ( !v7 )
  {
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 8u;
    return (unsigned int)-1073741823;
  }
  if ( (v6 & 0x80000000000LL) == 0 && (v5 & 1) != 0 )
    goto LABEL_17;
  if ( (v6 & 0x400000000000000LL) != 0 )
  {
    v2 = 1;
    v3 = *(_QWORD *)(a1 + 48) & ~((1LL << (HIBYTE(*(_QWORD *)(a1 + 48)) & 0x3F)) - 1) & 0xFFFFFFFFFFFFFFLL;
  }
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v4 = HalpHvMceConsumedMemoryErrorRecovery(*(unsigned int *)(a1 + 16), v3, v6, v7, v5 & 1);
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)a1 >= 3u )
        *(_DWORD *)(a1 + 276) |= 2u;
      return (unsigned int)v4;
    }
  }
  v8 = HalpMceMemoryErrorRecovery(1, v2, v3);
  v4 = v8;
  if ( v8 < 0 && *(_DWORD *)a1 >= 3u )
    *(_DWORD *)(a1 + 272) |= 0x10u;
  if ( v8 == -1073741637 )
  {
LABEL_17:
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
  }
  return (unsigned int)v4;
}
