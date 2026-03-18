/*
 * XREFs of ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x140025200
 * Callers:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140024360 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall freepathalloc(char *Buffer)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *v4; // rax
  int v5; // r8d
  struct _GRETHREAD *v6; // rsi
  __int64 v7; // rcx
  struct _GRETHREAD *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax

  v2 = *(_QWORD *)(W32GetSessionState(Buffer) + 88) + 3808LL;
  v3 = *(struct _ERESOURCE **)v2;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFF800000000uLL) != 0 && (v7 & 0x800000000LL) == 0 )
    {
      v9 = 0LL;
      v5 = 37;
      do
      {
        v10 = v9;
        if ( !_bittest64(&v7, v9) )
          v10 = v5;
        ++v9;
        v5 = v10;
      }
      while ( v9 < 0x40 );
      if ( v10 > 35 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v6 |= 0x800000000uLL;
  }
  if ( *(_DWORD *)(v2 + 16) >= 4u )
  {
    GreDeleteFastMutex(Buffer);
    --*(_DWORD *)(v2 + 20);
  }
  else
  {
    *(_QWORD *)Buffer = *(_QWORD *)(v2 + 8);
    ++*(_DWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 8) = Buffer;
  }
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v3, v5);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
      *(_QWORD *)v8 &= ~0x800000000uLL;
    GreReleaseSemaphoreSharedInternal(v3);
  }
}
