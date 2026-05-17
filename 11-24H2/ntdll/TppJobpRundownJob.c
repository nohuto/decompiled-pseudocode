/*
 * XREFs of TppJobpRundownJob @ 0x180069A78
 * Callers:
 *     TpReleaseJobNotification @ 0x180069BD0 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x180069C80 (TpWaitForJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x18015C4F0 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppRaiseHandleStatus @ 0x18006A9B8 (TppRaiseHandleStatus.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     NtQueryInformationJobObject @ 0x180164740 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x1801651A0 (ZwSetInformationJobObject.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int64 *v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rax
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  void (*v11)(void); // rax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( *(_QWORD *)(a1 + 272) )
  {
    v4 = (volatile signed __int64 *)(a1 + 288);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 288), a2, a3);
    v5 = *(_QWORD *)(a1 + 272);
    if ( v5 )
    {
      v12 = 0LL;
      v6 = ZwSetInformationJobObject(v5, 7LL, &v12);
      if ( v6 < 0 || (v6 = NtQueryInformationJobObject(*(_QWORD *)(a1 + 272), 17LL, &v13), v6 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v6, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v7 = (-2LL * v13) | 1;
        v13 = v7;
        v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v7);
        *(_QWORD *)(a1 + 272) = 0LL;
        v9 = v7 + v8;
        RtlReleaseSRWLockExclusive(v4);
        if ( v9 == 1 )
        {
          v10 = a1 + 72;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          {
            v11 = **(void (***)(void))(a1 + 80);
            if ( (char *)v11 == (char *)TppSimplepFree )
            {
              TppSimplepFree(v10, TppSimplepFree);
            }
            else if ( (char *)v11 == (char *)TppAlpcpFree )
            {
              TppAlpcpFree(v10);
            }
            else if ( (char *)v11 == (char *)TppWorkpFree )
            {
              TppWorkpFree(v10);
            }
            else
            {
              v11();
            }
          }
        }
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v4);
    }
  }
}
