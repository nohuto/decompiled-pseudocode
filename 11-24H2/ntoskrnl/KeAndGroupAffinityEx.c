/*
 * XREFs of KeAndGroupAffinityEx @ 0x140206990
 * Callers:
 *     PpmEventDomainPerfStateChange @ 0x140205420 (PpmEventDomainPerfStateChange.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     PnpSetDeviceAffinityThread @ 0x1403751EC (PnpSetDeviceAffinityThread.c)
 *     HalSendNMI @ 0x1405441C0 (HalSendNMI.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140A77924 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
