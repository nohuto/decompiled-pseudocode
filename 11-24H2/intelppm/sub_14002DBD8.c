/*
 * XREFs of sub_14002DBD8 @ 0x14002DBD8
 * Callers:
 *     sub_14002D930 @ 0x14002D930 (sub_14002D930.c)
 *     sub_14002F0C0 @ 0x14002F0C0 (sub_14002F0C0.c)
 *     sub_140039008 @ 0x140039008 (sub_140039008.c)
 *     sub_14003FC70 @ 0x14003FC70 (sub_14003FC70.c)
 *     sub_140045200 @ 0x140045200 (sub_140045200.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14002DBD8(__int64 a1)
{
  char v1; // r9
  int v2; // eax
  int v3; // eax

  v1 = 1;
  if ( !*(_BYTE *)a1 )
    goto LABEL_12;
  if ( *(_BYTE *)a1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      return 0;
    v2 = *(_DWORD *)(a1 + 4);
    if ( (v2 & 0xFFFF0000) != 0 || !v2 )
      return 0;
LABEL_12:
    v3 = *(unsigned __int8 *)(a1 + 1);
    if ( !(_BYTE)v3 || v3 + (unsigned int)*(unsigned __int8 *)(a1 + 2) > *(unsigned __int8 *)(a1 + 3) )
      return 0;
    return v1;
  }
  if ( *(_BYTE *)a1 != 2 && *(_BYTE *)a1 != 3 && *(_BYTE *)a1 != 4 && *(_BYTE *)a1 != 10 && *(_BYTE *)a1 != 127 )
    return 0;
  return v1;
}
