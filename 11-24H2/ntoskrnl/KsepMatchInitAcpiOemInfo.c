/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140C2B9B0
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140C2BE0C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x14074021C (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140E61D88 = 0LL;
  qword_140E61D98 = 0xFFFFFFFFLL;
  xmmword_140E621E0 = 0LL;
  HIDWORD(xmmword_140E61D88) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140E621E0) = -1;
  xmmword_140E61D68 = 0LL;
  qword_140E621F0 = 0LL;
  xmmword_140E61D78 = 0LL;
  xmmword_140E621C0 = 0LL;
  xmmword_140E621D0 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0LL, 0LL);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140E62230, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140E61D50, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140E61D40, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140E61D68 = word_140E62230;
          *((_QWORD *)&xmmword_140E61D68 + 1) = word_140E61D40;
          HIDWORD(xmmword_140E61D88) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140E61D98) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140E621C0 = word_140E62230;
          *((_QWORD *)&xmmword_140E621C0 + 1) = word_140E61D50;
          HIDWORD(xmmword_140E621E0) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
