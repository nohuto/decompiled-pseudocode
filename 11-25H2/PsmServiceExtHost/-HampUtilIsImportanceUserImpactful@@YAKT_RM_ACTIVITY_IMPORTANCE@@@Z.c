/*
 * XREFs of ?HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180060B74
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BC20 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampUtilIsImportanceUserImpactful(char a1)
{
  return (a1 & 0x40) != 0 || (a1 & 0xEu) >= 8;
}
