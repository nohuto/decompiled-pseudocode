/*
 * XREFs of PspSendReliableJobNotification @ 0x140861974
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140860B78 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspJobNotificationWorker @ 0x140A3AAD0 (PspJobNotificationWorker.c)
 * Callees:
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     EtwTraceJobSendNotification @ 0x140861A44 (EtwTraceJobSendNotification.c)
 */

__int64 __fastcall PspSendReliableJobNotification(PVOID Object, unsigned int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  int v5; // edx
  __int64 result; // rax
  int v7; // ecx
  int v8; // r9d
  int v9; // ett

  v2 = a2;
  v4 = 12;
  if ( a2 == 11 )
  {
    v5 = 16396;
  }
  else
  {
    v5 = 65544;
    v4 = 8;
    if ( (_DWORD)v2 != 12 )
      v5 = 32776;
  }
  LODWORD(result) = *((_DWORD *)Object + 388);
  do
  {
    v7 = v5;
    v8 = result & 8;
    if ( (result & 8) == 0 )
      v7 = v4;
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)Object + 388, result | v7, result);
  }
  while ( v9 != (_DWORD)result );
  if ( !v8 )
  {
    ObfReferenceObjectWithTag(Object, 0x624A7350u);
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobSendNotification(Object, (unsigned int)v2);
    result = IoSetIoCompletionEx(
               *((_QWORD *)Object + 69),
               *((_QWORD *)Object + 70),
               0LL,
               0,
               v2,
               0,
               *((_QWORD *)Object + 154));
    _InterlockedIncrement64((volatile signed __int64 *)Object + 71);
  }
  return result;
}
