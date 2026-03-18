/*
 * XREFs of MiGetLeafPfnBuddy @ 0x140437F30
 * Callers:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiLockOwnedProtoPage @ 0x140231FF0 (MiLockOwnedProtoPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14041753C (MiInitializeLargeMdlLeafPfns.c)
 *     MiGetPfnPidSafe @ 0x140437E8C (MiGetPfnPidSafe.c)
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
