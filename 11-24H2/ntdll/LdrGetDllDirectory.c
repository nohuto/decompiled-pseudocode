/*
 * XREFs of LdrGetDllDirectory @ 0x1800DBFF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlCopyUnicodeString @ 0x1800DC080 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock, a2, a3);
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = (unsigned __int16)LdrpDllDirectory + 2;
  if ( v4 >= v5 )
  {
    RtlCopyUnicodeString(a1, &LdrpDllDirectory);
    v6 = 0;
  }
  else
  {
    *(_WORD *)a1 = v5;
    v6 = -1073741789;
    if ( (_WORD)v4 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v6;
}
