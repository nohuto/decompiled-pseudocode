/*
 * XREFs of PopDiagTraceFxDevicePreparation @ 0x140A6EDC8
 * Callers:
 *     PoFxPrepareDevice @ 0x140488860 (PoFxPrepareDevice.c)
 *     PoFxAbandonDevice @ 0x140A6EBB4 (PoFxAbandonDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDevicePreparation(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4)
{
  _UNKNOWN **v4; // rax
  int v6; // edi
  int v7; // ecx
  __int16 v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+60h] [rbp+Fh]
  int v14; // [rsp+64h] [rbp+13h]
  __int16 *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  __int64 v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  int *v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+6Fh] BYREF

  v4 = &retaddr;
  v26 = a2;
  v25 = a1;
  v6 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_PREPARATION);
    if ( (_BYTE)v4 )
    {
      v7 = *a3;
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v9 = (unsigned __int16)v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v25;
      v12 = &v26;
      v15 = &v9;
      v18 = *((_QWORD *)a3 + 1);
      v21 = &v10;
      UserData.Size = 8;
      v13 = 8;
      v19 = v7;
      v10 = v6;
      v16 = 2;
      v22 = 4;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_PREPARATION, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
