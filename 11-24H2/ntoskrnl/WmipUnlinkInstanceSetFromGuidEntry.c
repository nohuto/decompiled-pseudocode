/*
 * XREFs of WmipUnlinkInstanceSetFromGuidEntry @ 0x1409CFA30
 * Callers:
 *     WmipDSCleanup @ 0x1409CF8B0 (WmipDSCleanup.c)
 *     WmipUpdateDataSource @ 0x1409D1534 (WmipUpdateDataSource.c)
 * Callees:
 *     WmipUnregisterEtwProvider @ 0x1409D14D8 (WmipUnregisterEtwProvider.c)
 */

__int64 **__fastcall WmipUnlinkInstanceSetFromGuidEntry(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 **result; // rax

  --*(_DWORD *)(a1[7] + 36);
  v2 = *a1;
  if ( *(__int64 **)(v2 + 8) != a1 || (result = (__int64 **)a1[1], *result != a1) )
    __fastfail(3u);
  *result = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = result;
  if ( (a1[2] & 0x80000) != 0 )
  {
    result = (__int64 **)WmipUnregisterEtwProvider(a1);
    *((_DWORD *)a1 + 4) &= 0xFFCFFFFF;
  }
  return result;
}
