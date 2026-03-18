/*
 * XREFs of AcpiDiagTracePccCommandTimeout @ 0x140056DC0
 * Callers:
 *     AcpiPccWatchdog @ 0x1400513F0 (AcpiPccWatchdog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400363B0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140036458 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTracePccCommandTimeout(_QWORD *a1, _DWORD *a2, int a3, int a4, int a5, unsigned __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+34h] [rbp-65h] BYREF
  int v14; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  int *v16; // [rsp+50h] [rbp-49h]
  int v17; // [rsp+58h] [rbp-41h]
  int v18; // [rsp+5Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-39h] BYREF
  int *v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  int *v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+9Ch] [rbp+3h]
  int *v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]
  int v29; // [rsp+100h] [rbp+67h] BYREF
  int v30; // [rsp+108h] [rbp+6Fh] BYREF

  v30 = a4;
  v29 = a3;
  v8 = MEMORY[0xFFFFF78000000008];
  if ( MEMORY[0xFFFFF78000000008] > a6 && MEMORY[0xFFFFF78000000008] - a6 > 0x861C46800LL )
  {
    if ( (unsigned int)dword_140086930 > 5 && tlgKeywordOn((__int64)&dword_140086930) )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v12 = v29;
      v20 = &v12;
      v13 = v30 - a5;
      v23 = &v13;
      v26 = &v14;
      v14 = v30;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140086930,
        (unsigned __int8 *)dword_14007CF91,
        v9,
        v10,
        5u,
        &v19);
    }
    v11 = v30;
    *a1 = v8;
    *a2 = v11;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_COMMAND_TIMEOUT) )
    {
      UserData.Reserved = 0;
      v18 = 0;
      UserData.Ptr = (unsigned __int64)&v29;
      UserData.Size = 4;
      v16 = &v30;
      v17 = 4;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_COMMAND_TIMEOUT, 0LL, 2u, &UserData);
    }
  }
}
