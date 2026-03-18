/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0114390
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C01135E0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     UmfdLoadFontFileView @ 0x1C0114EE8 (UmfdLoadFontFileView.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C026AF88 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     cMapRemoteFonts @ 0x1C028B310 (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C02A7028 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C02D5048 (GreMakeFontDir.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E0410 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00D82E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C0111E2C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

char __fastcall UmfdHostLifeTimeManager::EnsureUmfdHost(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  char v8; // di
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+38h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23520LL;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v1);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  if ( *(_QWORD *)(v3 + 23496) == PsGetCurrentProcess(v5, v4, v6) )
  {
    if ( v1 )
    {
      GreReleasePushLockShared(v1);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    v8 = 0;
    if ( v1 )
    {
      GreReleasePushLockShared(v1);
      KeLeaveCriticalRegion();
    }
    if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v7) >= 0 )
    {
      v11 = *(_QWORD *)(SGDGetSessionState(v9) + 32);
      v12 = v11 == -23544;
      v13 = v11 + 23544;
      v16 = v13;
      if ( !v12 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v13, 0LL);
      }
      v14 = *(_QWORD *)(SGDGetSessionState(v10) + 32);
      if ( *(_BYTE *)(v14 + 23537) )
        goto LABEL_8;
      KeClearEvent(*(PRKEVENT *)(v14 + 23528));
      if ( !gpidLogon || (int)PostWinlogonMessage(1033LL, 0LL) < 0 )
      {
        if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x200000000000LL) )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0354098,
            (unsigned __int8 *)dword_1C031EA65,
            0LL,
            0LL,
            2u,
            &v17);
        goto LABEL_9;
      }
      if ( !KeWaitForSingleObject(*(PVOID *)(v14 + 23528), Executive, 0, 0, 0LL) && *(_QWORD *)(v14 + 23496) )
      {
LABEL_8:
        v8 = 1;
LABEL_9:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
        return v8;
      }
      if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x200000000000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0354098,
          (unsigned __int8 *)dword_1C031EA65,
          0LL,
          0LL,
          2u,
          &v17);
      if ( v13 )
      {
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    return 0;
  }
}
