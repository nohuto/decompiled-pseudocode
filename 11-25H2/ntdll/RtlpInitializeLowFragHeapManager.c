/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x1800F9CD8
 * Callers:
 *     RtlInitializeHeapManager @ 0x18011BFFC (RtlInitializeHeapManager.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

int RtlpInitializeLowFragHeapManager()
{
  unsigned __int64 v0; // rax
  signed __int64 v1; // rdx
  unsigned __int64 v2; // rtt
  unsigned int v3; // ebx
  int result; // eax
  char v5; // cl
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+58h] [rbp-20h]

  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  v0 = qword_1801CFF00;
  do
  {
    v1 = ((((v0 ^ (v0 >> 12)) << 25) ^ v0 ^ (v0 >> 12)) >> 27) ^ ((v0 ^ (v0 >> 12)) << 25) ^ v0 ^ (v0 >> 12);
    v2 = v0;
    v0 = _InterlockedCompareExchange64(&qword_1801CFF00, v1, v0);
  }
  while ( v2 != v0 );
  RtlpLFHKey = 0x2545F4914F6CDD1DLL * v1;
  v3 = 1;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v5 = 0;
    if ( (unsigned int)v7 > 1 )
    {
      do
        ++v5;
      while ( (unsigned int)v7 >> v5 > 1 );
    }
    result = -(1 << v5) & ((1LL << v5) + v7 - 1);
    if ( (unsigned int)result > 0x40 )
      result = 64;
    v3 = result;
  }
  RtlpDefaultHeapDebuggingOptions = 0LL;
  RtlpAffinityState[0] = v3;
  xmmword_1801D6050 = 0LL;
  xmmword_1801D6060 = 0LL;
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
    dword_1801D604C = result;
  }
  return result;
}
