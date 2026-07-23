/*
 * XREFs of TpReleaseJobNotification @ 0x1800D6920
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppJobpValidateJob @ 0x1800D6A0C (TppJobpValidateJob.c)
 *     TppCleanupGroupMemberRelease @ 0x1800D6DF0 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     TppJobpRundownJob @ 0x1800D6F9C (TppJobpRundownJob.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int32 __fastcall TpReleaseJobNotification(__int64 a1)
{
  signed __int32 result; // eax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(void *); // rax
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
        v4 = **(__int64 (__fastcall ***)(void *))(a1 + 80);
        if ( (char *)v4 == (char *)TppSimplepFree )
        {
          return TppSimplepFree(a1 + 72, v3);
        }
        else if ( (char *)v4 == (char *)TppAlpcpFree )
        {
          return TppAlpcpFree((_QWORD *)(a1 + 72));
        }
        else
        {
          v5 = (void *)(a1 + 72);
          if ( (char *)v4 == (char *)TppWorkpFree )
            return TppWorkpFree(v5);
          else
            return v4(v5);
        }
      }
    }
  }
  return result;
}
