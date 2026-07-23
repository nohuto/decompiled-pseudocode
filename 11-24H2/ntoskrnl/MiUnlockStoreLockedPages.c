/*
 * XREFs of MiUnlockStoreLockedPages @ 0x1402FA670
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // ebx
  char v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx

  v1 = (_QWORD *)(a1 + 48);
  v2 = 16;
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  do
  {
    if ( *v1 == -1LL )
      break;
    v6 = 48LL * *v1 - 0x220000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    v8 = v2 & 0xFFFFFFFD;
    v2 |= 2u;
    if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
      v2 = v8;
    v9 = MiWriteCompletePfn(v6, v2, 0LL);
    if ( v9 )
    {
      v13 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReleasePageFileInfo(v13, v9, 1LL, v10);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    ++v3;
    if ( CurrentIrql != 2 && (v3 & 0xF) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v11 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
    }
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
