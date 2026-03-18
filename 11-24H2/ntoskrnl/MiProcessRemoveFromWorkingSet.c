/*
 * XREFs of MiProcessRemoveFromWorkingSet @ 0x1407ED994
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140404B98 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiProcessRemoveFromWorkingSet(unsigned __int64 a1, __int64 a2, char a3)
{
  int v5; // ebx
  unsigned int i; // edi
  __int64 result; // rax

  v5 = 4 * (a3 & 1);
  for ( i = 0; i < a1; ++i )
  {
    result = MiEmptyWorkingSetInitiate(
               (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
               v5,
               *(_QWORD *)(a2 + 16LL * i) & 0xFFFFFFFFFFFFF000uLL,
               ((*(_QWORD *)(a2 + 16LL * i) + *(_QWORD *)(a2 + 16LL * i + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - 1);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
