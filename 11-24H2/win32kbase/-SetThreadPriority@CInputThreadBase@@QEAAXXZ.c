/*
 * XREFs of ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x140220034
 * Callers:
 *     SetThreadPriority @ 0x140213440 (SetThreadPriority.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E88E0 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x14014E590 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputThreadBase::SetThreadPriority(PETHREAD **this)
{
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *((_DWORD *)this + 4) == 1 )
  {
    if ( CInputThreadBase::_CalledOnInputThread((CInputThreadBase *)this) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 175);
    SetThreadBasePriority(*this[3], 16);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0LL);
}
