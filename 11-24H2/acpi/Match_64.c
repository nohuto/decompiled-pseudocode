/*
 * XREFs of Match_64 @ 0x140041A60
 * Callers:
 *     Match @ 0x140041A20 (Match.c)
 * Callees:
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     MatchData_64 @ 0x140041BC0 (MatchData_64.c)
 */

__int64 __fastcall Match_64(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int *v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "PIIIII");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(unsigned int **)(v4 + 32);
    v13 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    v6 = *(_DWORD *)(v4 + 216);
    while ( 1 )
    {
      FreeDataBuffs((__int64)&v13, 1u);
      if ( v6 >= *v5 )
        goto LABEL_9;
      v7 = DupObjData(gpheapGlobal, (__int64)&v13, (__int64)&v5[8 * v6 + 2 + 2 * v6]);
      v3 = v7;
      LODWORD(v8) = v7;
      if ( !v7
        && WORD1(v13) == 1
        && (unsigned __int8)MatchData_64(
                              v14,
                              *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
                              *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL),
                              v7,
                              v13,
                              *((_QWORD *)&v13 + 1))
        && (unsigned __int8)MatchData_64(
                              v9,
                              *(unsigned int *)(v10 + 136),
                              *(_QWORD *)(v10 + 176),
                              v8,
                              v13,
                              *((_QWORD *)&v13 + 1)) )
      {
        break;
      }
      ++v6;
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 != -1072431100 )
          goto LABEL_13;
LABEL_9:
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
        v11 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
        v3 = 0;
        goto LABEL_12;
      }
    }
    v11 = v6;
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
LABEL_12:
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = v11;
LABEL_13:
    FreeDataBuffs((__int64)&v13, 1u);
  }
  return v3;
}
