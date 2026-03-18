/*
 * XREFs of PopDiagTraceFxPerfRequestComplete @ 0x1404B74EC
 * Callers:
 *     PopFxCompleteComponentPerfState @ 0x1404B73E8 (PopFxCompleteComponentPerfState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxPerfRequestComplete(__int64 *a1, unsigned __int8 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  int *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  v3 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED) )
    {
      v4 = *a1;
      v5 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = v5 + 48;
      v8 = v4 + 16;
      v9 = 4;
      v11 = &v6;
      v12 = 4;
      UserData.Size = 8;
      v6 = v3;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
