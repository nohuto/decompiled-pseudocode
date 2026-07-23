/*
 * XREFs of RtlpGetStackLimits @ 0x140235480
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1402372D0 (IoGetStackLimits.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1403E84E0 (EtwpApplyPayloadFilterInternal.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14041E270 (RtlEnoughStackSpaceForStackCapture.c)
 *     MiDoStackCopy @ 0x14047B710 (MiDoStackCopy.c)
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14097D7A0 (_RegRtlEnumKeyWithCallback.c)
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 *     ViMiscValidateKeWaitUsage @ 0x140BA1564 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140BA67F8 (MmVerifierTrimMemory.c)
 *     ViDeadlockCheckStackLimits @ 0x140BA9C08 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
