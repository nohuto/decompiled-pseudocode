/*
 * XREFs of FsRtlEmptyFreePoolList @ 0x1403DF554
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x140931D50 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140931F00 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140A43B50 (FsRtlDeleteKeyFromTunnelCache.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlEmptyFreePoolList(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  _DWORD *v4; // rcx
  _QWORD *v5; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *result;
    v4 = result - 3;
    if ( *(_QWORD **)(*result + 8LL) != result || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    if ( (v4[14] & 1) != 0 )
      ExFreePoolWithTag(v4, 0);
    else
      ExFreeToPagedLookasideList(&TunnelLookasideList, v4);
  }
  return result;
}
