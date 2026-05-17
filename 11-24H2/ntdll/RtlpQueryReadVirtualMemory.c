/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x1800B13B0
 * Callers:
 *     LdrQueryNextListEntry @ 0x1800B0B00 (LdrQueryNextListEntry.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryReadVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int VirtualMemory; // ecx
  __int64 result; // rax

  VirtualMemory = ZwReadVirtualMemory(a1, a2, a3, a4, a5);
  if ( VirtualMemory < 0 )
  {
    *a5 = 0LL;
    return (unsigned int)VirtualMemory;
  }
  else
  {
    result = 0LL;
    if ( *a5 != a4 )
      return 2147483661LL;
  }
  return result;
}
