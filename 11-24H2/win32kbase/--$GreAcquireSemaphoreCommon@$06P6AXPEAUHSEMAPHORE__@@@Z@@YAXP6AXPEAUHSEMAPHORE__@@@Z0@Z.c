/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087764
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140085260 (pProcessDfbSurfaces2.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     GreSfmOpenTokenEvent @ 0x140087600 (GreSfmOpenTokenEvent.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088FB4 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        void (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax

  a1(a2);
  result = GreGetCurrentThreadCrossSessionCheck();
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFFFFF80uLL) != 0 && (*(_QWORD *)result & 0x80u) == 0LL )
    {
      v6 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( !_bittest64(&v5, i) )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *((_BYTE *)v4 + 15);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v4 + 15) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v4 |= 0x80uLL;
  }
  return result;
}
