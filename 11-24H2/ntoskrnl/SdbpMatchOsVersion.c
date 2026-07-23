/*
 * XREFs of SdbpMatchOsVersion @ 0x140A04DE4
 * Callers:
 *     SdbpCheckForMatch @ 0x140A04CB0 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SdbReadQWORDTag @ 0x14080631C (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x1408081C4 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x140808380 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1408083C8 (SdbpCheckVersion.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 */

_BOOL8 __fastcall SdbpMatchOsVersion(__int64 a1, unsigned int a2)
{
  BOOL v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int FirstTag; // eax
  __int64 v7; // r9
  unsigned __int64 QWORDTag; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-148h] BYREF

  v4 = 1;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  v5 = (VersionInformation.dwBuildNumber | ((VersionInformation.dwMinorVersion | ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16;
  FirstTag = SdbFindFirstTag(a1, a2, 20509);
  if ( FirstTag )
  {
    QWORDTag = SdbReadQWORDTag(a1, FirstTag, 0LL, v7);
    v4 = SdbpCheckVersion(QWORDTag, v5) != 0;
  }
  v9 = SdbFindFirstTag(a1, a2, 20511);
  if ( v9 )
  {
    v11 = SdbReadQWORDTag(a1, v9, 0LL, v10);
    v4 = v4 && SdbpCheckFromVersion(v11, v5);
  }
  v12 = SdbFindFirstTag(a1, a2, 20510);
  if ( v12 )
  {
    v14 = SdbReadQWORDTag(a1, v12, 0LL, v13);
    return v4 && SdbpCheckUptoVersion(v14, v5);
  }
  return v4;
}
