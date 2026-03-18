/*
 * XREFs of MiSetVadFlags @ 0x1402A3618
 * Callers:
 *     MiRemoveSecureEntry @ 0x1402A34A0 (MiRemoveSecureEntry.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407E2CB4 (MiGetVadForHotPatchInProgress.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 *     MiCreatePatchSectionRequest @ 0x140AA63E8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, int a3)
{
  char v4; // si
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v7; // edi
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 v10; // eax
  int v11; // r8d
  signed __int32 v12; // ecx
  signed __int32 v13; // ett
  int v14; // esi
  __int64 result; // rax
  unsigned int v16; // edi

  v4 = a2;
  v5 = a1;
  if ( MmVadEventBlockFixEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
  }
  else
  {
    CurrentIrql = MiLockVadCore(a1, 0LL);
  }
  v7 = v4 & 2;
  if ( (v4 & 2) != 0 )
    MiLockVadTree(3LL);
  if ( MmVadEventBlockFixEnabled )
  {
    v8 = *(_DWORD *)(v5 + 48);
    do
    {
      while ( (v8 & 1) != 0 )
      {
        if ( (v8 & 2) != 0 )
        {
          v16 = 0;
          do
          {
            if ( (++v16 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
            {
              HvlNotifyLongSpinWait(v16);
            }
            else
            {
              _mm_pause();
            }
            v8 = *(_DWORD *)(v5 + 48);
          }
          while ( (v8 & 1) != 0 );
        }
        else
        {
          a1 = v8 | 2u;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), a1, v8);
        }
      }
      a1 = v8 & 0xFFFFFFFC | 1;
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), a1, v8);
    }
    while ( v9 != v8 );
    v7 = v4 & 2;
  }
  v10 = *(_DWORD *)(v5 + 48);
  v11 = a3 & 1;
  do
  {
    v12 = v10;
    if ( (v4 & 1) != 0 )
    {
      v11 = a3 & 1;
      v12 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8 * a3)) & 8;
    }
    if ( v7 )
    {
      a2 = (unsigned int)(4 * v11);
      v12 = a2 | v12 & 0xFFFFFFFB;
    }
    else
    {
      v11 = a3 & 1;
    }
    if ( (v4 & 4) != 0 )
    {
      a2 = (v12 ^ (a3 << 23)) & 0x1800000;
      v12 ^= a2;
    }
    v13 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), v12, v10);
  }
  while ( v13 != v10 );
  v14 = v4 & 2;
  if ( MmVadEventBlockFixEnabled )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 48), 0x7FFFFFFCu);
    if ( v14 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    if ( v14 )
    {
      LOBYTE(a2) = 17;
      MiUnlockVadTree(3LL, a2);
    }
    LOBYTE(a2) = CurrentIrql;
    return MiUnlockVadCore(v5, a2);
  }
  return result;
}
