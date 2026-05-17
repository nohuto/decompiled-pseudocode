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
  volatile signed __int32 **v7; // rdi
  unsigned int v8; // ecx
  volatile signed __int32 *v9; // rdx
  int InformationActivationContext; // esi
  volatile signed __int32 *v11; // rax
  void *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 **v20; // rcx
  volatile signed __int64 *v21; // rdi
  volatile signed __int32 *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  signed __int32 v26; // eax
  volatile signed __int32 *v27; // rcx

  v5 = a4;
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
        v26 = *v9;
      }
      while ( v26 != _InterlockedCompareExchange(v9, v26 + 1, v26) );
    }
  }
  else
  {
    InformationActivationContext = RtlQueryInformationActivationContext(1LL, 0LL, 0LL);
    if ( InformationActivationContext < 0 )
      return (unsigned int)InformationActivationContext;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v11 = *(volatile signed __int32 **)(a1 + 144);
  if ( v11 )
  {
    _InterlockedIncrement(v11);
LABEL_12:
    InformationActivationContext = 0;
    v14 = *(_QWORD *)(a1 + 144);
    if ( v14 )
    {
      v15 = (volatile signed __int32 *)(v14 + 72);
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !SchedulerSharedDataSlot[i] )
          {
            v7 = (volatile signed __int32 **)&SchedulerSharedDataSlot[i];
            break;
          }
        }
      }
      if ( v7 )
        *v7 = v15;
      if ( _interlockedbittestandset64(v15, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v15);
      v18 = (__int64 *)(a1 + 152);
      v19 = *(_QWORD *)(a1 + 144) + 80LL;
      v20 = *(__int64 ***)(*(_QWORD *)(a1 + 144) + 88LL);
      if ( *v20 != (__int64 *)v19 )
        __fastfail(3u);
      *v18 = v19;
      *(_QWORD *)(a1 + 160) = v20;
      *v20 = v18;
      *(_QWORD *)(v19 + 8) = v18;
      v21 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 144) + 72LL);
      InformationActivationContext = 0;
    }
    else
    {
      v21 = &TppCleanupGroupMemberpNoPoolListLock;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppCleanupGroupMemberpNoPoolListLock);
      v23 = (_QWORD *)(a1 + 152);
      v24 = off_1801CE740;
      if ( *off_1801CE740 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v23 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v24;
      *v24 = v23;
      off_1801CE740 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v21);
    v22 = *(volatile signed __int32 **)(a1 + 16);
    if ( v22 )
    {
      _InterlockedIncrement(v22);
      InformationActivationContext = 0;
    }
    goto LABEL_34;
  }
  if ( (v5 & 2) != 0 )
  {
    v12 = &TppPoolpSerializedPoolLock;
    v13 = &TppPoolpSerializedPool;
  }
  else
  {
    v12 = &TppPoolpGlobalPoolLock;
    v13 = &TppPoolpGlobalPool;
  }
  InformationActivationContext = TppPoolpReferenceGlobalPool(v13, v12, a1 + 144);
  if ( InformationActivationContext >= 0 )
    goto LABEL_12;
LABEL_34:
  if ( InformationActivationContext < 0 )
  {
    v27 = *(volatile signed __int32 **)(a1 + 96);
    if ( (unsigned __int64)v27 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v27);
  }
  return (unsigned int)InformationActivationContext;
}
