/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x140964880
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140967424 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_QWORD *)(a1 + 1808) <= (unsigned __int64)(unsigned int)result )
      return result;
    v3 = 1LL;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0LL);
  }
  if ( *(_QWORD *)(a1 + 1808) > (unsigned __int64)(unsigned int)HvGetEffectiveLogSizeCapForHive(a1) )
    CmpDoFileSetSizeEx(a1, 4LL, 0LL, 0LL);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)(a1 + 1816) > (unsigned __int64)(unsigned int)result )
  {
    v3 = 5LL;
    return CmpDoFileSetSizeEx(a1, v3, 0LL, 0LL);
  }
  return result;
}
