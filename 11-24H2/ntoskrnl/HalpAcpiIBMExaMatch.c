/*
 * XREFs of HalpAcpiIBMExaMatch @ 0x140C17200
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpAcpiIBMVigilMatch @ 0x140C17240 (HalpAcpiIBMVigilMatch.c)
 */

char HalpAcpiIBMExaMatch()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8

  v0 = HalpInterruptModel();
  if ( v0 == 1 )
  {
    LOBYTE(v0) = *(_BYTE *)(v1 + 19) - 48;
    if ( (unsigned __int8)v0 <= 9u )
    {
      LOBYTE(v0) = *(_BYTE *)(v1 + 20) - 48;
      if ( (unsigned __int8)v0 <= 9u )
        LOBYTE(v0) = HalpAcpiIBMVigilMatch(v2);
    }
  }
  return v0;
}
