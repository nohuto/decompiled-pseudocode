/*
 * XREFs of EtwEventEnabled @ 0x1800CC3C0
 * Callers:
 *     EtwEventWriteEndScenario @ 0x1800CC080 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CC1C0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwEventEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // cl

  if ( !a2 )
    return 0;
  v2 = 0LL;
  v3 = ((unsigned int)a1 >> 1) & 7;
  v4 = qword_1801D02A0[v3];
  if ( ((v4 != 0 && (unsigned int)a1 >> 4 < dword_18019C7E0[v3]) & (unsigned __int8)a1) == 0 )
    return 0;
  v6 = (unsigned __int64)(unsigned int)a1 >> 4;
  if ( (*(_QWORD *)(v4 + 8 * v6) & 1) == 0 )
    v2 = *(_QWORD *)(v4 + 8 * v6);
  if ( v2
    && WORD2(a1) == *(_WORD *)(v2 + 84)
    && ((v7 = *(_QWORD *)(a2 + 8), *(_BYTE *)(v2 + 116))
     && ((v8 = *(_BYTE *)(v2 + 117), *(_BYTE *)(a2 + 4) <= v8) || !v8)
     && ((*(_BYTE *)(v2 + 112) & 0x40) != 0 && !v7
      || (v7 & *(_QWORD *)(v2 + 104)) != 0 && (v7 & *(_QWORD *)(v2 + 96)) == *(_QWORD *)(v2 + 96))
     || *(_BYTE *)(v2 + 236)
     && ((v9 = *(_BYTE *)(v2 + 237), *(_BYTE *)(a2 + 4) <= v9) || !v9)
     && ((*(_BYTE *)(v2 + 232) & 0x40) != 0 && !v7
      || (v7 & *(_QWORD *)(v2 + 224)) != 0 && (v7 & *(_QWORD *)(v2 + 216)) == *(_QWORD *)(v2 + 216))) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
