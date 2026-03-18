/*
 * XREFs of ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x14005CF58 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14005D0AC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1401865C0 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D9C14 (-GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     _EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x140213130 (_EUDCCountRegion--EUDCCountRegion_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x14025A0F4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall GreAcquirePushLockShared2<16,0>(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct W32_PUSH_LOCK *v2; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  char v7; // dl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v10; // edx
  unsigned __int64 i; // rcx
  int v12; // eax

  CurrentThread = KeGetCurrentThread();
  v2 = (struct W32_PUSH_LOCK *)(a1 + 8608);
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v5 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v5 )
  {
    v6 = *v5;
    if ( (*v5 & 0xFFFFFFFFFFFF0000uLL) != 0 && (*v5 & 0x10000) == 0 )
    {
      v10 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v12 = i;
        if ( !_bittest64(&v6, i) )
          v12 = v10;
        v10 = v12;
      }
      if ( v12 > 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v12, v6);
    }
    v7 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18) = v7 + 1;
    if ( !v7 )
      *v5 |= 0x10000uLL;
  }
  W32AcquirePushLockSharedEx(v2, 2u);
}
