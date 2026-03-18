/*
 * XREFs of PpmEnableWmiInterface @ 0x14075C1E4
 * Callers:
 *     PopNewProcessorCallback @ 0x140748CF0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x140467A20 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  unsigned int i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 35120), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 35112), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
