/*
 * XREFs of TpReleaseJobNotification @ 0x180085760
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x1800863AC (TppJobpValidateJob.c)
 *     TppCleanupGroupMemberRelease @ 0x180086850 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LOGICAL __fastcall TpReleaseJobNotification(__int64 a1)
{
  LOGICAL result; // eax
  __int64 v3; // rdx
  LOGICAL (__fastcall *v4)(void *); // rax
  void *v5; // rcx

  result = TppJobpValidateJob(a1, 1LL);
  if ( result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( result )
    {
      TppJobpRundownJob(a1);
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( result == 1 )
      {
        v4 = **(LOGICAL (__fastcall ***)(void *))(a1 + 80);
        if ( (char *)v4 == (char *)TppSimplepFree )
        {
          return TppSimplepFree(a1 + 72, v3);
        }
        else if ( (char *)v4 == (char *)TppAlpcpFree )
        {
          return TppAlpcpFree(a1 + 72);
        }
        else
        {
          v5 = (void *)(a1 + 72);
          if ( v4 == TppWorkpFree )
            return TppWorkpFree(v5);
          else
            return v4(v5);
        }
      }
    }
  }
  return result;
}
