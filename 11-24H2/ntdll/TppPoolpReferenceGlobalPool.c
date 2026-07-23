/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x180047E60
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     TpSetPoolMaxThreads @ 0x180086280 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180086C00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TpReleasePool @ 0x1800D9CF0 (TpReleasePool.c)
 *     TpSetPoolStackInformation @ 0x1800E9300 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x180101FB0 (TpSetPoolMinThreads.c)
 */

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _RTL_SRWLOCK *a2,
        volatile signed __int32 **a3)
{
  char v6; // si
  __int64 result; // rax
  PTP_POOL v8; // rsi
  ULONG v9; // edx
  unsigned int SelectedCpuSetCount; // edx
  unsigned int v11; // edx
  __int64 v12; // rdx
  NTSTATUS v13; // [rsp+20h] [rbp-28h]
  PTP_POOL Pool; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 || !a1 || !a2 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v6 = 0;
    RtlAcquireSRWLockShared(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v6 = 1;
    }
    RtlReleaseSRWLockShared(a2);
    if ( v6 )
      return 0LL;
  }
  Pool = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    result = 3221225485LL;
  }
  else
  {
    result = TpAllocPoolInternal(&Pool, 0LL);
  }
  v13 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v8 = Pool;
    }
    else
    {
      v8 = Pool;
      if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
      {
        if ( TppPoolpGlobalPoolMaxThreads )
        {
          TpSetPoolMaxThreads(Pool, TppPoolpGlobalPoolMaxThreads);
        }
        else
        {
          v9 = TppPoolpGlobalPoolMaxThreadsOverride;
          if ( !TppPoolpGlobalPoolMaxThreadsOverride )
          {
            if ( !Pool || (SelectedCpuSetCount = Pool->SelectedCpuSetCount, v8 = Pool, !SelectedCpuSetCount) )
              SelectedCpuSetCount = MEMORY[0x7FFE03C0];
            v9 = 8 * SelectedCpuSetCount;
            if ( v9 < 0x300 )
              v9 = 768;
          }
          TpSetPoolMaxThreads(v8, v9);
          if ( TppPoolpGlobalPoolMaxThreadsOverride )
          {
            v12 = 0LL;
          }
          else
          {
            if ( !v8 || (v11 = v8->SelectedCpuSetCount, v8 = Pool, !v11) )
              v11 = MEMORY[0x7FFE03C0];
            v12 = 4 * v11;
            if ( (unsigned int)v12 < 0x180 )
              v12 = 384LL;
          }
          TpSetPoolMaxThreadsSoftLimit(v8, v12);
        }
        if ( TppPoolpGlobalPoolStackSize )
        {
          v13 = TpSetPoolStackInformation(v8, TppPoolpGlobalPoolStackSize);
          if ( v13 < 0 )
            goto LABEL_40;
        }
      }
      else if ( a1 == (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
        TpSetPoolMaxThreads(Pool, 1u);
        v13 = TpSetPoolMinThreads(v8, 1u);
        if ( v13 < 0 )
          goto LABEL_40;
      }
      *a1 = &v8->Refcount.Refcount;
      v8 = 0LL;
      Pool = 0LL;
    }
LABEL_40:
    RtlReleaseSRWLockExclusive(a2);
    if ( v8 )
      TpReleasePool(v8);
    if ( v13 >= 0 )
      *a3 = *a1;
    return (unsigned int)v13;
  }
  return result;
}
