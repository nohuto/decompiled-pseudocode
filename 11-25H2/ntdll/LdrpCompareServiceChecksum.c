/*
 * XREFs of LdrpCompareServiceChecksum @ 0x1800F366C
 * Callers:
 *     LdrLoadAlternateResourceModule @ 0x1800F3250 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 */

bool __fastcall LdrpCompareServiceChecksum(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 RcConfig; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  RcConfig = LdrpGetRcConfig(a1, a2, 0, 1);
  if ( !RcConfig )
    return 0;
  v5 = LdrpGetRcConfig(a2, v3, 0, 0);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)RcConfig != -20054323 || *(_DWORD *)v5 != -20054323 )
    return 1;
  v6 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v5 + 28);
  if ( !v6 )
    v6 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v5 + 36);
  return !v6;
}
