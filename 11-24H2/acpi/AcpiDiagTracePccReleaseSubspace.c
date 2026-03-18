/*
 * XREFs of AcpiDiagTracePccReleaseSubspace @ 0x1400570F8
 * Callers:
 *     AcpiPccReleaseSubspace @ 0x140064010 (AcpiPccReleaseSubspace.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccReleaseSubspace(int a1, char a2, char a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v7; // [rsp+40h] [rbp-40h]
  int v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+4Ch] [rbp-34h]
  char *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  int v17; // [rsp+90h] [rbp+10h] BYREF
  char v18; // [rsp+98h] [rbp+18h] BYREF
  char v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v4 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    LOBYTE(v4) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_RELEASE_SUBSPACE);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (unsigned __int64)&v17;
      v7 = &v18;
      v10 = &v19;
      v8 = 1;
      v13 = &v20;
      v11 = 1;
      UserData.Size = 4;
      v14 = 4;
      LOBYTE(v4) = EtwWrite(
                     (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
                     &ACPI_ETW_EVENT_PCC_RELEASE_SUBSPACE,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v4;
}
