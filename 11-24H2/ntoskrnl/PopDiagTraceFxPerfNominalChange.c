/*
 * XREFs of PopDiagTraceFxPerfNominalChange @ 0x1405D28F0
 * Callers:
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405CF760 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfNominalChange(__int64 *a1, unsigned __int8 a2, int a3, unsigned int a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-21h] BYREF
  __int64 v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+74h] [rbp-5h]
  int *v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+84h] [rbp+Bh]
  int *v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+94h] [rbp+1Bh]
  unsigned int *v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A4h] [rbp+2Bh]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+B0h] [rbp+37h]
  int v26; // [rsp+B4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF
  int v28; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v29; // [rsp+F0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v29 = a4;
  v28 = a3;
  v7 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE);
    if ( (_BYTE)v5 )
    {
      v8 = *a1;
      v5 = *(_UNKNOWN ***)(*a1 + 80);
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)(v5 + 6);
      v12 = v8 + 16;
      v13 = 4;
      v15 = &v10;
      v18 = &v28;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v21 = &v29;
      LOBYTE(v5) = -1;
      UserData.Size = 8;
      v10 = v7;
      if ( 16 * (unsigned __int64)v29 <= 0xFFFFFFFF )
      {
        v26 = 0;
        v24 = a5;
        v25 = 16 * v29;
        LOBYTE(v5) = EtwWriteEx(
                       PopDiagHandle,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       6u,
                       &UserData);
      }
    }
  }
  return (char)v5;
}
