/*
 * XREFs of SshpFreeDataEntry @ 0x1407661C4
 * Callers:
 *     SleepstudyHelperDestroyBlockerData @ 0x140767860 (SleepstudyHelperDestroyBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140767890 (SleepstudyHelperDestroyLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140AB62A0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 */

void __fastcall SshpFreeDataEntry(_QWORD *a1)
{
  unsigned __int64 *v2; // rdi
  char *v3; // rax
  char *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = (unsigned __int64 *)(a1[2] + 16LL);
  v3 = (char *)KeAbPreAcquire((__int64)v2, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v3, (__int64)v2);
  v5 = 0;
  if ( v4 )
    v4[10] = 1;
  v6 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(a1[2] + 16LL));
  if ( *((_DWORD *)a1 + 10) )
  {
    do
      CmpFreeTransientPoolWithTag((void *)a1[4 * v5++ + 7], *(_DWORD *)(a1[2] + 24LL));
    while ( v5 < *((_DWORD *)a1 + 10) );
  }
  CmpFreeTransientPoolWithTag(a1, *(_DWORD *)(a1[2] + 24LL));
}
