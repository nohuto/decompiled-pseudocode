/*
 * XREFs of PdcPoPpmResetProfile @ 0x140A9CD80
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmEnableProfile @ 0x14075406C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AC4518 (PpmDisableProfile.c)
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
