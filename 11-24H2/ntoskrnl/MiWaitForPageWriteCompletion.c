/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x14041514C
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, ULONG_PTR a3, char a4)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
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
  LOBYTE(v8) = a4;
  MiUnlockProtoPoolPage(a3, v8, v9);
  return KeWaitForGate(&v12, 18LL);
}
