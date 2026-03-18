/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1402CFFF4
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     MiUpdateCloneReducedCommit @ 0x1402D1164 (MiUpdateCloneReducedCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockCloneBlockAtDpc @ 0x14033FE5C (MiLockCloneBlockAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, __int64 a5, _QWORD *a6)
{
  __int64 v9; // rsi
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 result; // rax

  MiLockCloneBlockAtDpc(a3);
  v9 = a3[3];
  v10 = a3 + 2;
  if ( !v9 )
  {
    result = MiGetCloneCharges(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 1198)), 2);
    if ( !(_DWORD)result )
    {
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
    *a3 = MiMakeDemandZeroPte(*v10 & 0x1F);
  }
  a3[3] = v9 + 1;
  MiUpdateCloneReducedCommit(a3, 1LL);
  _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
  v12 = MiMakePrototypePteDirect((__int64)a3) | 8;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a5 + 24) < 0 );
  }
  *a4 = v12;
  ++*a6;
  MiIncreaseUsedPtesInPfn(a5, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
