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
        volatile signed __int32 *a2,
        volatile signed __int32 **a3)
{
  char v6; // si
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

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
  v14 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    result = 3221225485LL;
  }
  else
  {
    result = TpAllocPoolInternal(&v14, 0);
  }
  v13 = result;
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      v8 = v14;
    }
    else
    {
      v8 = v14;
      if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
      {
        if ( TppPoolpGlobalPoolMaxThreads )
        {
          TpSetPoolMaxThreads(v14, (unsigned int)TppPoolpGlobalPoolMaxThreads);
        }
        else
        {
          v9 = (unsigned int)TppPoolpGlobalPoolMaxThreadsOverride;
          if ( !TppPoolpGlobalPoolMaxThreadsOverride )
          {
            if ( !v14 || (v10 = *(_DWORD *)(v14 + 440), v8 = v14, !v10) )
              v10 = MEMORY[0x7FFE03C0];
            v9 = (unsigned int)(8 * v10);
            if ( (unsigned int)v9 < 0x300 )
              v9 = 768LL;
          }
          TpSetPoolMaxThreads(v8, v9);
          if ( TppPoolpGlobalPoolMaxThreadsOverride )
          {
            v12 = 0LL;
          }
          else
          {
            if ( !v8 || (v11 = *(_DWORD *)(v8 + 440), v8 = v14, !v11) )
              v11 = MEMORY[0x7FFE03C0];
            v12 = (unsigned int)(4 * v11);
            if ( (unsigned int)v12 < 0x180 )
              v12 = 384LL;
          }
          TpSetPoolMaxThreadsSoftLimit(v8, v12);
        }
        if ( TppPoolpGlobalPoolStackSize )
        {
          v13 = TpSetPoolStackInformation(v8);
          if ( v13 < 0 )
            goto LABEL_40;
        }
      }
      else if ( a1 == (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
        TpSetPoolMaxThreads(v14, 1LL);
        v13 = TpSetPoolMinThreads(v8, 1LL);
        if ( v13 < 0 )
          goto LABEL_40;
      }
      *a1 = (volatile signed __int32 *)v8;
      v8 = 0LL;
      v14 = 0LL;
    }
LABEL_40:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a2);
    if ( v8 )
      TpReleasePool(v8);
    if ( v13 >= 0 )
      *a3 = *a1;
    return (unsigned int)v13;
  }
  return result;
}
