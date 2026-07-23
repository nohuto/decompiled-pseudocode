/*
 * XREFs of LdrpLogMapAndVerifyResourceFileFailure @ 0x1801142C0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall LdrpLogMapAndVerifyResourceFileFailure(
        int a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        unsigned __int16 *a5)
{
  NTSTATUS v9; // eax
  __int64 v10; // r9
  char v12; // [rsp+38h] [rbp-81h] BYREF
  int v13; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v14; // [rsp+40h] [rbp-79h] BYREF
  __int64 v15; // [rsp+48h] [rbp-71h] BYREF
  _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-61h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-41h]
  __int64 v18; // [rsp+80h] [rbp-39h]
  int *v19; // [rsp+88h] [rbp-31h]
  __int64 v20; // [rsp+90h] [rbp-29h]
  _DWORD *v21; // [rsp+98h] [rbp-21h]
  __int64 v22; // [rsp+A0h] [rbp-19h]
  __int64 v23; // [rsp+A8h] [rbp-11h]
  _DWORD v24[2]; // [rsp+B0h] [rbp-9h] BYREF
  char *v25; // [rsp+B8h] [rbp-1h]
  __int64 v26; // [rsp+C0h] [rbp+7h]
  int *v27; // [rsp+C8h] [rbp+Fh]
  __int64 v28; // [rsp+D0h] [rbp+17h]
  _DWORD *v29; // [rsp+D8h] [rbp+1Fh]
  __int64 v30; // [rsp+E0h] [rbp+27h]
  __int64 v31; // [rsp+E8h] [rbp+2Fh]
  _DWORD v32[2]; // [rsp+F0h] [rbp+37h] BYREF

  v9 = RtlRunOnceExecuteOnce(&RunOnce, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( v9 >= 0 && (unsigned int)dword_1801CE980 > 5 )
  {
    if ( (qword_1801CE990 & 0x200000000000LL) == 0
      || (LOBYTE(v9) = 1, (qword_1801CE998 & 0x200000000000LL) != qword_1801CE998) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 )
    {
      v17 = &v15;
      v15 = 0x1000000LL;
      v19 = &v13;
      v21 = v24;
      v23 = *((_QWORD *)a2 + 1);
      v24[0] = *a2;
      v25 = &v12;
      v27 = &v14;
      v29 = v32;
      v31 = *((_QWORD *)a5 + 1);
      v32[0] = *a5;
      v18 = 8LL;
      v13 = a1;
      v20 = 4LL;
      v22 = 2LL;
      v24[1] = 0;
      v12 = a3;
      v26 = 1LL;
      v14 = a4;
      v28 = 4LL;
      v30 = 2LL;
      v32[1] = 0;
      LOBYTE(v9) = tlgWriteTransfer_EtwEventWriteTransfer(
                     (__int64)&dword_1801CE980,
                     (unsigned __int8 *)dword_1801A4931,
                     0LL,
                     v10,
                     0xAu,
                     &v16);
    }
  }
  return v9;
}
