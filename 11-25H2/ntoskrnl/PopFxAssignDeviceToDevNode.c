/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x1404B9958
 * Callers:
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PopFxAssignDeviceToDevNode(__int64 a1, __int64 a2)
{
  KIRQL v4; // cl
  int v5; // eax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  if ( a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFF7);
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFB);
  }
  v5 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v5;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v4);
}
