/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14020D220
 * Callers:
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // ebx
  char v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // rax
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v6 = 0xFFFFDE0000000000uLL;
  do
  {
    if ( *v1 == -1LL )
      break;
    v7 = 48LL * *v1 - 0x220000000000LL;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v9 = v2 & 0xFFFFFFFD;
    v2 |= 2u;
    if ( (*(_BYTE *)(v7 + 34) & 0x10) == 0 )
      v2 = v9;
    v10 = MiWriteCompletePfn(v7, v2, 0LL);
    if ( v10 )
    {
      v13 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReleasePageFileInfo(v13, v10, 1LL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        KiRaiseIrqlProcessIrqlFlags(v11);
    }
    ++v1;
    v6 = 0xFFFFDE0000000000uLL;
  }
  while ( (unsigned __int64)v1 < v4 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
