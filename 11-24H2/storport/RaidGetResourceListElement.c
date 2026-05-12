/*
 * XREFs of RaidGetResourceListElement @ 0x14007AC04
 * Callers:
 *     RaidGetResourceListInterrupt @ 0x14007AC88 (RaidGetResourceListInterrupt.c)
 *     RaidTranslateResourceListAddress @ 0x14007ADAC (RaidTranslateResourceListAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetResourceListElement(
        _QWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v6 = *a1;
  v7 = a2;
  *a3 = *(_DWORD *)(*a1 + 4LL);
  result = *(unsigned int *)(v6 + 8);
  *a4 = result;
  if ( a5 )
  {
    *a4 = result;
    v9 = 20LL * a2;
    result = 20 * v7 + v6 + 20;
    *a5 = result;
  }
  else
  {
    v9 = 20LL * a2;
  }
  if ( a6 )
  {
    v10 = a1[1];
    *a3 = *(_DWORD *)(v10 + 4);
    *a4 = *(_DWORD *)(v10 + 8);
    result = v9 + v10 + 20;
    *a6 = result;
  }
  return result;
}
