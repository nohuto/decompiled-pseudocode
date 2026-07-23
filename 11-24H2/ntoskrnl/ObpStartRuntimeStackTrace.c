/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x140743784
 * Callers:
 *     ObSetRefTraceInformation @ 0x140742E04 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpInitStackAndObjectTables @ 0x140743348 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int v2; // r10d
  unsigned int inited; // r15d
  int v4; // edi
  char PreviousMode; // r9
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned __int16 v8; // bx
  void *Pool2; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rax
  char *v13; // rsi
  wchar_t *Buffer; // rsi
  char v16; // cl
  wchar_t *v17; // rcx
  char v18; // [rsp+20h] [rbp-C8h]
  PVOID P[2]; // [rsp+28h] [rbp-C0h]
  int v20; // [rsp+44h] [rbp-A4h]
  __int128 v21; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v23[4]; // [rsp+70h] [rbp-78h] BYREF

  memset_0(v23, 0, sizeof(v23));
  v2 = 0;
  inited = 0;
  *(_OWORD *)P = 0LL;
  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  v21 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v20 = *(unsigned __int8 *)(a1 + 1);
  if ( (_WORD)v21 )
  {
    if ( (*(_OWORD *)(a1 + 24) & 1) != 0
      || ((((unsigned __int64)(unsigned __int16)v21 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      return 3221225485LL;
    }
    v6 = ((unsigned __int64)(unsigned __int16)v21 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode && (BYTE8(v21) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      while ( v2 < 4 )
        *((_DWORD *)v23 + i) = (*((_DWORD *)v23 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v21 + 1)
                                                                                 + 2LL * (5 * i - v2++ + 3));
      v2 = 0;
    }
    v4 = 16;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v8 = 126;
    else
      v8 = (unsigned __int16)Src[0];
    LOWORD(P[0]) = v8;
    Pool2 = (void *)ExAllocatePool2(0x40uLL, v8 + 2LL, 0x7452624Fu);
    P[1] = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    WORD1(P[0]) = v8 + 2;
    if ( v18 && ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, Src[1], v8);
    *((_WORD *)Pool2 + ((unsigned __int64)v8 >> 1)) = 0;
    v4 |= 0x20u;
    inited = 0;
  }
  if ( !v4 )
    return 3221225485LL;
  if ( v20 )
    v4 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v12 = (char *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v12, (__int64)&ObpStackTraceLock);
  if ( v13 )
    v13[10] = 1;
  if ( (ObpTraceFlags & 0x73) == 0 )
    inited = ObpInitStackAndObjectTables();
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
    v17 = (wchar_t *)P[1];
    if ( !P[1] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)P;
    ObpRuntimeTracePoolTags = v23[0];
    xmmword_140F0E9F0 = v23[1];
    xmmword_140F0EA00 = v23[2];
    xmmword_140F0EA10 = v23[3];
    v16 = v4 | ObpTraceFlags & 0x8E;
    ObpRuntimeTraceFlags = v4 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpTraceFlags = v4 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((v16 & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((v16 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
    if ( !Buffer )
      return inited;
    v17 = Buffer;
  }
  ExFreePoolWithTag(v17, 0x7452624Fu);
  return inited;
}
