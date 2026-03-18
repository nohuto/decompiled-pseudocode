/*
 * XREFs of xxxLW_LoadFonts @ 0x140116060
 * Callers:
 *     NtUserLW_LoadFonts @ 0x140116020 (NtUserLW_LoadFonts.c)
 *     UserOnGreTextReady @ 0x140151528 (UserOnGreTextReady.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140114C7C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxAddFontResourceW @ 0x1401166E0 (xxxAddFontResourceW.c)
 *     ClientLoadLocalT1Fonts @ 0x14019A154 (ClientLoadLocalT1Fonts.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x14019A344 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x140220D58 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     CloseFNTCache @ 0x140302D5C (CloseFNTCache.c)
 */

__int64 __fastcall xxxLW_LoadFonts(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r9
  __int64 v13; // rcx
  unsigned int Count; // eax
  const unsigned __int16 *v15; // r8
  const unsigned __int16 *v16; // r9
  const unsigned __int16 *v17; // r8
  const unsigned __int16 *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // [rsp+48h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v25, 1);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v3, v2, v4) >= 0 )
  {
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v25);
    if ( a1 )
    {
      Interval.QuadPart = 0LL;
      v8 = 0;
      while ( !*(_DWORD *)(W32GetUserSessionState(v7, v6) + 66120) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v10, v9) + 68868) && v8 >= 0x960 )
          goto LABEL_12;
        Count = AtomicExecutionCheck::GetCount();
        if ( Count )
          KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v25, 1);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v25);
        ++v8;
      }
      xxxbEnumerateRegistryFonts(0x401u, 0x38u, v11, v12);
      xxxbEnumerateRegistryFonts(2u, 0x38u, v15, v16);
      xxxbEnumerateRegistryFonts(2u, 6u, v17, v18);
LABEL_12:
      *(_DWORD *)(W32GetUserGdiSessionState(v13) + 24) = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts()
        && *(_DWORD *)(W32GetUserSessionState(v20, v19) + 66120)
        && !*(_DWORD *)(W32GetUserSessionState(v22, v21) + 66124) )
      {
        ClientLoadLocalT1Fonts();
        *(_DWORD *)(W32GetUserSessionState(v24, v23) + 66124) = 1;
        CloseFNTCache();
      }
    }
    return 1LL;
  }
  else
  {
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v25);
    return 0LL;
  }
}
