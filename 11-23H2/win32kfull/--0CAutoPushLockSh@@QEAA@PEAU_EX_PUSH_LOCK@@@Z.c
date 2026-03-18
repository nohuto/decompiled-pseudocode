/*
 * XREFs of ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008A93C
 * Callers:
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016EE0 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     FreezeThawTimers @ 0x1C0080360 (FreezeThawTimers.c)
 *     _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C008A7C0 (_anonymous_namespace_--HasLegacyForegroundActivateRight.c)
 *     InternalSetTimer @ 0x1C00EFF30 (InternalSetTimer.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C0153078 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockSh *__fastcall CAutoPushLockSh::CAutoPushLockSh(CAutoPushLockSh *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(*(_QWORD *)this, 0LL);
  return this;
}
