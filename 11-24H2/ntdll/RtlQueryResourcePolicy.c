/*
 * XREFs of RtlQueryResourcePolicy @ 0x18010B000
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 *     RtlpHpInitializePerfPolicies @ 0x18010AF48 (RtlpHpInitializePerfPolicies.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18000BBA0 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x18007F510 (RtlGetNtSystemRoot.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1801191A8 (RtlpQueryPhysicalMemoryPolicy.c)
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
