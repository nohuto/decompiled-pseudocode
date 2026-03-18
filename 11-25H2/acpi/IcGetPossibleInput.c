/*
 * XREFs of IcGetPossibleInput @ 0x140096758
 * Callers:
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400A9FFC (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400AA210 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400BF404 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetPossibleInput(unsigned int a1, __int64 a2, _BYTE *a3)
{
  __int64 i; // rdx
  unsigned int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  char v7; // al
  int v8; // eax

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 )
    {
      v4 = *(_DWORD *)(i + 16);
      if ( v4 <= a1 && *(_DWORD *)(i + 20) >= a1 )
        break;
    }
  }
  v5 = 200LL * (a1 - v4);
  if ( !*(_DWORD *)(v5 + i + 36) )
    return 3221226021LL;
  if ( a3 )
  {
    v6 = *(_DWORD *)(v5 + i + 148);
    if ( v6 == 3 )
    {
      v7 = 10;
    }
    else if ( v6 == 4 )
    {
      v7 = 8;
    }
    else
    {
      v7 = v6 != 2 ? 0 : 2;
    }
    *a3 = (*(_DWORD *)(v5 + i + 152) == 0) | v7;
  }
  v8 = *(_DWORD *)(v5 + i + 40);
  if ( v8 && v8 == *(_DWORD *)(v5 + i + 32) && *(_DWORD *)(v5 + i + 44) == *(_DWORD *)(v5 + i + 36) )
    return 263LL;
  else
    return *(_BYTE *)(v5 + i + 224) != 0 ? 0x107 : 0;
}
