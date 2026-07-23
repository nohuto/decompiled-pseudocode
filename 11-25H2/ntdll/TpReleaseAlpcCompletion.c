/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800D6B30
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppAlpcpValidateAlpc @ 0x1800D6BDC (TppAlpcpValidateAlpc.c)
 *     TppCleanupGroupMemberRelease @ 0x1800D6DF0 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  __int64 v2; // rdx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  _TPP_CLEANUP_GROUP_MEMBER *p_CleanupGroupMember; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 1LL, 0LL) )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(&Alpc->CleanupGroupMember, 1LL) )
    {
      Alpc->CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
      if ( _InterlockedExchangeAdd(&Alpc->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
      {
        Free = Alpc->CleanupGroupMember.VFuncs->Free;
        if ( (char *)Free == (char *)TppSimplepFree )
        {
          TppSimplepFree(&Alpc->CleanupGroupMember, v2);
        }
        else if ( (char *)Free == (char *)TppAlpcpFree )
        {
          TppAlpcpFree(&Alpc->CleanupGroupMember.Refcount.Refcount);
        }
        else
        {
          p_CleanupGroupMember = &Alpc->CleanupGroupMember;
          if ( (char *)Free == (char *)TppWorkpFree )
            TppWorkpFree(p_CleanupGroupMember);
          else
            Free(p_CleanupGroupMember);
        }
      }
    }
  }
}
