/*
 * XREFs of sub_140008540 @ 0x140008540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 */

__int64 __fastcall sub_140008540(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 v2; // r10
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    v2 = sub_140002350((unsigned __int8 *)&dword_140019AC4);
    v3 = 0;
    if ( qword_140019AD4 )
      v3 = sub_140002350((unsigned __int8 *)&dword_140019AD0);
    if ( ((v2 | v3) & 0x10) != 0 )
    {
      sub_140001A70(&dword_140019AC4, 16LL);
      if ( qword_140019AD4 )
        sub_140001A70(&dword_140019AD0, 16LL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}
