/*
 * XREFs of ValidFilterExpression @ 0x1404818E0
 * Callers:
 *     ValidFilter @ 0x1409F2A20 (ValidFilter.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 */

_BOOL8 __fastcall ValidFilterExpression(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)a1 == 1 )
      return 1;
    if ( *(_DWORD *)a1 == 65537 )
      return 1;
    v1 = *(_DWORD *)(a1 + 40);
    if ( !v1 )
      return 1;
    v2 = v1 - 1;
    if ( !v2
      || (unsigned int)(v2 - 18) >= 2
      && *(_QWORD *)(a1 + 48)
      && !(unsigned int)PnpValidatePropertyData(*(STRSAFE_PCNZWCH *)(a1 + 48), *(_DWORD *)(a1 + 44)) )
    {
      return 1;
    }
  }
  return result;
}
