/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x14026A080
 * Callers:
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiLockCloneBlockAtDpc @ 0x140207058 (MiLockCloneBlockAtDpc.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiUpdateCloneReducedCommit @ 0x14026A19C (MiUpdateCloneReducedCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, __int64 a5, _QWORD *a6)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  volatile signed __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  MiLockCloneBlockAtDpc((__int64)a3, a2, (__int64)a3, (__int64)a4);
  v11 = a3[3];
  v12 = a3 + 2;
  if ( !v11 )
  {
    result = MiGetCloneCharges(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 1198)), 2, v9, v10);
    if ( !(_DWORD)result )
    {
      _InterlockedAnd64(v12, 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
    *a3 = MiMakeDemandZeroPte(*v12 & 0x1F, v20, v21, v22);
  }
  a3[3] = v11 + 1;
  MiUpdateCloneReducedCommit(a3, 1LL);
  _InterlockedAnd64(v12, 0x7FFFFFFFFFFFFFFFuLL);
  v15 = MiMakePrototypePteDirect((__int64)a3) | 8;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v13, v16, v17) )
      {
        HvlNotifyLongSpinWait(v18);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a5 + 24) < 0 );
  }
  *a4 = v15;
  ++*a6;
  MiIncreaseUsedPtesInPfn(a5, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
