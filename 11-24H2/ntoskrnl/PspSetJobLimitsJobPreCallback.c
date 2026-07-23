/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x140A2C810
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PspSetEffectiveJobLimits @ 0x140A2C888 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  char *v5; // rax
  char *v6; // rdi

  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    v5 = (char *)KeAbPreAcquire((__int64)&qword_140FC70E8, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC70E8, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140FC70E8, v5, (__int64)&qword_140FC70E8);
    if ( v6 )
      v6[10] = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x100u);
  }
  return 0LL;
}
