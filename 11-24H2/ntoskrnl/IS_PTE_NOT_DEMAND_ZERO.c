/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140289270 (MiDecommitHandlePageFileFormatPte.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiEncodeProtoFill @ 0x1402C6470 (MiEncodeProtoFill.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiAbandonPrivatePfn @ 0x14036D268 (MiAbandonPrivatePfn.c)
 *     MiPrefetchJumpVad @ 0x1404CDD58 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068C850 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140E2DB80 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2DB80;
  if ( (a1 & 0x400) != 0 || (a1 & 0x800) != 0 )
    return 1LL;
  else
    return (a1 >> 2) & 1;
}
