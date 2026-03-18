/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x140C1C1FC
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int Common; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  PpmHighPerfEndDpc = 275;
  *(_QWORD *)&PpmHighPerfEndTimer.Header.Lock = 8LL;
  qword_140F0B978 = (__int64)PpmHighPerfRequestExpiration;
  v0 = PpmHighPerfDuration;
  P = 0LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Blink = &PpmHighPerfEndTimer.Header.WaitListHead;
  v1 = 4LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Flink = &PpmHighPerfEndTimer.Header.WaitListHead;
  PpmHighPerfRequestLock = 0LL;
  qword_140F0B980 = 0LL;
  qword_140F0B998 = 0LL;
  qword_140F0B970 = 0LL;
  PpmHighPerfEndTimer.DueTime.QuadPart = 0LL;
  PpmHighPerfEndTimer.Period = 0;
  PpmHighPerfEndTimer.Processor = 0;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  v8[0] = 0;
  v8[1] = 1;
  DestinationString = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Power Manager");
  Common = PoCaptureReasonContext((__int64)v8, 0, 0LL, 1, 0LL, (__int64 *)&P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 0, &PpmHighPerfPowerRequest);
    if ( Common < 0 )
      PoDestroyReasonContext(P, v4, v5, v6);
  }
  return (unsigned int)Common;
}
