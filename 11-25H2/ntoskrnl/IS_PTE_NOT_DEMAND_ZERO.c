/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiAbandonPrivatePfn @ 0x1402CC258 (MiAbandonPrivatePfn.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiEncodeProtoFill @ 0x1402CDF70 (MiEncodeProtoFill.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140382A54 (MiDecommitHandlePageFileFormatPte.c)
 *     MiPrefetchJumpVad @ 0x1404CDF78 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x140680FC0 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x140A58B44 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140E2D940 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2D940;
  if ( (a1 & 0x400) != 0 || (a1 & 0x800) != 0 )
    return 1LL;
  else
    return (a1 >> 2) & 1;
}
