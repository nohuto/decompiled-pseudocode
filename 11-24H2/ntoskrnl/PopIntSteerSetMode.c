/*
 * XREFs of PopIntSteerSetMode @ 0x1405D91E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a3 != 4 )
    return 3221225485LL;
  if ( *a2 == 4 )
  {
    v4 = 1;
  }
  else
  {
    PpmIntSteerMode = *a2;
    v4 = 0;
  }
  PpmIntSteerDisabled = v4;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, (__int64)a2, 4u);
  PpmCheckReInit(v6, v5);
  PpmCheckCustomRun(4LL);
  return 0LL;
}
