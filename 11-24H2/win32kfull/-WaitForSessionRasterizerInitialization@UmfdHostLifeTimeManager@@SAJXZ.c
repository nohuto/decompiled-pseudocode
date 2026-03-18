/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x140114FB0 (NtGdiAddFontMemResourceEx.c)
 *     xxxLW_LoadFonts @ 0x140116060 (xxxLW_LoadFonts.c)
 *     NtGdiAddFontResourceW @ 0x140198FD0 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x14019D710 (GreWaitForTextReady.c)
 *     NtGdiWaitForTextReady @ 0x14021C1F0 (NtGdiWaitForTextReady.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401136F0 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113BD8 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

NTSTATUS __fastcall UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  struct _KEVENT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS result; // eax
  __int64 v10; // rsi
  LONG StateEvent; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v5 = *(struct _KEVENT **)(v4 + 24224);
  if ( !v5 || !*(_QWORD *)(v4 + 24232) )
    return -1073741595;
  if ( KeReadStateEvent(v5) )
  {
    v7 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
    if ( *(_BYTE *)(v7 + 24290) )
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v4 + 24232)) )
        return v3;
    }
  }
  v10 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  StateEvent = KeReadStateEvent(*(PRKEVENT *)(v10 + 24232));
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
    return StateEvent == 0 ? 0x103 : 0;
  }
  if ( !StateEvent && (unsigned int)UserIsUserCritSecIn() )
    return -1073741595;
  result = KeWaitForSingleObject(*(PVOID *)(v10 + 24224), Executive, 0, 0, 0LL);
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 24290LL) )
    {
      KeWaitForSingleObject(*(PVOID *)(v10 + 24232), Executive, 0, 0, 0LL);
      return 0;
    }
    return -1073741595;
  }
  return result;
}
