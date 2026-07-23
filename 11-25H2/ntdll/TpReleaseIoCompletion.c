/*
 * XREFs of TpReleaseIoCompletion @ 0x1800D6CA0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800D6D50 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800D6DF0 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  __int64 v2; // rdx
  void (__fastcall *Free)(_TPP_CLEANUP_GROUP_MEMBER *); // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppIopValidateIo(Io, 1LL) )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(Io, 1LL) )
    {
      Io->CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
      if ( _InterlockedExchangeAdd(&Io->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
      {
        Free = Io->CleanupGroupMember.VFuncs->Free;
        if ( (char *)Free == (char *)TppSimplepFree )
        {
          TppSimplepFree(Io, v2);
        }
        else if ( (char *)Free == (char *)TppAlpcpFree )
        {
          TppAlpcpFree(Io);
        }
        else if ( (char *)Free == (char *)TppWorkpFree )
        {
          TppWorkpFree(Io);
        }
        else
        {
          Free(&Io->CleanupGroupMember);
        }
      }
    }
  }
}
