/*
 * XREFs of ApiSetpGetSearchKeyHash @ 0x140660EA8
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x14065F40C (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetpResolveHost @ 0x14065FB18 (ApiSetpResolveHost.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14066111C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140661BC4 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 *     ApiSetpInsertHashEntry @ 0x140662154 (ApiSetpInsertHashEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpGetSearchKeyHash(__int64 a1, char a2, char a3, char a4, unsigned __int8 a5)
{
  unsigned __int8 *v5; // r11
  unsigned int v8; // ebx
  unsigned __int16 v9; // ax
  unsigned int v10; // edi
  unsigned int v11; // edx
  __int64 v12; // r8
  bool v13; // cl
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl

  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 16));
  v8 = 0;
  if ( a2 )
    v9 = *(_WORD *)(a1 + 20);
  else
    v9 = *(_WORD *)(a1 + 18);
  v10 = v9;
  v11 = 0;
  if ( a4 )
  {
    v11 = 4;
    v5 += (-(__int64)(*(_BYTE *)(a1 + 10) != 0) & 4) + 4;
  }
  if ( v11 < v9 )
  {
    v12 = (*(_BYTE *)(a1 + 10) != 0) + 1LL;
    do
    {
      v13 = 0;
      if ( !a3 )
        goto LABEL_16;
      v14 = *(unsigned __int16 *)(a1 + 26);
      if ( (_WORD)v14 && v11 >= v14 )
        v13 = v11 <= *(unsigned __int16 *)(a1 + 28);
      v15 = *(unsigned __int16 *)(a1 + 30);
      if ( (!(_WORD)v15 || v11 < v15 || v11 > *(unsigned __int16 *)(a1 + 32)) && !v13 )
      {
LABEL_16:
        v16 = *v5;
        v17 = *v5;
        if ( *v5 >= 0x41u && v16 <= 0x5Au )
          v17 = v16 + 32;
        v8 = v8 * a5 + v17;
      }
      v5 += v12;
      ++v11;
    }
    while ( v11 < v10 );
  }
  return v8;
}
