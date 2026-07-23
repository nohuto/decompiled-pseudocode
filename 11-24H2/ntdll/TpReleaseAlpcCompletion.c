/*
 * XREFs of TpReleaseAlpcCompletion @ 0x180086590
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppAlpcpValidateAlpc @ 0x18008663C (TppAlpcpValidateAlpc.c)
 *     TppCleanupGroupMemberRelease @ 0x180086850 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
          TppAlpcpFree(&Alpc->CleanupGroupMember);
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
