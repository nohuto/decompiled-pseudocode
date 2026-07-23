/*
 * XREFs of BcdGetElementData @ 0x1409A5F00
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075E214 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140762F44 (PopBcdGetApplicationPathFromResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140794274 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140812A44 (BiGetDefaultBootEntryIdentifier.c)
 *     BiResolveLocateDevice @ 0x140812B7C (BiResolveLocateDevice.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BiGetElement @ 0x1409A6208 (BiGetElement.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140A6B548 (PopBcdReadElement.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
