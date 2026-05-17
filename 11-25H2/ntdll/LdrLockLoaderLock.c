/*
 * XREFs of LdrLockLoaderLock @ 0x1800F5290
 * Callers:
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800F5458 (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrLockLoaderLock(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  int v6; // edi
  int v8; // eax
  int v9; // eax
  int UniqueThread; // [rsp+40h] [rbp+8h]

  v5 = 0;
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
      return v5;
    v6 = 1;
    if ( (a1 & 1) == 0 )
    {
      if ( (a1 & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *a2 = 2;
          return v5;
        }
      }
      else
      {
        LdrpAcquireLoaderLock();
        if ( !a2 )
        {
LABEL_13:
          UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                        &LdrpLoaderLockAcquisitionCount,
                                                                                        1u)
                                                                                    + 1) & 0xFFFE | 1LL;
          return v5;
        }
      }
      *a2 = 1;
      goto LABEL_13;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
      {
        v9 = (int)NtCurrentTeb()->ClientId.UniqueThread;
        *a3 = ((unsigned __int64)(v9 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                            &LdrpLoaderLockAcquisitionCount,
                                                                            1u)
                                                                        + 1) & 0xFFFE | 1LL;
      }
      else
      {
        v6 = 2;
      }
      *a2 = v6;
    }
    else
    {
      LdrpAcquireLoaderLock();
      if ( a2 )
        *a2 = 1;
      v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
      *a3 = ((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
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
  return v5;
}
