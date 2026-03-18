/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x1403BDC30
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1403BDCA8 (MmQuerySystemMemoryInformation.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x1403BDCFC (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpLogMemNodeInfo @ 0x1403BDD4C (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x1403BDEF0 (EtwpLogMemInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
