/*
 * XREFs of CrmLogSrvUnregisterStop @ 0x1800647F4
 * Callers:
 *     CrmSrvUnregister @ 0x180064644 (CrmSrvUnregister.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

int __fastcall CrmLogSrvUnregisterStop(int a1, _BYTE *a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rax
  int v7; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+90h] [rbp-9h] BYREF
  UUID *v10; // [rsp+B0h] [rbp+17h]
  __int64 v11; // [rsp+B8h] [rbp+1Fh]
  int *v12; // [rsp+C0h] [rbp+27h]
  __int64 v13; // [rsp+C8h] [rbp+2Fh]
  _BYTE *v14; // [rsp+D0h] [rbp+37h]
  int v15; // [rsp+D8h] [rbp+3Fh]
  int v16; // [rsp+DCh] [rbp+43h]

  LODWORD(v4) = (unsigned int)memset_0(v8, 0, 0x44uLL);
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 )
  {
    v4 = qword_1800E8300 & 1;
    if ( v4 == qword_1800E8300 )
    {
      v11 = 16LL;
      v16 = 0;
      v10 = &Uuid;
      v7 = a1;
      v12 = &v7;
      v13 = 4LL;
      v5 = v8;
      if ( a2 )
        v5 = a2;
      v14 = v5;
      v15 = 4 * (unsigned __int8)v5[1] + 8;
      LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E82E8, byte_1800D23C0, 0LL, 0LL, 5u, &v9);
    }
  }
  return v4;
}
