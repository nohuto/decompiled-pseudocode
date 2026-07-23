/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x14041E270
 * Callers:
 *     IovpLogStackTrace @ 0x140BA8A6C (IovpLogStackTrace.c)
 *     ViPtCaptureStackTrace @ 0x140BA9324 (ViPtCaptureStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentStackPointer; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v5 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v5, (__int64)&v6) )
    return 0LL;
  CurrentStackPointer = KeGetCurrentStackPointer(v2, v1);
  LOBYTE(v0) = (unsigned __int64)(CurrentStackPointer - v5) >= 0xE30;
  return v0;
}
