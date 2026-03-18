/*
 * XREFs of ExpInitializePushLocks @ 0x140C3170C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x14064A228 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 ExpInitializePushLocks()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  result = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v0) = (_DWORD)result == 0;
  ExpPushLockAllowImplicitUpgrade = v0;
  return result;
}
