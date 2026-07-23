/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x140964F30
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140967424 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140969A74 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r11
  unsigned __int64 v7; // rdi
  __int64 v8; // r11
  unsigned __int64 v9; // r8

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v4 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v4 )
    {
      if ( *(_QWORD *)(a1 + 8 * v4 + 1544) )
      {
        v5 = HvpLogTypeToLogArrayIndex((unsigned int)v4, a2, a3);
        v7 = *(_QWORD *)(v6 + 8LL * v5 + 1808);
        result = HvGetEffectiveLogSizeCapForHive(v6);
        if ( v7 > (unsigned int)result )
        {
          v9 = *(unsigned int *)(v8 + 180);
          if ( v7 > v9 )
            return CmpDoFileSetSizeEx(v8, (unsigned int)v4, v9, 0LL);
        }
      }
    }
  }
  return result;
}
