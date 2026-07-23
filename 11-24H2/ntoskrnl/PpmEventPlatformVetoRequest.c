/*
 * XREFs of PpmEventPlatformVetoRequest @ 0x1403A5434
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x1403A5100 (PpmUpdatePlatformIdleVeto.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventPlatformVetoRequest(int a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]
  int v10; // [rsp+80h] [rbp+8h] BYREF
  int v11; // [rsp+88h] [rbp+10h] BYREF

  v11 = a2;
  v10 = a1;
  v3 = &PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT;
  v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_PLATFORM_IDLE_VETO_DECREMENT;
  if ( a3 )
    v4 = &PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v10;
      UserData.Size = 4;
      v7 = &v11;
      v8 = 4;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
