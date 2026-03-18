/*
 * XREFs of ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AB80
 * Callers:
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C00404F0 (NtUserKillTimer.c)
 *     InternalSetTimer @ 0x1C00EFF30 (InternalSetTimer.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DecTimerCountAndClearReadyFlag(struct tagTIMER *a1)
{
  char *v1; // rbx
  char **v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  char *v5; // rax

  *((_DWORD *)a1 + 12) &= ~1u;
  v1 = (char *)a1 + 56;
  v2 = (char **)((char *)a1 + 64);
  v3 = *((_QWORD *)a1 + 3);
  if ( *(char **)v1 == v1 || *v2 == v1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
  v4 = *(_QWORD *)v1;
  if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v5 = *v2, *(char **)*v2 != v1) )
    __fastfail(3u);
  *(_QWORD *)v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v2 = v1;
  *(_QWORD *)v1 = v1;
  if ( (*(_DWORD *)(v3 + 604))-- == 1 )
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v3 + 448) + 8LL), 0xFFFFFFEF);
}
