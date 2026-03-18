/*
 * XREFs of ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140143918
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     HDXDrvEscape @ 0x1401CE760 (HDXDrvEscape.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _ERESOURCE **__fastcall SEMOBJ<4>::SEMOBJ<4>(struct _ERESOURCE **a1, __int64 a2)
{
  struct _ERESOURCE *v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // rdx
  char v7; // cl
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // eax

  v3 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 56LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v6 & 0x10) == 0 )
    {
      v9 = 0LL;
      v10 = 37;
      do
      {
        v11 = v9;
        if ( !_bittest64(&v6, v9) )
          v11 = v10;
        ++v9;
        v10 = v11;
      }
      while ( v9 < 0x40 );
      if ( v11 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v7 = *((_BYTE *)v5 + 12);
    *((_BYTE *)v5 + 12) = v7 + 1;
    if ( !v7 )
      *(_QWORD *)v5 |= 0x10uLL;
  }
  return a1;
}
