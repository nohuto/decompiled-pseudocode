/*
 * XREFs of ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DCF10
 * Callers:
 *     ?ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z @ 0x1400DC978 (-ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z.c)
 *     prfntKillList @ 0x1400DCA9C (prfntKillList.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140263C44 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x14026B39C (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     DrvReleaseHDEV @ 0x140322D08 (DrvReleaseHDEV.c)
 *     EngLoadImage @ 0x140323060 (EngLoadImage.c)
 *     GreDrvReconnect @ 0x14033D068 (GreDrvReconnect.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<19>::SEMOBJ<19>(HSEMAPHORE *a1, HSEMAPHORE *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v7; // rdx
  char v8; // cl
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // eax

  v3 = *a2;
  *a1 = *a2;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFFF80000uLL) != 0 && (v7 & 0x80000) == 0 )
    {
      v9 = 0LL;
      v10 = 37;
      do
      {
        v11 = v9;
        if ( !_bittest64(&v7, v9) )
          v11 = v10;
        ++v9;
        v10 = v11;
      }
      while ( v9 < 0x40 );
      if ( v11 > 19 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v8 = *((_BYTE *)v5 + 27);
    *((_BYTE *)v5 + 27) = v8 + 1;
    if ( !v8 )
      *(_QWORD *)v5 |= 0x80000uLL;
  }
  return a1;
}
