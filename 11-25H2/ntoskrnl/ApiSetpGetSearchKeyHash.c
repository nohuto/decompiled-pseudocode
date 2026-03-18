/*
 * XREFs of ApiSetpGetSearchKeyHash @ 0x1406563B8
 * Callers:
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0 (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpInsertHashEntry @ 0x1406575D8 (ApiSetpInsertHashEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpGetSearchKeyHash(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int8 *v3; // r10
  unsigned __int16 v4; // r9
  int v5; // ebx
  __int64 v6; // r11
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl

  v2 = 0;
  v3 = (unsigned __int8 *)(*(_QWORD *)a2 + *(unsigned __int16 *)(a2 + 16));
  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    v4 = *(_WORD *)(a2 + 20);
  else
    v4 = *(_WORD *)(a2 + 18);
  if ( v4 )
  {
    v5 = *(unsigned __int8 *)(a1 + 10);
    v6 = v4;
    v7 = (*(_BYTE *)(a2 + 10) != 0) + 1LL;
    do
    {
      v8 = *v3;
      v9 = *v3;
      if ( *v3 >= 0x41u && v8 <= 0x5Au )
        v9 = v8 + 32;
      v3 += v7;
      v2 = v2 * v5 + v9;
      --v6;
    }
    while ( v6 );
  }
  return v2;
}
