/*
 * XREFs of AcpiDiagTracePccEjectSubspace @ 0x140056F40
 * Callers:
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400363B0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140036458 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

char __fastcall AcpiDiagTracePccEjectSubspace(int a1, char a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r10
  int v9; // r11d
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  char *v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  int *v19; // [rsp+78h] [rbp-90h]
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  int *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  int *v25; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+A8h] [rbp-60h] BYREF
  int *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  int *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  int *v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  int *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  int *v41; // [rsp+108h] [rbp+0h]
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF
  int v45; // [rsp+148h] [rbp+40h] BYREF
  char v46; // [rsp+150h] [rbp+48h] BYREF
  int v47; // [rsp+158h] [rbp+50h] BYREF
  int v48; // [rsp+160h] [rbp+58h] BYREF

  v5 = &retaddr;
  v48 = a4;
  v47 = a3;
  v46 = a2;
  v45 = a1;
  if ( (unsigned int)dword_140086930 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140086930);
    if ( (_BYTE)v5 )
    {
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v29 = &v12;
      v32 = &v11;
      v35 = &v13;
      v38 = &v14;
      v15 = a5;
      v41 = &v15;
      v12 = v9;
      v30 = 4;
      LOBYTE(v11) = v8;
      v33 = 1;
      v13 = v6;
      v36 = 4;
      v14 = v7;
      v39 = 4;
      v42 = 4;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140086930,
                     (unsigned __int8 *)dword_14007D073,
                     v6,
                     v7,
                     7u,
                     &v28);
    }
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    LOBYTE(v5) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_EJECT_SUBSPACE);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (unsigned __int64)&v45;
      v17 = &v46;
      v19 = &v47;
      v22 = &v48;
      v25 = &a5;
      UserData.Size = 4;
      v18 = 1LL;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      LOBYTE(v5) = EtwWrite(
                     (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
                     &ACPI_ETW_EVENT_PCC_EJECT_SUBSPACE,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v5;
}
