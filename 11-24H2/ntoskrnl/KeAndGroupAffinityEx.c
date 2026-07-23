/*
 * XREFs of KeAndGroupAffinityEx @ 0x14032DF70
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14025DAAC (PnpSetDeviceAffinityThread.c)
 *     PpmEventDomainPerfStateChange @ 0x14032CA00 (PpmEventDomainPerfStateChange.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A71A44 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(_WORD *a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  char v8; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v8;
  }
  v4 = *(unsigned __int16 *)(a2 + 8);
  v5 = 0;
  if ( *a1 <= (unsigned __int16)v4 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
