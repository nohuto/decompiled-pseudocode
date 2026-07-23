/*
 * XREFs of MiMarkMdlComplete @ 0x140267140
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  __int64 LockedVadEvent; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rdx
  unsigned int v11; // r15d
  unsigned int v12; // esi
  unsigned __int64 v13; // r13
  __int64 v14; // rbx
  LONG result; // eax
  int v16; // [rsp+60h] [rbp+8h]

  LockedVadEvent = MiLocateLockedVadEvent(a2, 8LL);
  v6 = (_QWORD *)(v4 + 48);
  v7 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v8 = *(_QWORD *)(LockedVadEvent + 8);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  v11 = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
  }
  if ( v7 )
  {
    v12 = 1;
    do
    {
      v13 = v12;
      v14 = 48LL * *v6 - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v3, v10, v4, v5) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      MiSetPfnModified(v14, 1);
      v16 = *(_DWORD *)(v14 + 32);
      BYTE2(v16) &= ~0x20u;
      v11 = 0;
      *(_DWORD *)(v14 + 32) = v16;
      *(_QWORD *)v14 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v12 & 0x3F) == 0 && v12 != v7 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        }
        __writecr8(CurrentIrql);
        v3 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = 2;
          KiRaiseIrqlProcessIrqlFlags(v3, v10);
        }
      }
      ++v6;
      ++v12;
    }
    while ( v13 < v7 );
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  *(_DWORD *)(v8 + 80) = -1073741670;
  *(_QWORD *)(v8 + 88) = 0LL;
  result = *(_DWORD *)(v8 + 176);
  if ( result > 1 )
    return KeSetEvent((PRKEVENT)(v8 + 56), 0, 0);
  return result;
}
