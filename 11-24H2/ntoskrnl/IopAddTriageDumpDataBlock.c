/*
 * XREFs of IopAddTriageDumpDataBlock @ 0x1403E6B5C
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x140590700 (IopAddRunTimeTriageDataBlocks.c)
 * Callees:
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 */

char __fastcall IopAddTriageDumpDataBlock(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v9; // rdx
  unsigned int i; // ecx
  unsigned int v11; // r10d
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 *v15; // rcx

  v6 = a4;
  if ( a5 - 1 > 0x3FFFE || !(unsigned __int8)IopIsAddressRangeValid(a4, a5) )
    return 0;
  v9 = a5 + v6;
  for ( i = 0; i < a1; ++i )
  {
    v11 = 0;
    v12 = *(unsigned __int64 **)(a2 + 16LL * i + 8);
    while ( v11 < *(_DWORD *)(a2 + 16LL * i) )
    {
      v13 = v12[1];
      if ( v6 < v13 && v9 > *v12 )
      {
        if ( v6 < *v12 )
        {
          if ( v9 <= v13 )
            v9 = *v12;
        }
        else
        {
          if ( v9 <= v13 )
            return 1;
          v6 = v12[1];
        }
      }
      ++v11;
      v12 += 2;
    }
  }
  if ( !a3 )
    return 0;
  v14 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  v15 = (unsigned __int64 *)(*((_QWORD *)a3 + 1) + 16LL * v14);
  *a3 = v14 + 1;
  *v15 = v6;
  v15[1] = v9;
  return 1;
}
