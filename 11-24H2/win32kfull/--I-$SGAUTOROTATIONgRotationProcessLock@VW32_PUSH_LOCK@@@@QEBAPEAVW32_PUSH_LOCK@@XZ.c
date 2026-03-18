/*
 * XREFs of ??I?$SGAUTOROTATIONgRotationProcessLock@VW32_PUSH_LOCK@@@@QEBAPEAVW32_PUSH_LOCK@@XZ @ 0x140270144
 * Callers:
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1402701CC (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x140270290 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGAUTOROTATIONgRotationProcessLock<W32_PUSH_LOCK>::operator&(__int64 a1, __int64 a2)
{
  return W32GetUserSessionState(a1, a2) + 66104;
}
