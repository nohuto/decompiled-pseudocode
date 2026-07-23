/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14042D1D0
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiGetPfnPidSafe @ 0x140313734 (MiGetPfnPidSafe.c)
 *     MiLockOwnedProtoPage @ 0x1403354A0 (MiLockOwnedProtoPage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
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
