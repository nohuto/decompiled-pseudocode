/*
 * XREFs of XmJxxOp @ 0x1404A8C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XmJxxOp(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 108);
  switch ( v1 >> 1 )
  {
    case 0u:
      v5 = *(_DWORD *)(a1 + 16) >> 11;
      goto LABEL_11;
    case 1u:
      v5 = *(_DWORD *)(a1 + 16);
LABEL_11:
      result = 1LL;
      v4 = v5 & 1;
      goto LABEL_12;
    case 2u:
      v5 = *(_DWORD *)(a1 + 16) >> 6;
      goto LABEL_11;
    case 3u:
      v5 = *(_DWORD *)(a1 + 16) | (*(_DWORD *)(a1 + 16) >> 6);
      goto LABEL_11;
    case 4u:
      v6 = *(_DWORD *)(a1 + 16);
      goto LABEL_16;
    case 5u:
      v5 = *(_DWORD *)(a1 + 16) >> 2;
      goto LABEL_11;
  }
  result = (v1 >> 1) - 6;
  if ( v1 >> 1 == 6 )
  {
    v6 = *(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 4);
LABEL_16:
    v5 = v6 >> 7;
    goto LABEL_11;
  }
  if ( v1 >> 1 != 7 )
    return result;
  result = 1LL;
  v4 = (*(_DWORD *)(a1 + 16) & 0x40 | ((unsigned int)(*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 4)) >> 1) & 0x40) >> 6;
LABEL_12:
  if ( v4 != (v1 & 1) )
  {
    result = *(unsigned __int16 *)(a1 + 104);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
