/*
 * XREFs of AcpiDiagTracePccAcquireSubspace @ 0x140051890
 * Callers:
 *     AcpiPccAcquireSubspaceCore @ 0x1400460D8 (AcpiPccAcquireSubspaceCore.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccAcquireSubspace(int a1, char a2, char a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-11h] BYREF
  char *v8; // [rsp+48h] [rbp-1h]
  int v9; // [rsp+50h] [rbp+7h]
  int v10; // [rsp+54h] [rbp+Bh]
  char *v11; // [rsp+58h] [rbp+Fh]
  int v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+64h] [rbp+1Bh]
  int *v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+74h] [rbp+2Bh]
  char *v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+84h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+57h] BYREF
  int v21; // [rsp+A8h] [rbp+5Fh] BYREF
  char v22; // [rsp+B0h] [rbp+67h] BYREF
  char v23; // [rsp+B8h] [rbp+6Fh] BYREF
  int v24; // [rsp+C0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v24 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    LOBYTE(v5) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_ACQUIRE_SUBSPACE);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (unsigned __int64)&v21;
      v8 = &v22;
      UserData.Size = 4;
      v11 = &v23;
      v9 = 1;
      v14 = &v24;
      v17 = &a5;
      v12 = 1;
      v15 = 4;
      v18 = 4;
      LOBYTE(v5) = EtwWrite(
                     (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
                     &ACPI_ETW_EVENT_PCC_ACQUIRE_SUBSPACE,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v5;
}
