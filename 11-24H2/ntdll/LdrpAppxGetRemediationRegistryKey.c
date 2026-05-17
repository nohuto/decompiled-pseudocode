/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1801319B0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x180115D20 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x1800B6038 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x1800F7628 (RtlStringLengthWorkerW.c)
 *     NtOpenKeyEx @ 0x1801641E0 (NtOpenKeyEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10[2]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  __int64 *v13; // [rsp+70h] [rbp-98h]
  _DWORD v14[8]; // [rsp+78h] [rbp-90h]
  _WORD v15[264]; // [rsp+98h] [rbp-70h] BYREF

  v14[1] = 0;
  v11[1] = 0;
  result = RtlGetPersistedStateLocation(
             (wchar_t *)L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             0,
             v15,
             0x20Au,
             (unsigned int *)&v9);
  if ( (int)result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      v9 = 0LL;
      v7 = 0LL;
      *(_OWORD *)v10 = 0LL;
      result = RtlStringLengthWorkerW(v15, 0x7FFFLL, &v9);
      if ( (int)result < 0 )
        return result;
      v8 = 131097LL;
      goto LABEL_9;
    }
    result = RtlStringCbCatW(v15, 0x20AuLL, (__int64)L"\\PackageList\\");
    if ( (int)result >= 0 )
    {
      result = RtlStringCbCatW(v15, 0x20AuLL, a2);
      if ( (int)result >= 0 )
      {
        v9 = 0LL;
        v7 = 0LL;
        *(_OWORD *)v10 = 0LL;
        result = RtlStringLengthWorkerW(v15, 0x7FFFLL, &v9);
        if ( (int)result >= 0 )
        {
          v8 = 131353LL;
LABEL_9:
          v12 = 0LL;
          LOWORD(v10[0]) = 2 * v9;
          v11[0] = 48;
          WORD1(v10[0]) = 2 * v9 + 2;
          v14[0] = 64;
          v10[1] = (__int64)v15;
          v13 = v10;
          *(_OWORD *)&v14[2] = v7;
          return NtOpenKeyEx(a3, v8, v11, 0LL);
        }
      }
    }
  }
  return result;
}
