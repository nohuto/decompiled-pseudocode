/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x180048D80
 * Callers:
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     RtlpTpIoAlloc @ 0x1800C4B54 (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     TpReleasePool @ 0x1800A06E0 (TpReleasePool.c)
 *     TpSetPoolStackInformation @ 0x1800F0F30 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreads @ 0x1800FA0A0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMinThreads @ 0x180109990 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18010B540 (TpSetPoolMaxThreadsSoftLimit.c)
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
    result = TpAllocPoolInternal(&Pool, 0);
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
