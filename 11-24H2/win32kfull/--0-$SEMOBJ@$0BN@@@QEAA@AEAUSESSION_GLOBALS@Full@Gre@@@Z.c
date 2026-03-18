/*
 * XREFs of ??0?$SEMOBJ@$0BN@@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x14032FAF4
 * Callers:
 *     VerifierEngAllocMem @ 0x14032FC90 (VerifierEngAllocMem.c)
 *     VerifierEngFreeMem @ 0x140330190 (VerifierEngFreeMem.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<29>::SEMOBJ<29>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  unsigned __int64 v5; // r8
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax

  v3 = *(HSEMAPHORE *)(a2 + 4792);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFE0000000uLL) != 0 && (*(_QWORD *)v4 & 0x20000000LL) == 0 )
    {
      v8 = 37;
      do
      {
        v9 = v5;
        if ( !_bittest64(&v7, v5) )
          v9 = v8;
        ++v5;
        v8 = v9;
      }
      while ( v5 < 0x40 );
      if ( v9 > 29 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v6 |= 0x20000000uLL;
  }
  return a1;
}
