/*
 * XREFs of ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AA6EC
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AA4FC (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AB334 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bTextToPath(STROBJ *this, struct EPATHOBJ *a2)
{
  if ( ((__int64)this[4].pwszOrg & 0x1400) != 0 )
    return ESTROBJ::bLinkedTextToPath(this, a2);
  else
    return ESTROBJ::bTextToPathWorkhorse(this, a2);
}
