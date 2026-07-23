/*
 * XREFs of LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180002254
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A3438 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  NTSTATUS v6; // eax
  int v7; // r8d
  __int16 v9; // [rsp+38h] [rbp-59h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v11; // [rsp+40h] [rbp-51h] BYREF
  __int64 v12[9]; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v13[2]; // [rsp+90h] [rbp-1h] BYREF
  __int16 *v14; // [rsp+98h] [rbp+7h]
  __int64 v15; // [rsp+A0h] [rbp+Fh]
  __int64 v16; // [rsp+A8h] [rbp+17h]
  __int64 v17; // [rsp+B0h] [rbp+1Fh]
  __int16 *v18; // [rsp+B8h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+2Fh]
  __int64 v20; // [rsp+C8h] [rbp+37h]
  __int64 v21; // [rsp+D0h] [rbp+3Fh]

  v6 = RtlRunOnceExecuteOnce(&RunOnce, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( v6 >= 0 && (unsigned int)dword_1801CE980 > 5 )
  {
    if ( (qword_1801CE990 & 0x200000000000LL) == 0
      || (LOBYTE(v6) = 1, (qword_1801CE998 & 0x200000000000LL) != qword_1801CE998) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 )
    {
      v11 = 0x1000000LL;
      v9 = 4;
      v12[4] = (__int64)&v11;
      v10 = 4;
      v12[6] = (__int64)v13;
      v12[8] = *((_QWORD *)a1 + 1);
      v13[0] = *a1;
      v14 = &v9;
      v18 = &v10;
      v12[5] = 8LL;
      v12[7] = 2LL;
      v13[1] = 0;
      v15 = 2LL;
      v16 = a2;
      v17 = 16LL;
      v19 = 2LL;
      v20 = a3;
      v21 = 16LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwEventWriteTransfer(
                     (int)&dword_1801CE980,
                     (int)&dword_1801A47E7,
                     v7,
                     0,
                     9u,
                     (__int64)v12);
    }
  }
  return v6;
}
