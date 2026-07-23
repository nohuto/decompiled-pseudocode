/*
 * XREFs of RtlIsFunctionalityAvailable @ 0x14077CFE0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

unsigned __int8 __fastcall RtlIsFunctionalityAvailable(unsigned int a1)
{
  unsigned __int8 result; // al
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v3; // r8d

  result = 0;
  if ( a1 < 0x80 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    LODWORD(CurrentServerSiloGlobals) = *((_DWORD *)&CurrentServerSiloGlobals[88].Blink + ((unsigned __int64)v3 >> 5));
    return _bittest((const int *)&CurrentServerSiloGlobals, v3 & 0x1F);
  }
  return result;
}
