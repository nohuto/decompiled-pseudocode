/*
 * XREFs of MiLockAndIncrementShareCount @ 0x14048B2F4
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v1 = 48 * a1 - 0x220000000000LL;
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v1 + 24) < 0 );
  }
  v3 = *(_QWORD *)(v1 + 24);
  v4 = v3 + 1;
  v5 = (v3 ^ (v3 + 1)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v1 + 24) = v4 ^ v5;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
