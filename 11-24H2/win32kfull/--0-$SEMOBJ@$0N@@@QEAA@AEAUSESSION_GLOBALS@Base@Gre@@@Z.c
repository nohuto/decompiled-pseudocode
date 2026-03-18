/*
 * XREFs of ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354
 * Callers:
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x14000D8A0 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x14003871C (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x14010E158 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     GreSetPaletteEntries @ 0x14010EB50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14010EFB4 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     GreRealizeDefaultPalette @ 0x1401E60CC (GreRealizeDefaultPalette.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x14030F080 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140310FB4 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140324550 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x140338860 (NtGdiUnrealizeObject.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<13>::SEMOBJ<13>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // r8
  char v9; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v13; // edx
  unsigned __int64 i; // rcx
  int v15; // eax

  v3 = (HSEMAPHORE)(*a2 + 312LL);
  *a1 = v3;
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
    if ( (*v7 & 0xFFFFFFFFFFFFE000uLL) != 0 && (*v7 & 0x2000) == 0 )
    {
      v13 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v15 = i;
        v8 = *v7;
        if ( !_bittest64(&v8, i) )
          v15 = v13;
        v13 = v15;
      }
      if ( v15 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x15);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0x15) = v9 + 1;
    if ( !v9 )
      *v7 |= 0x2000uLL;
  }
  return a1;
}
