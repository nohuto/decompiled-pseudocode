/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x18004EB60
 * Callers:
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x18004D190 (EtwpProcessNotification.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x1800E7250 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

PVOID __cdecl RtlSetThreadSubProcessTag(PVOID SubProcessTag)
{
  struct _TEB *v1; // rax
  __int64 v2; // rdi
  PVOID v3; // rbx
  _DWORD *SharedData; // rdx
  __int64 v5; // rax
  _OWORD Fields[2]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v2 = 2147353488LL;
  v3 = v1->SubProcessTag;
  v1->SubProcessTag = SubProcessTag;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 566;
  else
    v5 = 2147353488LL;
  if ( *(_BYTE *)v5 && SubProcessTag != v3 )
  {
    memset(Fields, 0, sizeof(Fields));
    WORD3(Fields[0]) = 1349;
    v8 = (int)v3;
    v9 = (int)SubProcessTag;
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x402u, 8u, Fields);
  }
  return v3;
}
