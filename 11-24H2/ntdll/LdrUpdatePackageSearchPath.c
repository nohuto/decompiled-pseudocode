/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800EE180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpResetAppPackagesPath @ 0x1800EE27C (LdrpResetAppPackagesPath.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *Atom; // rax
  _WORD *v7; // r14
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rsi

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
      Atom = (_WORD *)RtlpAllocateAtom(v4 + 2);
      v7 = Atom;
      if ( Atom )
      {
        memmove(Atom, Src, v4);
        v7[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock, v8, v9);
        v10 = *((_QWORD *)&LdrpAppPackagesPath + 1);
        ++LdrpAppPackagesPathVersion;
        LOWORD(LdrpAppPackagesPath) = v4;
        WORD1(LdrpAppPackagesPath) = v4 + 2;
        *((_QWORD *)&LdrpAppPackagesPath + 1) = v7;
        RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
        if ( v10 != *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
          RtlpSysVolFree(v10);
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
