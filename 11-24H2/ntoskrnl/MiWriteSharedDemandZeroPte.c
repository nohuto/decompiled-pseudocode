/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1403951B4
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiLockCloneBlockAtDpc @ 0x14023EF08 (MiLockCloneBlockAtDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiUpdateCloneReducedCommit @ 0x140395144 (MiUpdateCloneReducedCommit.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, _QWORD *a6)
{
  __int64 v9; // rsi
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 result; // rax

  MiLockCloneBlockAtDpc((__int64)a3);
  v9 = a3[3];
  v10 = a3 + 2;
  if ( !v9 )
  {
    result = MiGetCloneCharges(*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 1198)), 2);
    if ( !(_DWORD)result )
    {
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
    *a3 = MiMakeDemandZeroPte(*(_BYTE *)v10 & 0x1F);
  }
  a3[3] = v9 + 1;
  MiUpdateCloneReducedCommit((__int64)a3, 1);
  _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
  v11 = MiMakePrototypePteDirect((__int64)a3) | 8;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a5 + 24) < 0 );
  }
  *a4 = v11;
  ++*a6;
  MiIncreaseUsedPtesInPfn(a5, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
