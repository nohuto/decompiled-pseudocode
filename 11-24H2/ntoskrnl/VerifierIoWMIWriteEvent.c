/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x140BA1650
 * Callers:
 *     <none>
 * Callees:
 *     WmiVerifierCopyEvent @ 0x14064C438 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x14064C490 (WmiVerifierTakeEventOwnership.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v8 = WmiVerifierCopyEvent(v3);
    if ( v8 )
    {
      v6 = guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
      v11 = (void *)a1;
      if ( v6 < 0 )
        v11 = v8;
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
  }
  return (unsigned int)v6;
}
