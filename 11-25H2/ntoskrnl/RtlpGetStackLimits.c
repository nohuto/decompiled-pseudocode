/*
 * XREFs of RtlpGetStackLimits @ 0x140258FB0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1403F03A0 (EtwpApplyPayloadFilterInternal.c)
 *     IoGetStackLimits @ 0x14042A9E0 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140432BE0 (RtlEnoughStackSpaceForStackCapture.c)
 *     MiDoStackCopy @ 0x14047FF80 (MiDoStackCopy.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140951400 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1409523C0 (_RegRtlEnumKeyWithCallback.c)
 *     PspGetSetContextInternal @ 0x1409A5700 (PspGetSetContextInternal.c)
 *     ViMiscValidateKeWaitUsage @ 0x140B8F584 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140B94818 (MmVerifierTrimMemory.c)
 *     ViDeadlockCheckStackLimits @ 0x140B97C28 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
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
