/*
 * XREFs of ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x14021FF90
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E88E0 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputThreadBase::RevokeThreadAsInput(CInputThreadBase *this)
{
  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0);
  if ( *((_DWORD *)this + 4) != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 117);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 119);
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0LL);
}
