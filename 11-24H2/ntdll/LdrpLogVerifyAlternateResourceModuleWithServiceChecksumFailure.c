/*
 * XREFs of LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180095108
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180094588 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // r8
  __int16 v9; // [rsp+38h] [rbp-59h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v11; // [rsp+40h] [rbp-51h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-29h]
  __int64 v14; // [rsp+70h] [rbp-21h]
  _DWORD *v15; // [rsp+78h] [rbp-19h]
  __int64 v16; // [rsp+80h] [rbp-11h]
  __int64 v17; // [rsp+88h] [rbp-9h]
  _DWORD v18[2]; // [rsp+90h] [rbp-1h] BYREF
  __int16 *v19; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+A0h] [rbp+Fh]
  __int64 v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  __int16 *v23; // [rsp+B8h] [rbp+27h]
  __int64 v24; // [rsp+C0h] [rbp+2Fh]
  __int64 v25; // [rsp+C8h] [rbp+37h]
  __int64 v26; // [rsp+D0h] [rbp+3Fh]

  v6 = RtlRunOnceExecuteOnce(&stru_1801D15C0, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( v6 >= 0 && (unsigned int)dword_1801CB980 > 5 )
  {
    if ( (qword_1801CB990 & 0x200000000000LL) == 0
      || (LOBYTE(v6) = 1, (qword_1801CB998 & 0x200000000000LL) != qword_1801CB998) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 )
    {
      v11 = 0x1000000LL;
      v9 = 4;
      v13 = &v11;
      v10 = 4;
      v15 = v18;
      v17 = *((_QWORD *)a1 + 1);
      v18[0] = *a1;
      v19 = &v9;
      v23 = &v10;
      v14 = 8LL;
      v16 = 2LL;
      v18[1] = 0;
      v20 = 2LL;
      v21 = a2;
      v22 = 16LL;
      v24 = 2LL;
      v25 = a3;
      v26 = 16LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwEventWriteTransfer(
                     (__int64)&dword_1801CB980,
                     (unsigned __int8 *)dword_1801A193F,
                     v7,
                     0LL,
                     9u,
                     &v12);
    }
  }
  return v6;
}
