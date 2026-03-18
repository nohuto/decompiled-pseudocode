/*
 * XREFs of xxxLW_LoadFonts @ 0x1C001A550
 * Callers:
 *     UserOnGreTextReady @ 0x1C001A438 (UserOnGreTextReady.c)
 *     NtUserLW_LoadFonts @ 0x1C001A510 (NtUserLW_LoadFonts.c)
 * Callees:
 *     xxxAddFontResourceW @ 0x1C001A634 (xxxAddFontResourceW.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C001A680 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C001A7D8 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     EngCloseFNTCache @ 0x1C001B2CC (EngCloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C001B340 (ClientLoadLocalT1Fonts.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C001B458 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0111E2C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  Gre::Base *v5; // rcx
  unsigned int v7; // edi
  unsigned int Count; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1;
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(1LL, 0LL);
    return 0LL;
  }
  else
  {
    EnterCrit(1LL, 0LL);
    if ( v4 )
    {
      Interval.QuadPart = 0LL;
      v7 = 0;
      while ( !gbPermanentFontsLoaded )
      {
        if ( gbNonServiceSession && v7 >= 0x960 )
          goto LABEL_11;
        Count = AtomicExecutionCheck::GetCount();
        if ( Count )
        {
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
          DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        }
        UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        EnterCrit(1LL, 0LL);
        ++v7;
      }
      xxxLoadUserAndNetworkFonts();
LABEL_11:
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval = *(union _LARGE_INTEGER *)((char *)Gre::Base::Globals(v5) + 64);
          ((void (__fastcall *)(_QWORD))GreAcquireSemaphore)((union _LARGE_INTEGER)Interval.QuadPart);
          EngCloseFNTCache();
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
