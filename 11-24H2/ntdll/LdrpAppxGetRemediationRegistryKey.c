/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x18012FBE0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x1800828D8 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x1800F1D78 (RtlStringLengthWorkerW.c)
 *     NtOpenKeyEx @ 0x1801625A0 (NtOpenKeyEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  ACCESS_MASK v8; // edx
  __int64 BufferLengthOut; // [rsp+48h] [rbp-C0h] BYREF
  ULONG v10[4]; // [rsp+50h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR TargetPath[264]; // [rsp+98h] [rbp-70h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             LocationTypeRegistry,
             TargetPath,
             0x20Au,
             (PULONG)&BufferLengthOut);
  if ( result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      BufferLengthOut = 0LL;
      v7 = 0LL;
      *(_OWORD *)v10 = 0LL;
      result = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, &BufferLengthOut);
      if ( result < 0 )
        return result;
      v8 = 131097;
      goto LABEL_9;
    }
    result = RtlStringCbCatW(TargetPath, 0x20AuLL, (__int64)L"\\PackageList\\");
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(TargetPath, 0x20AuLL, a2);
      if ( result >= 0 )
      {
        BufferLengthOut = 0LL;
        v7 = 0LL;
        *(_OWORD *)v10 = 0LL;
        result = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, &BufferLengthOut);
        if ( result >= 0 )
        {
          v8 = 131353;
LABEL_9:
          ObjectAttributes.RootDirectory = 0LL;
          LOWORD(v10[0]) = 2 * BufferLengthOut;
          ObjectAttributes.Length = 48;
          HIWORD(v10[0]) = 2 * BufferLengthOut + 2;
          ObjectAttributes.Attributes = 64;
          *(_QWORD *)&v10[2] = TargetPath;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = v7;
          return NtOpenKeyEx(a3, v8, &ObjectAttributes, 0);
        }
      }
    }
  }
  return result;
}
