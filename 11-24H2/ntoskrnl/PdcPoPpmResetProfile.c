/*
 * XREFs of PdcPoPpmResetProfile @ 0x140A9D910
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x1407634F0 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, __int64 a2, unsigned int a3)
{
  LONG result; // eax
  __int64 v5; // rdx

  result = PpmProfileStatus;
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( (_BYTE)a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
      PpmEnableProfile(a1, v5);
      return PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      return PpmDisableProfile();
    }
  }
  return result;
}
