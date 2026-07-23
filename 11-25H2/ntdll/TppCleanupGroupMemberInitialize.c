/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x180048150
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char v5; // r14
  _QWORD *v7; // rdi
  unsigned int v8; // ecx
  volatile signed __int32 *v9; // rdx
  NTSTATUS InformationActivationContext; // esi
  __int64 v11; // rax
  volatile signed __int32 *v12; // rax
  _RTL_SRWLOCK *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  void *v16; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 **v21; // rcx
  _RTL_SRWLOCK *v22; // rdi
  volatile signed __int32 *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  signed __int32 v27; // eax
  _ACTIVATION_CONTEXT *v28; // rcx
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+60h] [rbp-18h] BYREF

  v5 = a4;
  *(_OWORD *)ActivationContext = 0LL;
  v7 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
LABEL_3:
    v8 = 1;
    goto LABEL_4;
  }
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
    goto LABEL_3;
  v8 = *(_DWORD *)(a3 + 60);
  if ( v8 >= 3 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 192) = v8;
  if ( (a4 & 2) != 0 && *(_QWORD *)(a1 + 144) )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(volatile signed __int32 **)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != (volatile signed __int32 *)-1LL
      && (((unsigned __int64)v9 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL
      && *v9 != 0x7FFFFFFF )
    {
      do
      {
        if ( *v9 == 0x7FFFFFFF )
          break;
        v27 = *v9;
      }
      while ( v27 != _InterlockedCompareExchange(v9, v27 + 1, v27) );
    }
  }
  else
  {
    InformationActivationContext = RtlQueryInformationActivationContext(
                                     1u,
                                     0LL,
                                     0LL,
                                     ActivationContextBasicInformation,
                                     ActivationContext,
                                     0x10uLL,
                                     0LL);
    if ( InformationActivationContext < 0 )
      return (unsigned int)InformationActivationContext;
    if ( ((__int64)ActivationContext[1] & 1) != 0 )
    {
      RtlReleaseActivationContext(ActivationContext[0]);
      v11 = -1LL;
      ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
    }
    else
    {
      v11 = (__int64)ActivationContext[0];
    }
    *(_QWORD *)(a1 + 96) = v11;
  }
  v12 = *(volatile signed __int32 **)(a1 + 144);
  if ( v12 )
  {
    _InterlockedIncrement(v12);
LABEL_14:
    InformationActivationContext = 0;
    v15 = *(_QWORD *)(a1 + 144);
    if ( v15 )
    {
      v16 = (void *)(v15 + 72);
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !SchedulerSharedDataSlot[i] )
          {
            v7 = &SchedulerSharedDataSlot[i];
            break;
          }
        }
      }
      if ( v7 )
        *v7 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v16);
      v19 = (__int64 *)(a1 + 152);
      v20 = *(_QWORD *)(a1 + 144) + 80LL;
      v21 = *(__int64 ***)(*(_QWORD *)(a1 + 144) + 88LL);
      if ( *v21 != (__int64 *)v20 )
        __fastfail(3u);
      *v19 = v20;
      *(_QWORD *)(a1 + 160) = v21;
      *v21 = v19;
      *(_QWORD *)(v20 + 8) = v19;
      v22 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 72LL);
      InformationActivationContext = 0;
    }
    else
    {
      v22 = &TppCleanupGroupMemberpNoPoolListLock;
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      v24 = (_QWORD *)(a1 + 152);
      v25 = off_1801CE740;
      if ( *off_1801CE740 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v24 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v25;
      *v25 = v24;
      off_1801CE740 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v22);
    v23 = *(volatile signed __int32 **)(a1 + 16);
    if ( v23 )
    {
      _InterlockedIncrement(v23);
      InformationActivationContext = 0;
    }
    goto LABEL_36;
  }
  if ( (v5 & 2) != 0 )
  {
    v13 = &TppPoolpSerializedPoolLock;
    v14 = (__int64 *)&TppPoolpSerializedPool;
  }
  else
  {
    v13 = &TppPoolpGlobalPoolLock;
    v14 = &TppPoolpGlobalPool;
  }
  InformationActivationContext = TppPoolpReferenceGlobalPool(v14, v13, a1 + 144);
  if ( InformationActivationContext >= 0 )
    goto LABEL_14;
LABEL_36:
  if ( InformationActivationContext < 0 )
  {
    v28 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( (unsigned __int64)&v28[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v28);
  }
  return (unsigned int)InformationActivationContext;
}
