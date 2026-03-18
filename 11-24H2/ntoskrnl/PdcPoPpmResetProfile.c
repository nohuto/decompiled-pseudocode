/*
 * XREFs of PdcPoPpmResetProfile @ 0x140AA2580
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x140763B2C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140ACB310 (PpmDisableProfile.c)
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
