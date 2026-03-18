/*
 * XREFs of KiPrcbArrayForIsolationWidth @ 0x1403F0F60
 * Callers:
 *     KzRefreshWorkloadProperties @ 0x140201D1C (KzRefreshWorkloadProperties.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1405ADA00 (KiTryUpgradeIsolationUnitLockHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPrcbArrayForIsolationWidth(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(unsigned __int8 **)(*(_QWORD *)a1 + 36440LL);
      *a3 = v4 + 8;
      result = *v4;
      *a4 = result;
    }
  }
  else
  {
    *a3 = a1;
    *a4 = 1;
  }
  return result;
}
