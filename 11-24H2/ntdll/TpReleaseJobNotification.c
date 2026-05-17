/*
 * XREFs of TpReleaseJobNotification @ 0x180069BD0
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180069CBC (TppJobpValidateJob.c)
 *     TppCleanupGroupMemberRelease @ 0x18006A160 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpReleaseJobNotification(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rcx

  result = TppJobpValidateJob(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( (_DWORD)result )
    {
      TppJobpRundownJob(a1, v3, v4);
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v6 = **(__int64 (__fastcall ***)(__int64))(a1 + 80);
        if ( (char *)v6 == (char *)TppSimplepFree )
        {
          return TppSimplepFree(a1 + 72, v5);
        }
        else if ( v6 == TppAlpcpFree )
        {
          return TppAlpcpFree(a1 + 72);
        }
        else
        {
          v7 = a1 + 72;
          if ( v6 == TppWorkpFree )
            return TppWorkpFree(v7);
          else
            return v6(v7);
        }
      }
    }
  }
  return result;
}
