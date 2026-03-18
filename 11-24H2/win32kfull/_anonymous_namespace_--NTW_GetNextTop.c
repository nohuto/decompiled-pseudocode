/*
 * XREFs of _anonymous_namespace_::NTW_GetNextTop @ 0x1400F8248
 * Callers:
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x1400F6B74 (_anonymous_namespace_--NTW_GetPrevTop.c)
 * Callees:
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1402DB478 (_anonymous_namespace_--GNT_NextTopScan.c)
 */

__int64 __fastcall anonymous_namespace_::NTW_GetNextTop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = a2;
  if ( !a2 )
    return anonymous_namespace_::GNT_NextTopScan(a1, 0LL, 0LL);
  v4 = 0LL;
  while ( 1 )
  {
    result = anonymous_namespace_::GNT_NextTopScan(a1, v4, v2);
    if ( result )
      break;
    v4 = v2;
    if ( !v2 )
      return anonymous_namespace_::GNT_NextTopScan(a1, 0LL, 0LL);
    v2 = *(_QWORD *)(v2 + 120);
  }
  return result;
}
