/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x14042B6E0
 * Callers:
 *     IovpLogStackTrace @ 0x140BA6A6C (IovpLogStackTrace.c)
 *     ViPtCaptureStackTrace @ 0x140BA7324 (ViPtCaptureStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
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
