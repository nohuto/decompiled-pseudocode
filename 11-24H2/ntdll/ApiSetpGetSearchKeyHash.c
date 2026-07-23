/*
 * XREFs of ApiSetpGetSearchKeyHash @ 0x180134650
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180133864 (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180133B80 (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetpResolveHost @ 0x180133EAC (ApiSetpResolveHost.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18013489C (ApiSetpSearchForSectionIndex_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpGetSearchKeyHash(__int64 a1, char a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned __int8 *v5; // r11
  unsigned int v8; // ebx
  unsigned __int16 v9; // ax
  unsigned int v10; // edx
  __int64 v11; // r8
  bool v12; // cl
  unsigned __int8 v13; // cl

  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 16));
  v8 = 0;
  if ( a2 )
    v9 = *(_WORD *)(a1 + 20);
  else
    v9 = *(_WORD *)(a1 + 18);
  v10 = 0;
  if ( a4 )
  {
    v10 = 4;
    v5 += (-(__int64)(*(_BYTE *)(a1 + 10) != 0) & 4) + 4;
  }
  if ( v10 < v9 )
  {
    v11 = (*(_BYTE *)(a1 + 10) != 0) + 1LL;
    do
    {
      v12 = 0;
      if ( !a3 )
        goto LABEL_16;
      if ( *(_WORD *)(a1 + 26) && v10 >= *(unsigned __int16 *)(a1 + 26) )
        v12 = v10 <= *(unsigned __int16 *)(a1 + 28);
      if ( (!*(_WORD *)(a1 + 30) || v10 < *(unsigned __int16 *)(a1 + 30) || v10 > *(unsigned __int16 *)(a1 + 32))
        && !v12 )
      {
LABEL_16:
        v13 = *v5;
        if ( *v5 >= 0x41u && v13 <= 0x5Au )
          v13 += 32;
        v8 = v8 * a5 + v13;
      }
      v5 += v11;
      ++v10;
    }
    while ( v10 < v9 );
  }
  return v8;
}
