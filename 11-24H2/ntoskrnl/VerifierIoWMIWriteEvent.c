/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x140BA3650
 * Callers:
 *     <none>
 * Callees:
 *     WmiVerifierCopyEvent @ 0x14064A9F8 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x14064AA50 (WmiVerifierTakeEventOwnership.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  void *v6; // rsi
  void *v7; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v6 = WmiVerifierCopyEvent(v3);
    if ( v6 )
    {
      v4 = guard_dispatch_icall_no_overrides(v6, v5);
      v7 = (void *)a1;
      if ( v4 < 0 )
        v7 = v6;
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(v3, v2);
  }
  return (unsigned int)v4;
}
