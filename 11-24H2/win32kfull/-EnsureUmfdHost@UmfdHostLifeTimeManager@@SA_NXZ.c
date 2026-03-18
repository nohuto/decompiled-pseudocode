/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B76D4 (UmfdLoadFontFileView.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x140113770 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     UmfdHostLifeTimeManager_EnsureUmfdHost @ 0x140204CF0 (UmfdHostLifeTimeManager_EnsureUmfdHost.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     GreNamedEscape @ 0x14025E294 (GreNamedEscape.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x140336620 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113C28 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140114680 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1401A15FC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x1402241E8 (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::EnsureUmfdHost(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  char v4; // bl
  __int64 v5; // rdi
  bool IsCurrentProcessUmfdHostNoLock; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  struct W32_PUSH_LOCK *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  struct W32_PUSH_LOCK *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  struct W32_PUSH_LOCK *v21; // [rsp+40h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = 0;
  v5 = *(_QWORD *)(SessionState + 96) + 4872LL;
  if ( *(_BYTE *)(*(_QWORD *)(SessionState + 96) + 24293LL) )
    return 0;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v21);
  IsCurrentProcessUmfdHostNoLock = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
  v9 = v21;
  if ( !IsCurrentProcessUmfdHostNoLock )
  {
    if ( v21 )
      GreReleasePushLockShared(v21);
    if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization((__int64)v9, v7, v8) >= 0
      && !*(_BYTE *)(v5 + 19419) )
    {
      v14 = *(_QWORD *)(W32GetSessionState(v12, v11, v13) + 96);
      v15 = v14 == -24264;
      v16 = (struct W32_PUSH_LOCK *)(v14 + 24264);
      v21 = v16;
      if ( !v15 )
        GreAcquirePushLockExclusive(v16);
      if ( !*(_BYTE *)(v5 + 19417) )
      {
        KeClearEvent(*(PRKEVENT *)(v5 + 19344));
        if ( (int)UmfdPostWinLogonMessage((struct Gre::Font::GLOBALS *)v5, 0x409u, 0LL) < 0 )
        {
          if ( (unsigned int)dword_140398BB8 <= 5
            || !(unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x200000000000LL, v17, v18) )
          {
            goto LABEL_23;
          }
          goto LABEL_16;
        }
        if ( KeWaitForSingleObject(*(PVOID *)(v5 + 19344), Executive, 0, 0, 0LL) || !*(_QWORD *)(v5 + 19320) )
        {
          if ( (unsigned int)dword_140398BB8 <= 5
            || !(unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x200000000000LL, v19, v20) )
          {
            goto LABEL_23;
          }
LABEL_16:
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            &dword_140398BB8,
            &unk_14036A3E7);
LABEL_23:
          Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v21, 0);
          return v4;
        }
      }
      v4 = 1;
      goto LABEL_23;
    }
    return 0;
  }
  if ( v21 )
    GreReleasePushLockShared(v21);
  return 1;
}
