/*
 * XREFs of ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1401B1BF4
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x140303F08 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     ?bShouldMap@@YAHPEAUFILEVIEW@@0@Z @ 0x1401B1CCC (-bShouldMap@@YAHPEAUFILEVIEW@@0@Z.c)
 */

__int64 __fastcall bMapRoutine(__int64 a1, __int64 a2, int a3)
{
  unsigned int ShouldMap; // edx
  unsigned int v7; // ecx

  ShouldMap = bShouldMap((struct FILEVIEW *)a2, (struct FILEVIEW *)a1);
  if ( ShouldMap )
  {
    if ( a3 == 1 )
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    else
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    v7 = *(_DWORD *)(a1 + 40) ^ (*(_DWORD *)(a2 + 40) ^ *(_DWORD *)(a1 + 40)) & 4 | 1;
    *(_DWORD *)(a1 + 40) = v7;
    *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
    *(_BYTE *)(a1 + 45) = *(_BYTE *)(a2 + 45);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  }
  else
  {
    if ( a3 == 1 )
    {
      --*(_DWORD *)(a1 + 100);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    else
    {
      --*(_DWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v7 = *(_DWORD *)(a1 + 40) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 40) = v7;
  }
  *(_DWORD *)(a1 + 40) = v7 ^ (*(_DWORD *)(a2 + 40) ^ v7) & 2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  return ShouldMap;
}
