/*
 * XREFs of AcpiDiagTracePccCommandComplete @ 0x140051984
 * Callers:
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccCommandComplete(int a1, char a2, int a3, char a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-41h] BYREF
  char *v10; // [rsp+48h] [rbp-31h]
  int v11; // [rsp+50h] [rbp-29h]
  int v12; // [rsp+54h] [rbp-25h]
  int *v13; // [rsp+58h] [rbp-21h]
  int v14; // [rsp+60h] [rbp-19h]
  int v15; // [rsp+64h] [rbp-15h]
  char *v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+74h] [rbp-5h]
  char *v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+84h] [rbp+Bh]
  char *v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+94h] [rbp+1Bh]
  char *v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+A0h] [rbp+27h]
  int v27; // [rsp+A4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+47h] BYREF
  int v29; // [rsp+C8h] [rbp+4Fh] BYREF
  char v30; // [rsp+D0h] [rbp+57h] BYREF
  int v31; // [rsp+D8h] [rbp+5Fh] BYREF
  char v32; // [rsp+E0h] [rbp+67h] BYREF

  v7 = &retaddr;
  v32 = a4;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    LOBYTE(v7) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_COMMAND_COMPLETE);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (unsigned __int64)&v29;
      UserData.Size = 4;
      v10 = &v30;
      v13 = &v31;
      v16 = &v32;
      v19 = &a5;
      v22 = &a6;
      v25 = &a7;
      v11 = 1;
      v14 = 4;
      v17 = 1;
      v20 = 1;
      v26 = 4;
      v23 = 8;
      LOBYTE(v7) = EtwWrite(
                     (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
                     &ACPI_ETW_EVENT_PCC_COMMAND_COMPLETE,
                     0LL,
                     7u,
                     &UserData);
    }
  }
  return (char)v7;
}
