/*
 * XREFs of MiCopyLargeVad @ 0x140800CE4
 * Callers:
 *     MiMapChildLargePageVads @ 0x140AAFFF4 (MiMapChildLargePageVads.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v7; // r8
  _KPROCESS *v8; // r9
  char *v9; // rax
  char *v10; // rdi
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  int v16; // r12d
  unsigned __int64 v17; // rbx
  int v18; // r13d
  unsigned __int64 v19; // rcx
  char *v20; // r15
  unsigned __int64 v21; // rdi
  size_t v22; // rsi
  __int64 v23; // r8
  void *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _MDL *v27; // r14
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // [rsp+30h] [rbp-39h] BYREF
  PVOID v31; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  _OWORD v35[3]; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  memset(v35, 0, sizeof(v35));
  MiLocateLockedVadEvent(a3, 16);
  LockedVadEvent = MiLocateLockedVadEvent(a2, v5);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(LockedVadEvent + 8);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(LockedVadEvent + 16);
  }
  KiStackAttachProcess(v8, 0, (__int64)v35);
  v9 = (char *)KeAbPreAcquire(a3 + 40, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 40), v9, a3 + 40);
  if ( v10 )
    v10[10] = 1;
  v11 = MiMapUserLargePages(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 40));
  KeAbPostRelease(a3 + 40);
  KiUnstackDetachProcess((__int64)v35, 0, v12, v13);
  if ( v11 < 0 )
    return (unsigned int)v11;
  v16 = 0;
  v17 = 4292870144LL;
  v18 = *(_DWORD *)(a3 + 48) & 0x200;
  v19 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v20 = (char *)(v19 << 12);
  v21 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v19 + 1) << 12;
  while ( v21 )
  {
    v22 = v17;
    if ( v21 <= v17 )
      v22 = v21;
    LOBYTE(v14) = 1;
    v16 = ExLockUserBuffer(v20, (unsigned int)v22, v14, 0LL, &Src, &P);
    if ( v16 < 0 )
      goto LABEL_15;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v35);
    v24 = v20;
    if ( v18 )
    {
      v27 = 0LL;
      v30 = v20;
      v31 = 0LL;
    }
    else
    {
      LOBYTE(v23) = 1;
      v16 = ExLockUserBuffer(v20, (unsigned int)v22, v23, 1LL, &v30, &v31);
      if ( v16 < 0 )
      {
        KiUnstackDetachProcess((__int64)v35, 0, v25, v26);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_15:
        v17 = (v22 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v17 < 0x200000 )
          return (unsigned int)v16;
        continue;
      }
      v27 = (struct _MDL *)v31;
      v24 = v30;
    }
    memmove(v24, Src, v22);
    if ( !v18 )
      ExUnlockUserBuffer(v27);
    KiUnstackDetachProcess((__int64)v35, 0, v28, v29);
    ExUnlockUserBuffer((struct _MDL *)P);
    v21 -= v22;
    v20 += v22;
  }
  return (unsigned int)v16;
}
