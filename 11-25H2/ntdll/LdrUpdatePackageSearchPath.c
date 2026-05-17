/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800EEC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpResetAppPackagesPath @ 0x1800EED5C (LdrpResetAppPackagesPath.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *Atom; // rax
  _WORD *v7; // r14
  __int64 v8; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)LdrpResetAppPackagesPath();
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      Atom = (_WORD *)RtlpAllocateAtom();
      v7 = Atom;
      if ( Atom )
      {
        memmove(Atom, Src, v4);
        v7[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock);
        v8 = *((_QWORD *)&LdrpAppPackagesPath + 1);
        ++LdrpAppPackagesPathVersion;
        LOWORD(LdrpAppPackagesPath) = v4;
        WORD1(LdrpAppPackagesPath) = v4 + 2;
        *((_QWORD *)&LdrpAppPackagesPath + 1) = v7;
        RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
        if ( v8 != *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
          RtlpSysVolFree(v8);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)LdrpResetAppPackagesPath();
  }
  return v1;
}
