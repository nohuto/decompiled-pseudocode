/*
 * XREFs of VerifierMmMapIoSpace @ 0x140BA0990
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8B8F0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = 4;
  v5 = a3;
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("MmMapIoSpace", a2, a3, a4) )
  {
    return 0LL;
  }
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    if ( v5 != 1 )
    {
      v4 = 516;
      if ( v5 == 2 )
        v4 = 1028;
    }
    v9 = MmMapIoSpaceEx(a1, a2, v4);
  }
  else
  {
    v9 = guard_dispatch_icall_no_overrides(a1, a2, v5, a4);
  }
  v10 = v9;
  if ( v9 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 216LL, 0xE0u, a2);
  }
  return v10;
}
