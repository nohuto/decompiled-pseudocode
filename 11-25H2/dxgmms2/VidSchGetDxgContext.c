/*
 * XREFs of VidSchGetDxgContext @ 0x1400A5760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDxgContext(__int64 a1)
{
  if ( !a1 || *(_DWORD *)(a1 + 904) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 56);
}
