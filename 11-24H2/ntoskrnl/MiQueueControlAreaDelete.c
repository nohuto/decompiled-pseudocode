/*
 * XREFs of MiQueueControlAreaDelete @ 0x14036F638
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14036F6B4 (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  KIRQL v3; // al

  v1 = (_QWORD *)(a1 + 8);
  v2 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1728));
  *v1 = *(_QWORD *)(v2 + 2152);
  *(_QWORD *)(v2 + 2152) = v1;
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 1728), v3);
  return KeSetEvent((PRKEVENT)(v2 + 2128), 0, 0);
}
