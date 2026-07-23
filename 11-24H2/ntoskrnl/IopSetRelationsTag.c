/*
 * XREFs of IopSetRelationsTag @ 0x140A83EAC
 * Callers:
 *     PnpInvalidateRelationsInList @ 0x1409BCC04 (PnpInvalidateRelationsInList.c)
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetRelationsTag(int **a1, __int64 a2)
{
  int *v2; // r8
  unsigned int v3; // r10d
  int v5; // r9d
  int v6; // ecx
  _QWORD *i; // rax

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  v6 = **a1;
  for ( i = v2 + 4; ; i += 3 )
  {
    if ( v5 >= v6 )
      return (unsigned int)-1073741810;
    if ( a2 == *i )
      break;
    ++v5;
  }
  if ( v5 == -1 )
    return (unsigned int)-1073741810;
  if ( (v2[6 * v5 + 8] & 1) != 0 )
    --v2[2];
  v2[6 * v5 + 8] |= 1u;
  ++(*a1)[2];
  return v3;
}
