/*
 * XREFs of ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x14005EB7C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@?$SEMOBJ@$04@@QEAAXXZ @ 0x14015A7E8 (-vUnlock@-$SEMOBJ@$04@@QEAAXXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x14021F5CC (vRemoveAllInactiveRFONTs.c)
 */

void __fastcall RFONTOBJ::vDelayedReclaim(RFONTOBJ *this)
{
  __int64 v2; // rcx
  HSEMAPHORE v3; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  char v9; // cl
  int v10; // eax
  struct _KTHREAD *v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  __int64 i; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v25; // rcx
  int v26; // r8d
  int v27; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v30; // ebx
  __int64 v31; // rax
  HSEMAPHORE v32; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    v3 = *(HSEMAPHORE *)(v2 + 504);
    if ( v3 )
    {
      v32 = v3;
      GreAcquireSemaphoreInternal(v3);
      CurrentThread = KeGetCurrentThread();
      v5 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v5 = *ThreadWin32Thread;
      }
      v7 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
      if ( v7 )
      {
        v8 = *v7;
        if ( (*v7 & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (*v7 & 0x20) == 0 )
        {
          v25 = 0LL;
          v26 = 37;
          do
          {
            v27 = v25;
            if ( !_bittest64(&v8, v25) )
              v27 = v26;
            ++v25;
            v26 = v27;
          }
          while ( v25 < 0x40 );
          if ( v27 > 5 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v8, (unsigned int)v27);
        }
        v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0xD);
        *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0xD) = v9 + 1;
        if ( !v9 )
          *v7 |= 0x20uLL;
      }
      v10 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v10 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v10 & 0xFFFFFFF7;
        for ( i = 0LL; ; i = v21 )
        {
          v19 = hdevEnumerateAll(i);
          v21 = v19;
          if ( !v19 )
            break;
          v22 = *(_DWORD *)(v19 + 40);
          if ( (v22 & 0x2000) == 0 )
          {
            if ( (v22 & 0x8000) == 0 )
              goto LABEL_30;
            v23 = *(_QWORD *)(*(_QWORD *)(v21 + 1776) + 56LL);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            if ( v23 == CurrentProcessWin32Process )
LABEL_30:
              vRemoveAllInactiveRFONTs(v21);
          }
        }
        SEMOBJ<5>::vUnlock(&v32);
      }
      else if ( v32 )
      {
        EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", v32);
        v11 = KeGetCurrentThread();
        v12 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v30 = W32GetCurrentWin32kSessionId(),
              v31 = PsGetCurrentThreadProcess(),
              v30 == (unsigned int)PsGetProcessSessionIdEx(v31)) )
        {
          v13 = (__int64 *)PsGetThreadWin32Thread(v11);
          if ( v13 )
            v12 = *v13;
        }
        v14 = v12 + 8;
        v15 = -v12;
        v16 = (_QWORD *)(v14 & -(__int64)(v15 != 0));
        if ( v16 )
        {
          if ( (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 0xD))-- == 1 )
            *v16 &= ~0x20uLL;
          if ( !*v16 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v32);
      }
    }
  }
}
