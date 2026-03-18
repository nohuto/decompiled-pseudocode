/*
 * XREFs of BcdGetElementData @ 0x1409BF8B0
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075F274 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140763580 (PopBcdGetApplicationPathFromResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794164 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140812304 (BiGetDefaultBootEntryIdentifier.c)
 *     BiResolveLocateDevice @ 0x14081243C (BiResolveLocateDevice.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BiGetElement @ 0x1409BFBB8 (BiGetElement.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140A72168 (PopBcdReadElement.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
