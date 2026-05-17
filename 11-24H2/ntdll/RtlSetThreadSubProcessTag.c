/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180022160
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180020790 (EtwpProcessNotification.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x1800EC3E0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  __int64 v5; // rdi
  void *SubProcessTag; // rbx
  _DWORD *SharedData; // rdx
  __int64 v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]

  v4 = NtCurrentTeb();
  v5 = 2147353488LL;
  SubProcessTag = v4->SubProcessTag;
  v4->SubProcessTag = a1;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 566;
  else
    v8 = 2147353488LL;
  if ( *(_BYTE *)v8 && a1 != SubProcessTag )
  {
    memset(v10, 0, sizeof(v10));
    WORD3(v10[0]) = 1349;
    v11 = (int)SubProcessTag;
    v12 = (int)a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, SharedData, a3, a4) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent(*(unsigned __int8 *)v5, 1026LL, 8LL, v10);
  }
  return SubProcessTag;
}
