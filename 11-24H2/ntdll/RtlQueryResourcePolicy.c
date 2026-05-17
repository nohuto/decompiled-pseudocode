/*
 * XREFs of RtlQueryResourcePolicy @ 0x1800A9730
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800A6374 (RtlpHpHeapCreate.c)
 *     RtlpCreateLowFragHeap @ 0x1800A93BC (RtlpCreateLowFragHeap.c)
 *     RtlpHpInitializePerfPolicies @ 0x18010FF68 (RtlpHpInitializePerfPolicies.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x1800AAA10 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x1800B2C70 (RtlGetNtSystemRoot.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18011AF78 (RtlpQueryPhysicalMemoryPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 NtSystemRoot; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  const wchar_t *v12; // rax

  if ( !a3 || (_DWORD)a2 )
    return 3221225485LL;
  if ( a1 )
  {
    v6 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 1 )
          return 3221225475LL;
        if ( a4 == 4 )
        {
          NtSystemRoot = RtlGetNtSystemRoot(v7, a2, a3);
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
      if ( (RtlGetSuiteMask(v6) & 0x10000) != 0 )
        v12 = L"C:\\data\\programs\\windowsapps";
      else
        v12 = (const wchar_t *)RtlGetNtSystemRoot(v10, v9, v11);
      return RtlpQueryDiskSpacePolicy(v12, a3);
    }
  }
  else
  {
    if ( a4 != 4 )
      return 3221225485LL;
    return RtlpQueryPhysicalMemoryPolicy(a3);
  }
}
