/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140C1A8B0
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140C1AD0C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1404130F8 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x1407341FC (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140E61B48 = 0LL;
  qword_140E61B58 = 0xFFFFFFFFLL;
  xmmword_140E61FA0 = 0LL;
  HIDWORD(xmmword_140E61B48) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140E61FA0) = -1;
  xmmword_140E61B28 = 0LL;
  qword_140E61FB0 = 0LL;
  xmmword_140E61B38 = 0LL;
  xmmword_140E61F80 = 0LL;
  xmmword_140E61F90 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140E61FF0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140E61B10, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140E61B00, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140E61B28 = word_140E61FF0;
          *((_QWORD *)&xmmword_140E61B28 + 1) = word_140E61B00;
          HIDWORD(xmmword_140E61B48) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140E61B58) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140E61F80 = word_140E61FF0;
          *((_QWORD *)&xmmword_140E61F80 + 1) = word_140E61B10;
          HIDWORD(xmmword_140E61FA0) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
