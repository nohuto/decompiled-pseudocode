/*
 * XREFs of Match @ 0x140041A20
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     Match_64 @ 0x140041A60 (Match_64.c)
 *     Match_32 @ 0x140041C14 (Match_32.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return Match_64(a1, a2);
  else
    return Match_32(a1, a2);
}
