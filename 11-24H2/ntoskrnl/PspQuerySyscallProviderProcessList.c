/*
 * XREFs of PspQuerySyscallProviderProcessList @ 0x1407716D0
 * Callers:
 *     PsQuerySyscallProviderInformation @ 0x1407710A0 (PsQuerySyscallProviderInformation.c)
 * Callees:
 *     PspGetNextSyscallProviderProcess @ 0x140771558 (PspGetNextSyscallProviderProcess.c)
 */

__int64 __fastcall PspQuerySyscallProviderProcessList(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  _QWORD *v7; // rdx
  __int64 i; // rbp
  __int64 NextSyscallProviderProcess; // rax

  v3 = *a2;
  v4 = 0LL;
  v7 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextSyscallProviderProcess = PspGetNextSyscallProviderProcess(a1, v7);
    if ( !NextSyscallProviderProcess )
      break;
    if ( (*(_DWORD *)(NextSyscallProviderProcess + 500) & 0x40000008) == 0 )
    {
      if ( v4 < v3 )
        *(_QWORD *)(a3 + 8 * v4) = *(_QWORD *)(NextSyscallProviderProcess + 464);
      ++v4;
    }
    v7 = (_QWORD *)NextSyscallProviderProcess;
  }
  *a2 = v4;
  return v3 < v4 ? 0x80000005 : 0;
}
