/*
 * XREFs of LdrLockLoaderLock @ 0x1800F3720
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800F38E8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrLockLoaderLock(__int64 a1, int *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // edi
  int v9; // eax
  int v10; // eax
  int UniqueThread; // [rsp+40h] [rbp+8h]

  v6 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return (unsigned int)-1073741585;
  }
  else if ( a3 )
  {
    if ( (a1 & 2) != 0 && !a2 )
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return (unsigned int)-1073741584;
    }
    if ( LdrInitState != 3 )
      return v6;
    v7 = 1;
    if ( (a1 & 1) == 0 )
    {
      if ( (a1 & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *a2 = 2;
          return v6;
        }
      }
      else
      {
        LdrpAcquireLoaderLock(a1, (__int64)a2, (__int64)a3, a4);
        if ( !a2 )
        {
LABEL_13:
          UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                        &LdrpLoaderLockAcquisitionCount,
                                                                                        1u)
                                                                                    + 1) & 0xFFFE | 1LL;
          return v6;
        }
      }
      *a2 = 1;
      goto LABEL_13;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
      {
        v10 = (int)NtCurrentTeb()->ClientId.UniqueThread;
        *a3 = ((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                             &LdrpLoaderLockAcquisitionCount,
                                                                             1u)
                                                                         + 1) & 0xFFFE | 1LL;
      }
      else
      {
        v7 = 2;
      }
      *a2 = v7;
    }
    else
    {
      LdrpAcquireLoaderLock(a1, (__int64)a2, (__int64)a3, a4);
      if ( a2 )
        *a2 = 1;
      v9 = (int)NtCurrentTeb()->ClientId.UniqueThread;
      *a3 = ((unsigned __int64)(v9 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                          &LdrpLoaderLockAcquisitionCount,
                                                                          1u)
                                                                      + 1) & 0xFFFE | 1LL;
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return (unsigned int)-1073741583;
  }
  return v6;
}
