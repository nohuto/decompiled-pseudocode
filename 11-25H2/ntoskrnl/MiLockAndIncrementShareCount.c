/*
 * XREFs of MiLockAndIncrementShareCount @ 0x140491474
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
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
        HvlNotifyLongSpinWait();
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
