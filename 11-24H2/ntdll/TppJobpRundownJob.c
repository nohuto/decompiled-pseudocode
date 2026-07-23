/*
 * XREFs of TppJobpRundownJob @ 0x180085608
 * Callers:
 *     TpReleaseJobNotification @ 0x180085760 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x180086370 (TpWaitForJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x18015A8B0 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppRaiseHandleStatus @ 0x1800870A8 (TppRaiseHandleStatus.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     NtQueryInformationJobObject @ 0x180162B00 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x180163560 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rsi
  void *v3; // rcx
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  void *v8; // rcx
  void (*v9)(void); // rax
  __int128 JobObjectInformation; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 272) )
  {
    v2 = (_RTL_SRWLOCK *)(a1 + 288);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 288));
    v3 = *(void **)(a1 + 272);
    if ( v3 )
    {
      JobObjectInformation = 0LL;
      v4 = ZwSetInformationJobObject(v3, JobObjectAssociateCompletionPortInformation, &JobObjectInformation, 0x10u);
      if ( v4 < 0
        || (v4 = NtQueryInformationJobObject(*(HANDLE *)(a1 + 272), JobObjectCompletionCounter, &v11, 8u, 0LL), v4 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v4, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v5 = (-2LL * v11) | 1;
        v11 = v5;
        v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v5);
        *(_QWORD *)(a1 + 272) = 0LL;
        v7 = v5 + v6;
        RtlReleaseSRWLockExclusive(v2);
        if ( v7 == 1 )
        {
          v8 = (void *)(a1 + 72);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          {
            v9 = **(void (***)(void))(a1 + 80);
            if ( (char *)v9 == (char *)TppSimplepFree )
            {
              TppSimplepFree(v8, TppSimplepFree);
            }
            else if ( (char *)v9 == (char *)TppAlpcpFree )
            {
              TppAlpcpFree(v8);
            }
            else if ( (char *)v9 == (char *)TppWorkpFree )
            {
              TppWorkpFree(v8);
            }
            else
            {
              v9();
            }
          }
        }
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v2);
    }
  }
}
