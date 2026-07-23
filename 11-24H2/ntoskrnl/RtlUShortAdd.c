/*
 * XREFs of RtlUShortAdd @ 0x140463CC0
 * Callers:
 *     PspSiloInitializeSystemRootSymlink @ 0x140773518 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 *     CmpIsFileInSystemConfig @ 0x1407E2160 (CmpIsFileInSystemConfig.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6BF0 (CmpDeleteCorruptedLogfile.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B8D0 (AslpPathWildcardAllocMatchNode.c)
 *     RtlpCreateServerAcl @ 0x140856C98 (RtlpCreateServerAcl.c)
 *     IopAllocateUnicodeString @ 0x1409BB8B4 (IopAllocateUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 *     VfTargetDriversAllocateFullName @ 0x140B8D234 (VfTargetDriversAllocateFullName.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B9C6A0 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140B9C73C (VfSuspectDriversAllocateEntryEx.c)
 *     BgpBcInitializeCriticalMode @ 0x140C72EA4 (BgpBcInitializeCriticalMode.c)
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
