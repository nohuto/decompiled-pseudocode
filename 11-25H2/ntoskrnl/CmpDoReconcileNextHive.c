/*
 * XREFs of CmpDoReconcileNextHive @ 0x140A44330
 * Callers:
 *     <none>
 * Callees:
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140884FC0 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140A44494 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140A4456C (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 *v4; // r15
  __int64 *NextActiveHive; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rcx
  unsigned int EffectiveLogSizeCapForHive; // eax

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140E03864;
  v4 = a2;
  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    NextActiveHive = CmpGetNextActiveHive(0LL);
    if ( NextActiveHive )
    {
      do
      {
        v7 = -1LL;
        v8 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
        {
          EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive((unsigned int *)NextActiveHive);
          if ( (int)CmpFlushHive(
                      (ULONG_PTR)NextActiveHive,
                      *((_DWORD *)NextActiveHive + 45) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
          {
            *a1 = 1;
            v7 = v8 + 10000000LL * (unsigned int)dword_140E0386C;
          }
        }
        else if ( *((_DWORD *)NextActiveHive + 32) )
        {
          if ( (NextActiveHive[20] & 0x8001) == 0 )
          {
            v2 = 1;
            v10 = NextActiveHive[518] + 10000000LL * (unsigned int)dword_140E03860;
            if ( v8 < v10 )
              v7 = v10 - v8;
          }
        }
        if ( v7 >= v3 )
          v7 = v3;
        v3 = v7;
        NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
      }
      while ( NextActiveHive );
      v4 = a2;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *v4 = v3;
  }
  return v2;
}
