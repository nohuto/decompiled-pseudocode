/*
 * XREFs of AcpiDiagTracePccExecuteCommand @ 0x140051754
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x140051170 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccExecuteCommand(int a1, char a2, char a3, char a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  char *v9; // [rsp+48h] [rbp-19h]
  int v10; // [rsp+50h] [rbp-11h]
  int v11; // [rsp+54h] [rbp-Dh]
  char *v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+60h] [rbp-1h]
  int v14; // [rsp+64h] [rbp+3h]
  char *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  char *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  char *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+4Fh] BYREF
  int v25; // [rsp+B8h] [rbp+57h] BYREF
  char v26; // [rsp+C0h] [rbp+5Fh] BYREF
  char v27; // [rsp+C8h] [rbp+67h] BYREF
  char v28; // [rsp+D0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    LOBYTE(v6) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_EXECUTE_COMMAND);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (unsigned __int64)&v25;
      UserData.Size = 4;
      v9 = &v26;
      v10 = 1;
      v12 = &v27;
      v15 = &v28;
      v18 = &a5;
      v21 = &a6;
      v13 = 1;
      v16 = 1;
      v22 = 4;
      v19 = 8;
      LOBYTE(v6) = EtwWrite(
                     (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
                     &ACPI_ETW_EVENT_PCC_EXECUTE_COMMAND,
                     0LL,
                     6u,
                     &UserData);
    }
  }
  return (char)v6;
}
