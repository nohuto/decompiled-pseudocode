/*
 * XREFs of ?QueryMonitorUniqueness@CCD_SET_STRING_ID@@QEBAJIPEAI@Z @ 0x1403E6F94
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1403BD8BC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryMonitorUniqueness(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *((unsigned __int16 *)this + 16);
  if ( a2 >= (unsigned int)v3 )
  {
    WdLogSingleEntry4(1LL, this, v3, a2, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1678;
  }
  else
  {
    result = 0LL;
    *a3 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * a2 + 4);
  }
  return result;
}
