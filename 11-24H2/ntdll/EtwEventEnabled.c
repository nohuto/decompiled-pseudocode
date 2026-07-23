/*
 * XREFs of EtwEventEnabled @ 0x1800CCCD0
 * Callers:
 *     EtwEventWriteEndScenario @ 0x1800CC990 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CCAD0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned __int64 v6; // r11
  unsigned __int64 Keyword; // r8
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // cl

  if ( !EventDescriptor )
    return 0;
  v2 = 0LL;
  v3 = ((unsigned int)RegHandle >> 1) & 7;
  v4 = qword_1801CD2A0[v3];
  if ( ((v4 != 0 && (unsigned int)RegHandle >> 4 < dword_1801997F0[v3]) & (unsigned __int8)RegHandle) == 0 )
    return 0;
  v6 = (unsigned __int64)(unsigned int)RegHandle >> 4;
  if ( (*(_QWORD *)(v4 + 8 * v6) & 1) == 0 )
    v2 = *(_QWORD *)(v4 + 8 * v6);
  if ( v2
    && WORD2(RegHandle) == *(_WORD *)(v2 + 84)
    && ((Keyword = EventDescriptor->Keyword, *(_BYTE *)(v2 + 116))
     && ((v8 = *(_BYTE *)(v2 + 117), EventDescriptor->Level <= v8) || !v8)
     && ((*(_BYTE *)(v2 + 112) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v2 + 104)) != 0 && (Keyword & *(_QWORD *)(v2 + 96)) == *(_QWORD *)(v2 + 96))
     || *(_BYTE *)(v2 + 236)
     && ((v9 = *(_BYTE *)(v2 + 237), EventDescriptor->Level <= v9) || !v9)
     && ((*(_BYTE *)(v2 + 232) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v2 + 224)) != 0 && (Keyword & *(_QWORD *)(v2 + 216)) == *(_QWORD *)(v2 + 216))) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
