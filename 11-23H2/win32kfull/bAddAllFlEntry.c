/*
 * XREFs of bAddAllFlEntry @ 0x1C001ADEC
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C001AB10 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x1C001BD38 (GreEnableEUDC.c)
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00194B4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C0019B48 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C001ACF0 (bReadUserSystemEUDCRegistry.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C001B1C8 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     AddAllFlEntryWorker @ 0x1C001B210 (AddAllFlEntryWorker.c)
 *     ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C001B2AC (-IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     bNotIsKeySymbolicLink @ 0x1C001BB88 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C001BC3C (GetUserEUDCRegistryPath.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0082A74 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vLinkEudcPFEs @ 0x1C00CBCE0 (vLinkEudcPFEs.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngUnmapFontFileFD @ 0x1C0114DF0 (EngUnmapFontFileFD.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0115D18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0115ED0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x1C013EAE4 (-ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1C024AEDC (W32GetCurrentWin32kSessionId.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029DACC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C029EC44 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1)
{
  __int64 v2; // rcx
  WCHAR *v3; // rdi
  unsigned __int16 *v4; // rbx
  __int64 v5; // rsi
  Gre::Base *v7; // rcx
  __int64 v8; // rax
  int v9; // r14d
  bool v10; // r13
  PFTOBJ *v11; // rcx
  __int64 v12; // r15
  unsigned int v13; // r12d
  __int64 i; // r14
  int CurrentServiceSessionId; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-31h] BYREF
  struct PFE *v18[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+17h]
  unsigned int v23; // [rsp+E8h] [rbp+6Fh] BYREF
  wchar_t *Src; // [rsp+F0h] [rbp+77h] BYREF
  PCWSTR Path; // [rsp+F8h] [rbp+7Fh] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, 0x208u);
  v3 = (WCHAR *)Path;
  if ( !Path )
    goto LABEL_5;
  v4 = Src;
  if ( !Src )
    goto LABEL_5;
  *Src = 0;
  *v3 = 0;
  v5 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v5 + 13272));
  if ( IsConcurrentEUDCOperationInProgress((struct Gre::Full::SESSION_GLOBALS *)v5) )
  {
LABEL_4:
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v5 + 13272));
LABEL_5:
    MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Src);
    MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Path);
    return 0LL;
  }
  if ( a1 && !*(_QWORD *)(v5 + 13320) && !*(_QWORD *)(v5 + 13328) && (unsigned int)bReadUserSystemEUDCRegistry(v3) )
  {
    *(_OWORD *)v18 = 0LL;
    if ( !(unsigned int)bAppendSysDirectory(v4, v3) )
      goto LABEL_4;
    v20[0] = *(_QWORD *)(v5 + 20272);
    Handle = (HANDLE)*((_QWORD *)Gre::Base::Globals(v7) + 6);
    GreAcquireSemaphore(Handle);
    v8 = -1LL;
    do
      ++v8;
    while ( v4[v8] );
    if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v20, v4, (int)v8 + 1, 1u, 0LL, 0, 0LL, 1) )
    {
      v9 = 0;
    }
    else
    {
      v19[0] = v18;
      v19[1] = 0LL;
      v23 = 0;
      v17 = 0LL;
      v9 = PUBLIC_PFTOBJ::bLoadAFont(
             (PUBLIC_PFTOBJ *)v20,
             v4,
             &v23,
             8u,
             (struct PFF **)&v17,
             (struct _EUDCLOAD *)v19,
             0);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&Handle);
    if ( v9 )
    {
      if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v5 + 13864), v18[0], 1) )
        goto LABEL_41;
      v10 = 0;
      v19[0] = *(_QWORD *)v18[0];
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v21,
        (struct PFFOBJ *)v19);
      v12 = v21;
      v13 = v22;
      if ( v22 == *(_DWORD *)(v21 + 36) )
        v10 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v5 + 13864), v18[0], 1) != 0;
      for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= *(_DWORD *)(v12 + 36) )
          break;
        EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v12 + 200) + 8 * i));
      }
      if ( v10 )
      {
LABEL_41:
        *(_OWORD *)(v5 + 13320) = *(_OWORD *)v18;
        wcscpy_s((wchar_t *)(v5 + 13336), 0x105uLL, v4);
        ++*(_DWORD *)(v5 + 13896);
        goto LABEL_26;
      }
      PFTOBJ::bUnloadEUDCFont(v11, v4);
    }
    *(_OWORD *)(v5 + 13320) = 0LL;
    *(_WORD *)(v5 + 13336) = 0;
  }
LABEL_26:
  if ( (*(_DWORD *)(v5 + 13312) & 1) != 0 )
  {
    CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == CurrentServiceSessionId )
      ApplyFontInfEquivalentChangesOnServicingUpdate();
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
  }
  if ( (*(_DWORD *)(v5 + 13312) & 4) != 0 )
  {
    Handle = 0LL;
    v17 = 0LL;
    v23 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v17) && v23 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v17 )
      ZwClose(v17);
    vLinkEudcPFEs(0LL);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v5 + 13272));
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Src);
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Path);
  return 1LL;
}
