/*
 * XREFs of MiEntireRangeAlreadyExists @ 0x14066DF1C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiEntireRangeAlreadyExists(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int i; // eax
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
  {
    v4 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * i + 3);
    if ( v4 )
    {
      v5 = *((_QWORD *)MmPhysicalMemoryBlock + 2 * i + 2);
      if ( a1 >= v5 )
      {
        v6 = v4 + v5;
        if ( a2 <= v6 )
          return 1LL;
        if ( a1 < v6 )
          a1 = v6;
      }
    }
  }
  return 0LL;
}
