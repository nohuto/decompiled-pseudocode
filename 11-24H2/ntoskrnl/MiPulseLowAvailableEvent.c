/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1402F2C10
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402F3C60 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 */

__int64 __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdi
  KIRQL v4; // al
  struct _KEVENT *v5; // rcx
  unsigned __int8 v6; // si

  result = *(_QWORD *)(a1 + 280);
  if ( !*(_DWORD *)(result + 4) )
  {
    v3 = (_DWORD *)(a1 + 16192);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
    v5 = *(struct _KEVENT **)(a1 + 280);
    v6 = v4;
    if ( !v5->Header.SignalState )
      KePulseEvent(v5, 0, 0);
    return MiReleaseSpinLockExclusive(v3, v6);
  }
  return result;
}
