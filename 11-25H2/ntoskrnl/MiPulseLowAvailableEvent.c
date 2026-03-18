/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1404B2FA0
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1403C15C4 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
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
