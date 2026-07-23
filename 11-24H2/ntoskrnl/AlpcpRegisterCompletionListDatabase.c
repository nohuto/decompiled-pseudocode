/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x140A076C0
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rdi
  unsigned int v5; // esi
  __int64 *i; // rcx
  unsigned __int64 v7; // rax
  __int64 **v8; // rax

  v2 = (char *)KeAbPreAcquire((__int64)&AlpcpCompletionListDatabase, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v2, (__int64)&AlpcpCompletionListDatabase);
  v5 = 0;
  if ( v4 )
    v4[10] = 1;
  for ( i = (__int64 *)qword_140F0F5D0; i != &qword_140F0F5D0; i = (__int64 *)*i )
  {
    v7 = i[2];
    if ( v7 > (unsigned __int64)a1[2] )
      break;
    if ( (__int64 *)v7 == a1[2] )
    {
      if ( i[5] >= (unsigned __int64)a1[6] )
        break;
      if ( i[6] > (unsigned __int64)a1[5] )
        goto LABEL_13;
    }
  }
  v8 = (__int64 **)i[1];
  if ( *v8 != i )
    __fastfail(3u);
  *a1 = i;
  v5 = 1;
  a1[1] = (__int64 *)v8;
  *v8 = (__int64 *)a1;
  i[1] = (__int64)a1;
  ++dword_140F0F5C8;
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v5;
}
