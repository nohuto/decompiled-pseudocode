/*
 * XREFs of MiGetImageProtoProtection @ 0x140339AF0
 * Callers:
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x14033A020 (MiLocateSessionProtosInSubsection.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetImageProtoProtection(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  unsigned __int64 i; // r8
  __int64 result; // rax
  __int64 v7; // rdi
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rcx
  unsigned int v10; // r15d
  unsigned __int8 CurrentIrql; // r14
  __int64 SessionProtosInSubsection; // r15

  v2 = *(__int64 **)(a1 + 72);
  for ( i = 0LL; v2; v2 = (__int64 *)v2[2] )
  {
    if ( (v2[4] & 0x20000) != 0 && (v7 = *v2, (*(_DWORD *)(*v2 + 56) & 0x8000000) != 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      CycleTime = Process[1].CycleTime;
      if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        v10 = -1;
      else
        v10 = *(_DWORD *)(CycleTime + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v2, v10);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      i = *(_QWORD *)(SessionProtosInSubsection + 72);
    }
    else
    {
      i = v2[1];
    }
    if ( a2 >= i && a2 < i + 8LL * *((unsigned int *)v2 + 11) )
      break;
  }
  if ( (__int64)(a2 - i) >> 3 >= (unsigned __int64)(*((_DWORD *)v2 + 11) - (*((_DWORD *)v2 + 13) & 0x3FFFFFFFu)) )
    return 0LL;
  result = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  if ( (_DWORD)result == 7 )
    return (*((_DWORD *)v2 + 8) >> 1) & 0x1F;
  return result;
}
