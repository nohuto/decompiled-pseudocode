/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x140A0E248
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x140A0D890 (PnpAllocateCriticalMemory.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char *__fastcall PiEventAllocateVetoBuffer(int a1)
{
  char *CriticalMemory; // rbx
  __int64 v4; // rax

  CriticalMemory = (char *)PnpAllocateCriticalMemory(a1, 0x100uLL);
  if ( CriticalMemory )
  {
    v4 = PnpAllocateCriticalMemory(a1, 0x100uLL);
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
