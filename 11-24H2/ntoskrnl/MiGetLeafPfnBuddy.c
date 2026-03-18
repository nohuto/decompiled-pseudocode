/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14043A990
 * Callers:
 *     MiLockOwnedProtoPage @ 0x1402158F0 (MiLockOwnedProtoPage.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiGetPfnPidSafe @ 0x140309854 (MiGetPfnPidSafe.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140414A8C (MiInitializeLargeMdlLeafPfns.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
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
