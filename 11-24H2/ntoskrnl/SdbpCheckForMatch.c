/*
 * XREFs of SdbpCheckForMatch @ 0x140A04CB0
 * Callers:
 *     SdbpCheckKObject @ 0x1409413E0 (SdbpCheckKObject.c)
 *     SdbpCheckExe @ 0x140A04694 (SdbpCheckExe.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 * Callees:
 *     Feature_ReduceForceCacheScope__private_IsEnabledDeviceUsageNoInline @ 0x1404F4258 (Feature_ReduceForceCacheScope__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetExeEntryFlags @ 0x140804E40 (SdbpGetExeEntryFlags.c)
 *     SdbReadWORDTag @ 0x140947048 (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     SdbpMatchOsVersion @ 0x140A04DE4 (SdbpMatchOsVersion.c)
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 */

__int64 __fastcall SdbpCheckForMatch(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, int *a6)
{
  BOOL v6; // r12d
  int v11; // r15d
  unsigned int v12; // edi
  _DWORD *v13; // r14
  unsigned int FirstTag; // eax
  __int64 v15; // r9
  __int64 result; // rax
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v17 = 0;
  v11 = 1;
  if ( (unsigned int)Feature_ReduceForceCacheScope__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)SdbFindFirstTag(a2, a3, 4109) )
      v6 = *(_DWORD *)(a4 + 80) == 0;
  }
  else
  {
    v6 = SdbFindFirstTag(a2, a3, 4109) != 0;
  }
  if ( (unsigned int)SdbpMatchOsVersion(a2, a3)
    && (unsigned int)SdbpMatchList((unsigned int)&v17, 0, a1, a2, a3, a4, 0)
    && (v12 = v17) != 0
    && (unsigned int)SdbpGetExeEntryFlags(a2, a3, a6) )
  {
    v13 = a5;
    if ( a5 )
    {
      FirstTag = SdbFindFirstTag(a2, a3, 12289);
      if ( FirstTag )
        *v13 = (unsigned __int16)SdbReadWORDTag(a2, FirstTag, 2LL, v15);
      else
        *v13 = 2;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( !*(_DWORD *)(a4 + 80) || v6 )
    v11 = 0;
  result = v12;
  *(_DWORD *)(a4 + 80) = v11;
  return result;
}
