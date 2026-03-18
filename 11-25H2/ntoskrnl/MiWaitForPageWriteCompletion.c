/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x140417F6C
 * Callers:
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int8 a4)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF

  v11[1] = 8LL;
  v11[0] = 0LL;
  v12 = 393479LL;
  v13[1] = v13;
  v13[0] = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v11[0] = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = v11;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(a3, a4, v8, v9);
  return KeWaitForGate(&v12, 18LL);
}
