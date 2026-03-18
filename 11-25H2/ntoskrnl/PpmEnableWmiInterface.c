/*
 * XREFs of PpmEnableWmiInterface @ 0x14074F964
 * Callers:
 *     PopNewProcessorCallback @ 0x14073CCE0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x1404692D0 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
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
