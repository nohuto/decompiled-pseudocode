/*
 * XREFs of PnpBiosScanForGpioInterrupt @ 0x1400522D4
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x14005224C (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForGpioInterrupt(char *a1, unsigned int a2)
{
  char *v2; // r10
  char *i; // r9
  char v4; // r8
  unsigned __int16 v5; // cx

  v2 = a1;
  if ( a2 >= 0x18 )
  {
    for ( i = a1; ; i = a1 )
    {
      v4 = *a1;
      if ( *a1 < 0 )
      {
        v5 = *(_WORD *)(i + 1) + 3;
      }
      else
      {
        v5 = (v4 & 7) + 1;
        v4 &= 0x78u;
      }
      if ( v4 == 120 )
        break;
      a1 = &i[v5];
      if ( a1 >= &v2[a2] )
        break;
      if ( v4 == -116 && !i[4] )
        return 1;
    }
  }
  return 0;
}
