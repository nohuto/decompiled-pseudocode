/*
 * XREFs of SmKmKeyGenNewKey @ 0x14079A2D4
 * Callers:
 *     SmKmKeyGenGenerate @ 0x140799F10 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmCrGenRandom @ 0x14060DA54 (SmCrGenRandom.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmKmKeyGenKeyFind @ 0x14079A114 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenLoadKey @ 0x14079A158 (SmKmKeyGenLoadKey.c)
 */

__int64 __fastcall SmKmKeyGenNewKey(ULONG_PTR BugCheckParameter2, _WORD *Src, ULONG cbBuffer)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  void *v7; // rax
  __int64 v8; // rdi
  NTSTATUS v9; // ebp
  void *v10; // rcx
  __int64 v11; // r8
  ULONG v12; // r9d
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v15; // rax
  char *v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // rcx
  HANDLE v19; // r9
  _WORD *v20; // rcx
  __int64 v21; // r8
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v3 = cbBuffer;
  KeyHandle = 0LL;
  v4 = -1LL;
  ValueName = 0LL;
  do
    ++v4;
  while ( Src[v4] );
  v7 = (void *)SmAllocEx(cbBuffer + 42 + 2 * (_DWORD)v4, 0x474B6D73u, -1);
  v8 = (__int64)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset_0(v7, 0, (unsigned int)(v3 + 42 + 2 * v4));
  *(_QWORD *)(v8 + 24) = v8 + 40;
  v10 = (void *)(v3 + v8 + 40);
  *(_DWORD *)(v8 + 32) = v3;
  *(_QWORD *)(v8 + 16) = v10;
  memmove(v10, Src, 2LL * (unsigned int)v4);
  if ( !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_8;
  v13 = SmKmKeyGenLoadKey((UNICODE_STRING *)(BugCheckParameter2 + 24), v8, &KeyHandle);
  v9 = v13;
  if ( v13 >= 0 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v15, BugCheckParameter2);
    if ( v16 )
      v16[10] = 1;
    if ( !SmKmKeyGenKeyFind(BugCheckParameter2, Src) )
    {
      v17 = (__int64 *)(BugCheckParameter2 + 8);
      v18 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( *(_QWORD *)(v18 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v19 = KeyHandle;
      *(_QWORD *)v8 = v18;
      *(_QWORD *)(v8 + 8) = v17;
      *(_QWORD *)(v18 + 8) = v8;
      *v17 = v8;
      if ( v19 )
      {
        if ( *(_QWORD *)(v8 + 16) )
        {
          v20 = *(_WORD **)(v8 + 16);
          v21 = 0x7FFFLL;
          while ( *v20 )
          {
            ++v20;
            if ( !--v21 )
              goto LABEL_23;
          }
          ValueName.Buffer = *(wchar_t **)(v8 + 16);
          ValueName.Length = 2 * (0x7FFF - v21);
          ValueName.MaximumLength = ValueName.Length + 2;
        }
LABEL_23:
        ZwDeleteValueKey(v19, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v9 = 0;
    goto LABEL_28;
  }
  if ( v13 == -1073741772 )
  {
LABEL_8:
    v9 = SmCrGenRandom(*(PUCHAR *)(v8 + 24), v3, v11, v12);
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_28:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
