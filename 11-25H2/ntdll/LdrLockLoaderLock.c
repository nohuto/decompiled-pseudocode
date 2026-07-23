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

NTSTATUS __cdecl LdrLockLoaderLock(ULONG Flags, ULONG *Disposition, PVOID *Cookie)
{
  NTSTATUS v5; // ebx
  ULONG v6; // edi
  int v8; // eax
  int v9; // eax
  int UniqueThread; // [rsp+40h] [rbp+8h]

  v5 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( Cookie )
    *Cookie = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else if ( Cookie )
  {
    if ( (Flags & 2) != 0 && !Disposition )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return -1073741584;
    }
    if ( LdrInitState != 3 )
      return v5;
    v6 = 1;
    if ( (Flags & 1) == 0 )
    {
      if ( (Flags & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *Disposition = 2;
          return v5;
        }
      }
      else
      {
        LdrpAcquireLoaderLock();
        if ( !Disposition )
        {
LABEL_13:
          UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *Cookie = (PVOID)(((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                                    &LdrpLoaderLockAcquisitionCount,
                                                                                                    1u)
                                                                                                + 1) & 0xFFFE | 1LL);
          return v5;
        }
      }
      *Disposition = 1;
      goto LABEL_13;
    }
    if ( (Flags & 2) != 0 )
    {
      if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
      {
        v9 = (int)NtCurrentTeb()->ClientId.UniqueThread;
        *Cookie = (PVOID)(((unsigned __int64)(v9 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                        &LdrpLoaderLockAcquisitionCount,
                                                                                        1u)
                                                                                    + 1) & 0xFFFE | 1LL);
      }
      else
      {
        v6 = 2;
      }
      *Disposition = v6;
    }
    else
    {
      LdrpAcquireLoaderLock();
      if ( Disposition )
        *Disposition = 1;
      v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
      *Cookie = (PVOID)(((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                      &LdrpLoaderLockAcquisitionCount,
                                                                                      1u)
                                                                                  + 1) & 0xFFFE | 1LL);
    }
  }
  else
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return -1073741583;
  }
  return v5;
}
