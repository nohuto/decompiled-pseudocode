/*
 * XREFs of HHOSTEDAPPMANAGERCONTEXT_rundown @ 0x1800FEBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HHOSTEDAPPMANAGERCONTEXT_rundown(void *a1)
{
  if ( (unsigned int)IsHHostEdappManagerContextRundownSupported() )
    HHOSTEDAPPMANAGERCONTEXTRundown(a1);
}
