/*
 * XREFs of RtlQueryResourcePolicy @ 0x180038570
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 *     RtlpHpInitializePerfPolicies @ 0x180112CD8 (RtlpHpInitializePerfPolicies.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180039850 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18011C95C (RtlpQueryPhysicalMemoryPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // ecx
  int v7; // ecx
  PWSTR NtSystemRoot; // rax
  PWSTR v9; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return 3221225475LL;
        if ( a4 == 4 )
        {
          NtSystemRoot = RtlGetNtSystemRoot();
          return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot, a3);
        }
        return 3221225485LL;
      }
      if ( a4 != 4 )
        return 3221225485LL;
      return RtlpQueryDiskSpeedPolicy(a3);
    }
    else
    {
      if ( a4 != 4 )
        return 3221225485LL;
      if ( (RtlGetSuiteMask() & 0x10000) != 0 )
        v9 = L"C:\\data\\programs\\windowsapps";
      else
        v9 = RtlGetNtSystemRoot();
      return RtlpQueryDiskSpacePolicy(v9, a3);
    }
  }
  else
  {
    if ( a4 != 4 )
      return 3221225485LL;
    return RtlpQueryPhysicalMemoryPolicy(a3);
  }
}
