/*
 * XREFs of MiCopyLargeVad @ 0x1408005A4
 * Callers:
 *     MiMapChildLargePageVads @ 0x140AB5D2C (MiMapChildLargePageVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v7; // r8
  _KPROCESS *v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // edi
  __int64 v12; // r8
  int v14; // r12d
  unsigned __int64 v15; // rbx
  int v16; // r13d
  unsigned __int64 v17; // rcx
  char *v18; // r15
  unsigned __int64 v19; // rdi
  size_t v20; // rsi
  __int64 v21; // r8
  void *v22; // rcx
  struct _MDL *v23; // r14
  void *v24; // [rsp+30h] [rbp-39h] BYREF
  PVOID v25; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  _OWORD v29[3]; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  memset(v29, 0, sizeof(v29));
  MiLocateLockedVadEvent(a3, 16);
  LockedVadEvent = MiLocateLockedVadEvent(a2, v5);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(LockedVadEvent + 8);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(LockedVadEvent + 16);
  }
  KiStackAttachProcess(v8, 0, (__int64)v29);
  v9 = KeAbPreAcquire(a3 + 40, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 40), (__int64)v9, a3 + 40);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = MiMapUserLargePages(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 40));
  KeAbPostRelease(a3 + 40);
  KiUnstackDetachProcess((__int64)v29, 0);
  if ( v11 < 0 )
    return (unsigned int)v11;
  v14 = 0;
  v15 = 4292870144LL;
  v16 = *(_DWORD *)(a3 + 48) & 0x200;
  v17 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v18 = (char *)(v17 << 12);
  v19 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v17 + 1) << 12;
  while ( v19 )
  {
    v20 = v15;
    if ( v19 <= v15 )
      v20 = v19;
    LOBYTE(v12) = 1;
    v14 = ExLockUserBuffer(v18, (unsigned int)v20, v12, 0LL, &Src, &P);
    if ( v14 < 0 )
      goto LABEL_15;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v29);
    v22 = v18;
    if ( v16 )
    {
      v23 = 0LL;
      v24 = v18;
      v25 = 0LL;
    }
    else
    {
      LOBYTE(v21) = 1;
      v14 = ExLockUserBuffer(v18, (unsigned int)v20, v21, 1LL, &v24, &v25);
      if ( v14 < 0 )
      {
        KiUnstackDetachProcess((__int64)v29, 0);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_15:
        v15 = (v20 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v15 < 0x200000 )
          return (unsigned int)v14;
        continue;
      }
      v23 = (struct _MDL *)v25;
      v22 = v24;
    }
    memmove(v22, Src, v20);
    if ( !v16 )
      ExUnlockUserBuffer(v23);
    KiUnstackDetachProcess((__int64)v29, 0);
    ExUnlockUserBuffer((struct _MDL *)P);
    v19 -= v20;
    v18 += v20;
  }
  return (unsigned int)v14;
}
