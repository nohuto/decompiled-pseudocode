/*
 * XREFs of PopDiagTraceFxPerfRequest @ 0x1404B1A24
 * Callers:
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfRequest(__int64 *a1, unsigned int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  unsigned int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  __int64 v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v20 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING);
    if ( (_BYTE)v3 )
    {
      v6 = *a1;
      v7 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = v7 + 48;
      v10 = v6 + 16;
      UserData.Size = 8;
      v13 = &v20;
      v3 = (_UNKNOWN **)(16LL * v20);
      v11 = 4;
      v14 = 4;
      if ( (unsigned __int64)v3 <= 0xFFFFFFFF )
      {
        v18 = 0;
        v17 = 16 * v20;
        v16 = a3;
        LOBYTE(v3) = EtwWriteEx(
                       PopDiagHandle,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_INITIATING,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       4u,
                       &UserData);
      }
    }
  }
  return (char)v3;
}
