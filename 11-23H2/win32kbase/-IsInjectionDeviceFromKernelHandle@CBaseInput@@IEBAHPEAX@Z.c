/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C00E4CC8
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DCD94 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2D60 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 i; // rcx

  v4 = 0;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 157) + 8LL) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2389);
  v5 = *((_QWORD *)this + 157);
  RIMLockExclusive(v5);
  for ( i = **((_QWORD **)this + 158); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(void **)(i + 24) == a2 )
    {
      v4 = -__CFSHR__(*(_DWORD *)(i + 184), 14);
      break;
    }
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
