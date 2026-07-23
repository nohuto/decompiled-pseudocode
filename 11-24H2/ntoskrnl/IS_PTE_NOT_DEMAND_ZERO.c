/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x140269980
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiEncodeProtoFill @ 0x140269858 (MiEncodeProtoFill.c)
 *     MiAbandonPrivatePfn @ 0x140269D68 (MiAbandonPrivatePfn.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140298E70 (MiDecommitHandlePageFileFormatPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiPrefetchJumpVad @ 0x1404C7128 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140E2DCC0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140E2DCC0;
  if ( (a1 & 0x400) != 0 || (a1 & 0x800) != 0 )
    return 1LL;
  else
    return (a1 >> 2) & 1;
}
