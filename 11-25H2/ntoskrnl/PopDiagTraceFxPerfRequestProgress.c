/*
 * XREFs of PopDiagTraceFxPerfRequestProgress @ 0x1404B7810
 * Callers:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B73E8 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B75D8 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxPerfRequestProgress(__int64 *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+50h] [rbp-30h]
  int v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+5Ch] [rbp-24h]
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  int v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_PROCESSING) )
    {
      v3 = *a1;
      v4 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = v4 + 48;
      v6 = v3 + 16;
      v7 = 4;
      v9 = &v12;
      v10 = 4;
      UserData.Size = 8;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_PROCESSING, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
