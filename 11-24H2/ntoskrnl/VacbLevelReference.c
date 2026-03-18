/*
 * XREFs of VacbLevelReference @ 0x1403F6E30
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402D5FE0 (CcSetVacbLargeOffset.c)
 *     CcCalculateVacbLevelLockCount @ 0x1403F6DB0 (CcCalculateVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return a2 + 1024;
  else
    return a2 + 2 * ((*(_DWORD *)(a1 + 152) & 0x200) + 512LL);
}
