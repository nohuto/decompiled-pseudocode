/*
 * XREFs of FreeData @ 0x14000E570
 * Callers:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     FreeData @ 0x14000E570 (FreeData.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     FreeData @ 0x14000E570 (FreeData.c)
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 */

__int64 __fastcall FreeData(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_WORD *)(a1 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(_DWORD **)(a1 + 32));
    FreeObjData(a1);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
