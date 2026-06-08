/*
 * XREFs of ProcLibTraceInvalidPowerCurve @ 0x1400494D4
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x14004B740 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     memmove @ 0x140010040 (memmove.c)
 */

char __fastcall ProcLibTraceInvalidPowerCurve(char a1, unsigned int a2, const void *a3)
{
  unsigned __int16 v3; // bx
  char result; // al
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // [rsp+30h] [rbp-49h] BYREF
  char v9; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int16 v10; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  char *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  __int16 *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  _BYTE *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  _BYTE v24[32]; // [rsp+A0h] [rbp+27h] BYREF

  v3 = a2;
  result = (char)a3;
  if ( a2 )
    result = (unsigned __int8)memmove(v24, a3, 4LL * a2);
  if ( (unsigned int)dword_140018C60 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140018C60, 0x400000000000LL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v12 = &v8;
      v15 = &v9;
      v10 = v3;
      v18 = (__int16 *)&v10;
      v22 = 4 * v3;
      v13 = 1;
      v16 = 1;
      v21 = v24;
      v8 = a1;
      v9 = v3;
      v19 = 2;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140018C60,
               (unsigned __int8 *)dword_140014E11,
               v6,
               v7,
               (ULONG)6,
               &v11);
    }
  }
  return result;
}
