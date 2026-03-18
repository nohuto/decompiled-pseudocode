/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x140432BE0
 * Callers:
 *     IovpLogStackTrace @ 0x140B96A8C (IovpLogStackTrace.c)
 *     ViPtCaptureStackTrace @ 0x140B97344 (ViPtCaptureStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentStackPointer; // rax
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v5 = 0LL;
  if ( !RtlpGetStackLimits(&v5, &v6) )
    return 0LL;
  CurrentStackPointer = KeGetCurrentStackPointer(v2, v1);
  LOBYTE(v0) = (unsigned __int64)(CurrentStackPointer - (_QWORD)v5) >= 0xE30;
  return v0;
}
