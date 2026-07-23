/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x140261D70
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x140261DE8 (MmQuerySystemMemoryInformation.c)
 *     EtwpLogMemNodeInfo @ 0x140261E3C (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x140261FE0 (EtwpLogMemInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140262144 (EtwpQueuePerfMemInfoWorkItem.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 EtwpLogMemInfoTimerCallback()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  result = MmQuerySystemMemoryInformation(v1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, v1);
    result = EtwpLogMemNodeInfo();
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v1[0]);
  return result;
}
