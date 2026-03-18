/*
 * XREFs of KiRspInIstStack @ 0x14040EE44
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     KeInvalidAccessAllowed @ 0x1402292D0 (KeInvalidAccessAllowed.c)
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     MiComputeMaximumFaultCluster @ 0x14040EB50 (MiComputeMaximumFaultCluster.c)
 *     KiMcheckFastForward @ 0x1405CA050 (KiMcheckFastForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRspInIstStack(unsigned int a1, unsigned __int64 a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v6; // r8

  v2 = 0;
  v3 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  v4 = (unsigned int)KeIstStackSize;
  if ( KiKvaShadow )
    v4 = 464LL;
  if ( a2 <= v3 && a2 >= v3 - v4 )
    return 1LL;
  if ( !KiKvaShadow )
    return 0LL;
  v6 = *(_QWORD *)(v3 + 8);
  if ( a2 > v6 )
    return 0LL;
  LOBYTE(v2) = a2 >= v6 - (unsigned int)(KeIstStackSize - 32);
  return v2;
}
