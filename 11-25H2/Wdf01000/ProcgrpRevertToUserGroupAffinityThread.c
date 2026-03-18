/*
 * XREFs of ProcgrpRevertToUserGroupAffinityThread @ 0x1400AC470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall ProcgrpRevertToUserGroupAffinityThread(_GROUP_AFFINITY *PreviousAffinity)
{
  if ( !PreviousAffinity->Reserved[0] && !PreviousAffinity->Reserved[1] && !PreviousAffinity->Reserved[2] )
  {
    if ( PreviousAffinity->Mask )
    {
      if ( !PreviousAffinity->Group )
        PfnKeRevertToUserAffinityThreadEx(PreviousAffinity->Mask);
    }
    else
    {
      KeRevertToUserAffinityThread();
    }
  }
}
