/*
 * XREFs of ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x14008F6F0
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14006A178 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x14008E35C (-newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z.c)
 *     pprFlattenRec @ 0x14008E470 (pprFlattenRec.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 */

struct PATHALLOC *__fastcall newpathalloc(__int64 a1)
{
  __int64 v1; // rsi
  struct _ERESOURCE *v2; // rbx
  struct _GRETHREAD *v3; // rax
  int v4; // r8d
  struct _GRETHREAD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  struct _GRETHREAD *v9; // rax
  struct _GRETHREAD *v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // eax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88) + 3808LL;
  v2 = *(struct _ERESOURCE **)v1;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v1);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v3;
  if ( v3 )
  {
    v6 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFF800000000uLL) != 0 && (v6 & 0x800000000LL) == 0 )
    {
      v12 = 0LL;
      v4 = 37;
      do
      {
        v13 = v12;
        if ( !_bittest64(&v6, v12) )
          v13 = v4;
        ++v12;
        v4 = v13;
      }
      while ( v12 < 0x40 );
      if ( v13 > 35 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v5 |= 0x800000000uLL;
  }
  v7 = *(_QWORD *)(v1 + 8);
  if ( v7 )
  {
    v8 = *(_QWORD *)v7;
    --*(_DWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 8) = v8;
LABEL_6:
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = v7 + 24;
    *(_DWORD *)(v7 + 16) = 4032;
    if ( v2 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v2, v4);
      v9 = GreGetCurrentThreadCrossSessionCheck();
      if ( v9 )
        *(_QWORD *)v9 &= ~0x800000000uLL;
      GreReleaseSemaphoreSharedInternal(v2);
    }
    return (struct PATHALLOC *)v7;
  }
  v7 = PALLOCMEM(4032LL, 1952542791LL);
  if ( v7 )
  {
    ++*(_DWORD *)(v1 + 20);
    goto LABEL_6;
  }
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v2, v4);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
      *(_QWORD *)v11 &= ~0x800000000uLL;
    GreReleaseSemaphoreSharedInternal(v2);
  }
  return 0LL;
}
