/*
 * XREFs of Gre_Base_Globals @ 0x1400A4360
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Gre_Base_Globals(__int64 a1)
{
  return *(_QWORD *)(W32GetSessionState(a1) + 88);
}
