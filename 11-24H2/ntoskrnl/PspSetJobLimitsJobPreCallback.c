/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x1408E6BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspSetEffectiveJobLimits @ 0x1408E6C38 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi

  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    v5 = KeAbPreAcquire((__int64)&qword_140FC60B0, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC60B0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140FC60B0, (__int64)v5, (__int64)&qword_140FC60B0);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x100u);
  }
  return 0LL;
}
