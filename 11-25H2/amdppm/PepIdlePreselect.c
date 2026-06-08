/*
 * XREFs of PepIdlePreselect @ 0x14000B4D0
 * Callers:
 *     <none>
 * Callees:
 *     SelectPreferredIdleState @ 0x14000A76C (SelectPreferredIdleState.c)
 */

__int64 __fastcall PepIdlePreselect(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  bool v8; // sf
  bool v9; // of

  SelectPreferredIdleState(a1, a2);
  if ( *(_DWORD *)(a1 + 16) + 1 == *(unsigned __int8 *)(a1 + 20) )
    v4 = -1;
  else
    v4 = *(_DWORD *)(a1 + 12);
  v5 = *(unsigned __int8 *)(a2 + 46);
  if ( (_BYTE)v5 )
  {
    v6 = (unsigned __int8)v4;
    v7 = v5 - 1;
    v9 = __OFSUB__((unsigned __int8)v4, v7);
    v8 = (int)((unsigned __int8)v4 - v7) < 0;
    v4 = v7;
    if ( v8 != v9 )
      return v6;
  }
  return v4;
}
