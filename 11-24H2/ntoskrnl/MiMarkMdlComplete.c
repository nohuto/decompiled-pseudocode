/*
 * XREFs of MiMarkMdlComplete @ 0x1403CD75C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  __int64 LockedVadEvent; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned int v11; // esi
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  LONG result; // eax
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp+8h]

  LockedVadEvent = MiLocateLockedVadEvent(a2, 8LL);
  v5 = (_QWORD *)(v4 + 48);
  v6 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v7 = *(_QWORD *)(LockedVadEvent + 8);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  v10 = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
  }
  if ( v6 )
  {
    v11 = 1;
    do
    {
      v12 = v11;
      v13 = 48LL * *v5 - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      MiSetPfnModified(v13, 1);
      v16 = *(_DWORD *)(v13 + 32);
      BYTE2(v16) &= ~0x20u;
      v10 = 0;
      *(_DWORD *)(v13 + 32) = v16;
      *(_QWORD *)v13 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v11 & 0x3F) == 0 && v11 != v6 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
        }
        __writecr8(CurrentIrql);
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(v15, v9);
        }
      }
      ++v5;
      ++v11;
    }
    while ( v12 < v6 );
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(CurrentIrql);
  *(_DWORD *)(v7 + 80) = -1073741670;
  *(_QWORD *)(v7 + 88) = 0LL;
  result = *(_DWORD *)(v7 + 176);
  if ( result > 1 )
    return KeSetEvent((PRKEVENT)(v7 + 56), 0, 0);
  return result;
}
