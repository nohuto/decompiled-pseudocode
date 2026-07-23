/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1409DE110
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int64 v2; // r8
  struct _LIST_ENTRY *Blink; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (unsigned int)v2 >= 0x41 )
  {
    if ( (unsigned int)v2 <= 0x5A )
    {
      LOWORD(v2) = v2 + 32;
    }
    else
    {
      Blink = CurrentServerSiloGlobals[75].Blink;
      if ( Blink && (unsigned __int16)v2 >= 0xC0u )
        LOWORD(v2) = *((_WORD *)&Blink->Flink
                     + (v2 & 0xF)
                     + *((unsigned __int16 *)&Blink->Flink
                       + ((unsigned __int8)v2 >> 4)
                       + (unsigned int)*((unsigned __int16 *)&Blink->Flink + (v2 >> 8))))
                   + v2;
    }
  }
  return v2;
}
