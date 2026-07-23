/*
 * XREFs of PopRundownPowerSettings @ 0x140A2D5C0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopDiagTracePowerSetting @ 0x140A2D640 (PopDiagTracePowerSetting.c)
 */

void PopRundownPowerSettings()
{
  __int64 v0; // rcx
  PVOID *v1; // rbx
  __int64 v2; // rdi
  unsigned int *v3; // r8

  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = dword_140F0B38C;
    do
    {
      v3 = (unsigned int *)v1[v2 + 8];
      if ( v3 )
      {
        LOBYTE(v0) = 1;
        PopDiagTracePowerSetting(v0, v1 + 4, v3[1], v3 + 3);
      }
      v1 = (PVOID *)*v1;
    }
    while ( v1 != &PopPowerSettings );
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
