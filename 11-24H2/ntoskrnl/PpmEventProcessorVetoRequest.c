/*
 * XREFs of PpmEventProcessorVetoRequest @ 0x1405D6E18
 * Callers:
 *     PpmUpdateProcessorIdleVeto @ 0x1405CCCF0 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventProcessorVetoRequest(__int64 a1, int a2, int a3, char a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  __int16 v7; // ax
  __int16 v9; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  int *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]
  int v20; // [rsp+C0h] [rbp+6Fh] BYREF
  int v21; // [rsp+C8h] [rbp+77h] BYREF

  v21 = a3;
  v20 = a2;
  v4 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  v5 = (const EVENT_DESCRIPTOR *)PPM_ETW_PROCESSOR_IDLE_VETO_DECREMENT;
  if ( a4 )
    v5 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, v5);
    if ( (_BYTE)v4 )
    {
      v7 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v9 = v7;
      UserData.Ptr = (ULONGLONG)&v9;
      v11 = a1 + 209;
      v14 = &v20;
      v17 = &v21;
      v15 = 4;
      v18 = 4;
      UserData.Size = 2;
      v12 = 1;
      LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, v5, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
