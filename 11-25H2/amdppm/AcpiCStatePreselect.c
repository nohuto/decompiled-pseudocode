/*
 * XREFs of AcpiCStatePreselect @ 0x140005340
 * Callers:
 *     <none>
 * Callees:
 *     SelectPreferredIdleState @ 0x14000A76C (SelectPreferredIdleState.c)
 */

__int64 __fastcall AcpiCStatePreselect(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r11
  _DWORD *v5; // rdx
  unsigned int v6; // r9d
  __int64 v7; // r8
  unsigned int v8; // r10d
  bool v9; // zf

  SelectPreferredIdleState();
  v4 = *(_BYTE *)(a2 + 46);
  v5 = (_DWORD *)(a1 + 16);
  v6 = -1;
  if ( v4 )
  {
    LODWORD(v7) = *v5;
    v8 = *(_DWORD *)(a1 + 12);
    if ( *v5 )
    {
      do
      {
        if ( *(_BYTE *)(88LL * v8 + a1 + 130) <= v4 )
          break;
        v9 = (_DWORD)v7 == 1;
        v7 = (unsigned int)(v7 - 1);
        v8 = *(unsigned __int8 *)(v7 + a1 + 21);
      }
      while ( !v9 );
    }
    *(_DWORD *)(a1 + 12) = v8;
    *v5 = v7;
  }
  if ( *v5 + 1 != *(unsigned __int8 *)(a1 + 20) )
    return *(unsigned int *)(a1 + 12);
  return v6;
}
