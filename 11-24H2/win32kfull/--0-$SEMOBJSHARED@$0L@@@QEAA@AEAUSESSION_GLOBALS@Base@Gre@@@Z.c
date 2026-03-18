/*
 * XREFs of ??0?$SEMOBJSHARED@$0L@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402FEC40
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<11>::SEMOBJSHARED<11>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // r8
  int v7; // edx
  unsigned __int64 i; // rcx
  int v9; // eax
  char v10; // cl

  v3 = (HSEMAPHORE)(*a2 + 1248LL);
  *a1 = v3;
  GreAcquireSemaphoreSharedInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFFFFF800uLL) != 0 && (*(_QWORD *)v4 & 0x800LL) == 0 )
    {
      v7 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v9 = i;
        if ( !_bittest64(&v6, i) )
          v9 = v7;
        v7 = v9;
      }
      if ( v9 > 11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v10 = *((_BYTE *)v5 + 19);
    *((_BYTE *)v5 + 19) = v10 + 1;
    if ( !v10 )
      *(_QWORD *)v5 |= 0x800uLL;
  }
  return a1;
}
