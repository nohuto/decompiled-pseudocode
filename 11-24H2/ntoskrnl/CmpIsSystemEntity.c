/*
 * XREFs of CmpIsSystemEntity @ 0x1408E4D80
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14041A8FC (KCBNeedsVirtualImage.c)
 *     CmDoVirtualTest @ 0x14049C88C (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404A8F9C (KCBNeedsVirtualImage_0.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_Object, int *a3)
{
  char v3; // si
  bool v5; // zf
  bool v6; // di
  int v7; // eax
  int v8; // eax
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v11; // rtt
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT Object; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  memset(&Object, 0, sizeof(Object));
  if ( !CmpVEEnabled )
    return 1;
  if ( a3 && (*a3 & 1) != 0 )
    return (*a3 & 2) != 0;
  if ( !a1 )
    return 1;
  if ( !p_Object )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &Object);
    p_Object = &Object;
    v3 = 1;
  }
  v5 = p_Object->ClientToken == 0LL;
  LODWORD(TokenInformation) = 0;
  v6 = 1;
  if ( v5 )
  {
    SeQueryInformationToken(p_Object->PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
    if ( (_DWORD)TokenInformation )
      v6 = 0;
  }
  if ( a3 )
  {
    v7 = *a3;
    if ( v6 )
    {
      v8 = v7 | 3;
    }
    else
    {
      v8 = v7 | 5;
      v6 = 0;
    }
    *a3 = v8;
  }
  if ( v3 )
  {
    if ( SeTokenLeakTracking )
    {
      if ( Object.PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object.PrimaryToken + 143) + 284LL));
        if ( Object.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      if ( Object.ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object.ClientToken + 143) + 284LL));
        if ( Object.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    do
    {
      if ( ((unsigned __int64)Object.PrimaryToken ^ ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag(Object.PrimaryToken, 0x75536553u);
        goto LABEL_21;
      }
      v11 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v11 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)Object.PrimaryToken - 48, 0, 1u, 0x75536553u);
LABEL_21:
    if ( Object.ClientToken )
      ObfDereferenceObjectWithTag(Object.ClientToken, 0x75536553u);
  }
  return v6;
}
