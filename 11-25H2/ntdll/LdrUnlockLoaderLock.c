/*
 * XREFs of LdrUnlockLoaderLock @ 0x18003F1D0
 * Callers:
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     LdrpLogError @ 0x1800FD63C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else
  {
    v2 = 0;
    if ( a2 )
    {
      v3 = a1 & 1;
      if ( a2 >= 0x1000000000000000LL || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v3 )
          RtlRaiseStatus(3221225712LL);
        return (unsigned int)-1073741584;
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
