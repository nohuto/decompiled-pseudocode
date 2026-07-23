/*
 * XREFs of ExpVerifyWindowsOsOptions @ 0x14094D80C
 * Callers:
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 * Callees:
 *     ExpSafeWcslen @ 0x14094E328 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14094E480 (ExpVerifyFilePath.c)
 */

__int64 __fastcall ExpVerifyWindowsOsOptions(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v4 = (unsigned int)ExpSafeWcslen(a1 + 20, a1 + a2);
  v5 = v2[3];
  if ( v5 < 0x14 )
    return 3221225485LL;
  if ( v5 > v3 )
    return 3221225485LL;
  if ( v2[2] != 1 )
    return 3221225485LL;
  v7 = (unsigned int)v2[4];
  if ( (v7 & 3) != 0 )
    return 3221225485LL;
  if ( (unsigned int)v7 >= v3 )
    return 3221225485LL;
  if ( (_DWORD)v4 == -1 )
    return 3221225485LL;
  v8 = (unsigned __int64)v2 + v7;
  if ( (unsigned __int64)v2 + 2 * v4 + 22 > v8 )
    return 3221225485LL;
  else
    return ExpVerifyFilePath(v8);
}
