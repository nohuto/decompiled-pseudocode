/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x140A64720
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140884FC0 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
    if ( *(_QWORD *)(a1 + 1808) <= (unsigned __int64)(unsigned int)result )
      return result;
    v3 = 1LL;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0);
  }
  if ( *(_QWORD *)(a1 + 1808) > (unsigned __int64)(unsigned int)HvGetEffectiveLogSizeCapForHive((unsigned int *)a1) )
    CmpDoFileSetSizeEx(a1, 4LL, 0LL, 0);
  result = HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  if ( *(_QWORD *)(a1 + 1816) > (unsigned __int64)(unsigned int)result )
  {
    v3 = 5LL;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0);
  }
  return result;
}
