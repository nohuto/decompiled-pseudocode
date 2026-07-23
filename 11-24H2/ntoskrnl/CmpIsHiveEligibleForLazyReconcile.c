/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x140963C64
 * Callers:
 *     CmpDoReconcileNextHive @ 0x140963B00 (CmpDoReconcileNextHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140967424 (HvGetEffectiveLogSizeCapForHive.c)
 */

bool __fastcall CmpIsHiveEligibleForLazyReconcile(__int64 a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v2; // r10
  unsigned int v3; // r11d
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // rdx

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 || !*(_DWORD *)(a1 + 128) || CmpHoldLazyFlush )
    return 0;
  if ( CmpUserPresent )
  {
    EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_DWORD *)(v2 + 180) < EffectiveLogSizeCapForHive )
    {
      v4 = *(_DWORD *)(v2 + 168);
      v5 = v3;
      if ( v4 != 1 )
      {
        v6 = v3;
        v7 = (_BYTE *)(v2 + 192);
        do
        {
          if ( v6 != v4 && *v7 == (_BYTE)v3 )
            ++v5;
          ++v6;
          ++v7;
        }
        while ( v6 < 2 );
        if ( v5 )
          return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= *(_QWORD *)(v2 + 4144)
                                                                          + 10000000
                                                                          * (unsigned __int64)(unsigned int)dword_140E03860;
      }
    }
  }
  return 1;
}
