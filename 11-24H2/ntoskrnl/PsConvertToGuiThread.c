/*
 * XREFs of PsConvertToGuiThread @ 0x140AC9700
 * Callers:
 *     KiConvertToGuiThread @ 0x1406AD550 (KiConvertToGuiThread.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407714E8 (PspEnsureGuiThreadAndBatchFlush.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x14045771C (SeIsPermissiveLearningModeEnabled.c)
 *     SeIsLearningModeLoggingEnabled @ 0x14046453C (SeIsLearningModeLoggingEnabled.c)
 *     SeCaptureAtomTableCallout @ 0x1404764B4 (SeCaptureAtomTableCallout.c)
 *     Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledDeviceUsageNoInline @ 0x1405E2B3C (Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledDeviceUsageNoInline.c)
 *     SeReportLearningModeViolation @ 0x1406060D0 (SeReportLearningModeViolation.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     PsQuerySectionSignatureInformation @ 0x140A19CA0 (PsQuerySectionSignatureInformation.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x140A63D44 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 Process; // rsi
  int v3; // r14d
  bool v4; // r12
  void *v5; // r15
  __int64 v6; // rcx
  bool IsPermissiveLearningModeEnabled; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  int v11; // ebx
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  struct _KTHREAD *v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+68h] [rbp-10h]
  char v18; // [rsp+C0h] [rbp+48h] BYREF
  bool v19; // [rsp+C8h] [rbp+50h] BYREF
  int v20; // [rsp+D0h] [rbp+58h] BYREF
  int v21; // [rsp+D8h] [rbp+60h] BYREF

  v12 = 0uLL;
  v15 = 0uLL;
  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
    return 1073741851LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v3 = *(_DWORD *)(Process + 1872);
  v4 = (v3 & 0x1000) != 0;
  if ( (v3 & 0x1000) != 0 || (*(_DWORD *)(Process + 1872) & 0x2000) != 0 )
  {
    if ( (unsigned int)Feature_LearningModeLoggingPsConvertToGuiThread__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (v3 & 0x1000) != 0 && SepLearningModeTokenCount )
      {
        v20 = 0;
        v5 = (void *)PsReferenceEffectiveToken((__int64)CurrentThread, 0x74726853u, &v20, &v19, &v21, 0LL);
        if ( SeIsLearningModeLoggingEnabled((__int64)v5) )
        {
          IsPermissiveLearningModeEnabled = SeIsPermissiveLearningModeEnabled(v6);
          SeReportLearningModeViolation(Process, 1, 0, !IsPermissiveLearningModeEnabled);
          if ( IsPermissiveLearningModeEnabled )
            v4 = 0;
        }
        if ( v20 == 1 )
        {
          ObFastDereferenceObject((__int64 *)(Process + 584), (ULONG_PTR)v5, 0x74726853u);
        }
        else if ( v5 )
        {
          ObfDereferenceObjectWithTag(v5, 0x74726853u);
        }
      }
      if ( v4 )
      {
        EtwTimLogProhibitWin32kSystemCalls(2u, Process);
        return 3221225506LL;
      }
      EtwTimLogProhibitWin32kSystemCalls(1u, Process);
    }
    else
    {
      EtwTimLogProhibitWin32kSystemCalls(((v3 & 0x1000) != 0) + 1, Process);
      if ( (v3 & 0x1000) != 0 )
        return 3221225506LL;
    }
  }
  v13 = Process;
  v14 = 1;
  if ( (int)PsQuerySectionSignatureInformation((_KPROCESS *)Process, &v18) >= 0 )
  {
    LOBYTE(v9) = v18;
    LOBYTE(v8) = 12;
    v14 = v14 & 0xFFFFFFFD | (2 * (SeCompareSigningLevels(v9, v8) & 1));
  }
  result = PsInvokeWin32Callout(0, &v12, 0, 0LL);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v10 = v3 & 0xC000;
    if ( v10 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v16 = CurrentThread;
    v17 = 0;
    v11 = PsInvokeWin32Callout(1, &v15, 0, 0LL);
    if ( v11 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( v10 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v11;
  }
  return result;
}
