/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x1800AC9A0
 * Callers:
 *     RtlpGetCachedPath @ 0x1800AC640 (RtlpGetCachedPath.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rax
  bool v11; // zf
  _DWORD v12[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = v12[0];
  if ( (a1 & 0x100) != 0 )
    v4 = 5;
  v12[0] = v4;
  LODWORD(v5) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v5) = v5 + 1;
    v12[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v10 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
    v11 = LdrpDllDirectory.Length == 0;
    v12[v10] = 6;
    if ( !v11 )
    {
      v12[v5] = 0;
      LODWORD(v5) = v5 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v6 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v12[v6] = 7;
  }
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v7 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v12[v7] = 8;
  }
  v8 = RtlpComputePath(v12, (unsigned int)v5, a2);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v8 )
    *(_BYTE *)(v8 + 116) = 1;
  return v8;
}
