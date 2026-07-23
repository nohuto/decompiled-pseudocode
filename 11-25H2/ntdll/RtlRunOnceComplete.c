/*
 * XREFs of RtlRunOnceComplete @ 0x180004290
 * Callers:
 *     LdrpEnableUMGLTracingStateSync @ 0x180002C54 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18000322C (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlRandomEx @ 0x180003420 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148A20 (RtlpFeatureConfigurationCloneComplete.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __cdecl RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  unsigned int v5; // edx
  unsigned __int64 Value; // rcx
  NTSTATUS v7; // r9d
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // rbx
  void *v15; // rcx

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v5 = ~(unsigned __int8)(Flags >> 1) & 3;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v5 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Value = RunOnce->Value;
  v7 = 0;
  v8 = 2LL;
  if ( v5 < 2 )
    v8 = 0LL;
  v9 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | v8;
  v10 = RunOnce->Value & 3;
  if ( v10 == 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      v11 = _InterlockedExchange64((volatile __int64 *)RunOnce, v9);
      if ( (v11 & 3) != 1 )
        return -1073741734;
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v12 )
      {
        do
        {
          v14 = *(_QWORD *)v12;
          v15 = *(void **)(v12 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v12 + 36), 2u);
          ZwAlertThreadByThreadId(v15);
          v12 = v14;
        }
        while ( v14 );
      }
      return 0;
    }
    return -1073741584;
  }
  if ( v10 != 3 )
    return -1073741823;
  if ( (v5 & 1) != 0 )
    return -1073741584;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, Value) != Value )
    return -1073741771;
  return v7;
}
