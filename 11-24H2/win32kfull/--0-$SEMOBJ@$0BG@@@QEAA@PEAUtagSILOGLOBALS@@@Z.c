/*
 * XREFs of ??0?$SEMOBJ@$0BG@@@QEAA@PEAUtagSILOGLOBALS@@@Z @ 0x1401BAC38
 * Callers:
 *     ?Contains@TrustedFontFileTable@@SA_NPEBG@Z @ 0x1401BAB64 (-Contains@TrustedFontFileTable@@SA_NPEBG@Z.c)
 *     ?Add@TrustedFontFileTable@@SAXPEBG@Z @ 0x14026A114 (-Add@TrustedFontFileTable@@SAXPEBG@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<22>::SEMOBJ<22>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  unsigned __int64 v5; // r8
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // rdx
  int v9; // ecx
  int v10; // eax

  v3 = *(HSEMAPHORE *)(a2 + 16);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFFC00000uLL) != 0 && (v7 & 0x400000) == 0 )
    {
      v9 = 37;
      do
      {
        v10 = v5;
        if ( !_bittest64(&v7, v5) )
          v10 = v9;
        ++v5;
        v9 = v10;
      }
      while ( v5 < 0x40 );
      if ( v10 > 22 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v6 |= 0x400000uLL;
  }
  return a1;
}
