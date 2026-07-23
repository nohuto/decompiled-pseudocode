/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x1409BC64C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x1409BBC94 (PnpAllocateCriticalMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char *__fastcall PiEventAllocateVetoBuffer(int a1)
{
  char *CriticalMemory; // rbx
  __int64 v4; // rax

  CriticalMemory = (char *)PnpAllocateCriticalMemory(a1, 0x100uLL, 0x18uLL, 0x4D706E50u);
  if ( CriticalMemory )
  {
    v4 = PnpAllocateCriticalMemory(a1, 0x100uLL, 0x400uLL, 0x4D706E50u);
    if ( v4 )
    {
      *(_DWORD *)CriticalMemory = 0;
      *(_OWORD *)(CriticalMemory + 8) = 0LL;
      *((_WORD *)CriticalMemory + 5) = 1024;
      *((_QWORD *)CriticalMemory + 2) = v4;
    }
    else
    {
      ExFreePoolWithTag(CriticalMemory, 0x4D706E50u);
      return 0LL;
    }
  }
  return CriticalMemory;
}
