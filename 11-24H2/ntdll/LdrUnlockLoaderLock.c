/*
 * XREFs of LdrUnlockLoaderLock @ 0x1800F22A0
 * Callers:
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     LdrpLogError @ 0x1800F633C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 */

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rcx

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else
  {
    v2 = 0;
    if ( Cookie )
    {
      v3 = Flags & 1;
      if ( (unsigned __int64)Cookie >= 0x1000000000000000LL
        || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v3 )
          RtlRaiseStatus(-1073741584);
        return -1073741584;
      }
      else if ( (_DWORD)v3 )
      {
        LdrpReleaseLoaderLock(v3, 13, 0);
      }
      else
      {
        LdrpReleaseLoaderLock(v3, 14, 0);
      }
    }
  }
  return v2;
}
