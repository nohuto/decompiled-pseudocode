/*
 * XREFs of SecureDump_PrepareForInit @ 0x14059F0BC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     SecureDump_LogErrorEvent @ 0x14059F08C (SecureDump_LogErrorEvent.c)
 *     SecureDump_ReadRegistry @ 0x14059F5A8 (SecureDump_ReadRegistry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SecureDump_PrepareForInit(__int64 a1, _BYTE *a2)
{
  int v3; // ebx
  int Registry; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp-10h] BYREF
  char v11; // [rsp+80h] [rbp+20h] BYREF
  PVOID P; // [rsp+90h] [rbp+30h] BYREF

  v9[0] = 13238472LL;
  P = 0LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\EncryptionCertificates\\Certificate.1";
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v10[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\ForceDumpsDisabled";
  v8[0] = 8388734LL;
  v3 = 2;
  v10[0] = 10879140LL;
  ForceDumpDisabled = 1;
  if ( !a2 )
    return;
  *a2 = 0;
  xmmword_140E661D8 = 0LL;
  *(_OWORD *)&dwFlags = 0LL;
  Registry = SecureDump_ReadRegistry(
               (unsigned int)v10,
               (unsigned int)L"GuardedHost",
               4,
               (unsigned int)&P,
               (__int64)&v11);
  if ( Registry < 0 )
  {
    if ( Registry != -1073741772 )
      goto LABEL_17;
  }
  else
  {
    LODWORD(xmmword_140E661D8) = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( (_DWORD)xmmword_140E661D8 )
      goto LABEL_16;
  }
  v7 = SecureDump_ReadRegistry(
         (unsigned int)v8,
         (unsigned int)L"DumpEncryptionEnabled",
         4,
         (unsigned int)&P,
         (__int64)&v11);
  if ( v7 < 0 )
  {
    if ( v7 != -1073741772 )
      goto LABEL_17;
  }
  else
  {
    DWORD1(xmmword_140E661D8) = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( DWORD1(xmmword_140E661D8) )
    {
      *a2 = 1;
      if ( (int)SecureDump_ReadRegistry(
                  (unsigned int)v8,
                  (unsigned int)L"ProvisionDumpKeyWithCertificate",
                  4,
                  (unsigned int)&P,
                  (__int64)&v11) >= 0 )
      {
        SecureDmpLoadCertificate = *(_DWORD *)P != 0;
        ExFreePoolWithTag(P, 0);
      }
      if ( SecureDmpLoadCertificate
        || (int)SecureDump_ReadRegistry(
                  (unsigned int)v9,
                  (unsigned int)L"PublicKey",
                  3,
                  (unsigned int)&xmmword_140E661D8 + 8,
                  (__int64)&dwFlags) >= 0
        && (int)SecureDump_ReadRegistry(
                  (unsigned int)v9,
                  (unsigned int)L"Thumbprint",
                  1,
                  (unsigned int)(&dwFlags + 2),
                  (__int64)(&dwFlags + 1)) >= 0 )
      {
        ForceDumpDisabled = 0;
      }
      goto LABEL_17;
    }
  }
  ForceDumpDisabled = 0;
LABEL_16:
  v3 = 0;
LABEL_17:
  if ( ForceDumpDisabled == 1 )
  {
    if ( *((_QWORD *)&xmmword_140E661D8 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140E661D8 + 1), 0);
      *((_QWORD *)&xmmword_140E661D8 + 1) = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( v3 )
    {
      SecureDmpEncryptionContext = 3;
      SecureDump_LogErrorEvent(v3, v5, v6);
    }
  }
  else
  {
    SecureDmpEncryptionContext = 1;
  }
}
