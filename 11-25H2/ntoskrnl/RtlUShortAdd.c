/*
 * XREFs of RtlUShortAdd @ 0x140472A24
 * Callers:
 *     PspSiloInitializeSystemRootSymlink @ 0x140763928 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140770C50 (RtlAddResourceAttributeAce.c)
 *     CmpIsFileInSystemConfig @ 0x1407D2330 (CmpIsFileInSystemConfig.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407D679C (CmpDeleteCorruptedLogfile.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407FB620 (AslpPathWildcardAllocMatchNode.c)
 *     RtlpCreateServerAcl @ 0x14091B940 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
 *     SepAddTokenOriginClaim @ 0x140A93A94 (SepAddTokenOriginClaim.c)
 *     VfTargetDriversAllocateFullName @ 0x140B7B254 (VfTargetDriversAllocateFullName.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B8A6C0 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140B8A75C (VfSuspectDriversAllocateEntryEx.c)
 *     BgpBcInitializeCriticalMode @ 0x140C5F964 (BgpBcInitializeCriticalMode.c)
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
