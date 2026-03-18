/*
 * XREFs of RtlpGetStackLimits @ 0x14027FEF0
 * Callers:
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x140281D40 (IoGetStackLimits.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14032B140 (EtwpApplyPayloadFilterInternal.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14042B6E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     MiDoStackCopy @ 0x140480C40 (MiDoStackCopy.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140992760 (_RegRtlEnumKeyWithCallback.c)
 *     PspGetSetContextInternal @ 0x1409A4CA0 (PspGetSetContextInternal.c)
 *     ViMiscValidateKeWaitUsage @ 0x140B9F564 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140BA47F8 (MmVerifierTrimMemory.c)
 *     ViDeadlockCheckStackLimits @ 0x140BA7C08 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 */

bool __fastcall RtlpGetStackLimits(char **a1, unsigned __int64 *a2)
{
  unsigned __int64 CurrentStackPointer; // rax
  bool result; // al
  int v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !result )
    __fastfail(4u);
  return result;
}
