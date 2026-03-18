/*
 * XREFs of ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x140199298
 * Callers:
 *     NtGdiAddFontResourceW @ 0x140198FD0 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140199488 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140264E30 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?Add@TrustedFontFileTable@@SAXPEBG@Z @ 0x14026A114 (-Add@TrustedFontFileTable@@SAXPEBG@Z.c)
 */

__int64 __fastcall GrepAddFontResource(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rax
  size_t v15; // [rsp+28h] [rbp-80h]
  struct PFF *v16; // [rsp+70h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+78h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+20h] BYREF

  v18 = 0;
  v10 = a2;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(&v18);
    return v18;
  }
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v18;
  }
  if ( a4 != 0x80000000 )
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v11 = (2 * (a4 & 1)) | 4;
      if ( (a4 & 2) == 0 )
        v11 = 2 * (a4 & 1);
      v16 = 0LL;
      v12 = *(_QWORD *)(W32GetSessionState(2 * (a4 & 1), a2) + 96);
      if ( (a4 & 0x1C) == 0 )
      {
        v13 = *(_QWORD *)(v12 + 20416);
        goto LABEL_10;
      }
      if ( *(_QWORD *)(v12 + 20408) || (unsigned int)bInitPrivatePFT() )
      {
        v13 = *(_QWORD *)(v12 + 20408);
LABEL_10:
        v17[0] = v13;
        if ( !v13
          || (LODWORD(v15) = a7,
              !(unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                               (PUBLIC_PFTOBJ *)v17,
                               a1,
                               v10,
                               a3,
                               a6,
                               v15,
                               &v18,
                               v11,
                               &v16,
                               a4,
                               0,
                               0LL,
                               0,
                               0)) )
        {
          v18 = 0;
        }
        if ( v18 )
          GreQuerySystemTime(v12 + 20432);
      }
    }
    return v18;
  }
  TrustedFontFileTable::Add(a1);
  return 1LL;
}
