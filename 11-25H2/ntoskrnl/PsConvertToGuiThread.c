/*
 * XREFs of PsConvertToGuiThread @ 0x14091E000
 * Callers:
 *     KiConvertToGuiThread @ 0x1406A12E0 (KiConvertToGuiThread.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x140761908 (PspEnsureGuiThreadAndBatchFlush.c)
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     SeCaptureAtomTableCallout @ 0x140479248 (SeCaptureAtomTableCallout.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     PsQuerySectionSignatureInformation @ 0x14091E1C0 (PsQuerySectionSignatureInformation.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x14091EC70 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  int Flink; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  int v6; // edi
  int v7; // r14d
  _RTL_RUN_ONCE *v8; // rax
  int v9; // r9d
  _QWORD v11[3]; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+58h] [rbp-28h]
  _QWORD v13[3]; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+78h] [rbp-8h]
  char v15; // [rsp+A0h] [rbp+20h] BYREF

  v11[1] = 0LL;
  v13[1] = 0LL;
  v11[0] = 0LL;
  v13[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) == 0 )
  {
    Process = CurrentThread->ApcState.Process;
    Flink = (int)Process[4].ThreadListHead.Flink;
    if ( (Flink & 0x1000) != 0 || ((__int64)Process[4].ThreadListHead.Flink & 0x2000) != 0 )
    {
      EtwTimLogProhibitWin32kSystemCalls((unsigned int)((Flink & 0x1000) != 0) + 1, CurrentThread->ApcState.Process);
      if ( (Flink & 0x1000) != 0 )
        return 3221225506LL;
    }
    v11[2] = Process;
    v12 = 1;
    if ( (int)PsQuerySectionSignatureInformation(Process, &v15) >= 0 )
    {
      LOBYTE(v4) = v15;
      LOBYTE(v3) = 12;
      v12 = v12 & 0xFFFFFFFD | (2 * (SeCompareSigningLevels(v4, v3) & 1));
    }
    if ( !(unsigned int)PspUpdateCalloutParameters(0, (__int64)v11, 0, 0LL) )
      return (unsigned int)-1073741811;
    Win32Callouts = PsSessionGetWin32Callouts();
    v6 = ExCallCallBack(Win32Callouts, 0LL, v11);
    if ( v6 < 0 )
      return (unsigned int)v6;
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v7 = Flink & 0xC000;
    if ( v7 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v14 = 0;
    v13[2] = CurrentThread;
    if ( (unsigned int)PspUpdateCalloutParameters(1, (__int64)v13, 0, 0LL) )
    {
      v8 = PsSessionGetWin32Callouts();
      v6 = ExCallCallBack(v8, (unsigned int)(v9 + 1), v13);
      if ( v6 >= 0 )
      {
LABEL_13:
        SeCaptureAtomTableCallout();
        return (unsigned int)v6;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    if ( v7 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    goto LABEL_13;
  }
  return 1073741851LL;
}
