/*
 * XREFs of RtlUShortAdd @ 0x14046B240
 * Callers:
 *     PspSiloInitializeSystemRootSymlink @ 0x1407732F8 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x14077FEA0 (RtlAddResourceAttributeAce.c)
 *     CmpIsFileInSystemConfig @ 0x1407E1C10 (CmpIsFileInSystemConfig.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6620 (CmpDeleteCorruptedLogfile.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B190 (AslpPathWildcardAllocMatchNode.c)
 *     RtlpCreateServerAcl @ 0x14085A9B8 (RtlpCreateServerAcl.c)
 *     IopAllocateUnicodeString @ 0x140A0D4B0 (IopAllocateUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8BE6C (_SysCtxRegOpenCurrentUserKey.c)
 *     SepAddTokenOriginClaim @ 0x140A97DE0 (SepAddTokenOriginClaim.c)
 *     VfTargetDriversAllocateFullName @ 0x140B8B234 (VfTargetDriversAllocateFullName.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B9A6A0 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140B9A73C (VfSuspectDriversAllocateEntryEx.c)
 *     BgpBcInitializeCriticalMode @ 0x140C70D44 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  bool v3; // cf
  USHORT v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0xC0000095 : 0;
}
