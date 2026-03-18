/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C009CE24
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00CF7F4 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013DF44 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026A6C4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026ABD0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00CF264 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00D160C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C01144F8 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C026A280 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const wchar_t *a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  struct UmfdTls *v9; // rax
  __int64 v10; // rcx
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r8
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF
  int ProcessInformation; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  ProcessHandle = 0LL;
  if ( !UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread()
    || (result = _wcsicmp(L"\\SystemRoot\\System32\\winsrv.dll", a2)) != 0 )
  {
    v15 = 0;
    ProcessInformation = 9;
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
      && *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v4) + 32) + 23560LL) )
    {
      v9 = UmfdTls::EnsureTls();
      if ( !v9 )
        return -1073741801;
      v10 = *((_QWORD *)v9 + 3);
      if ( !v10 )
        return -1073741801;
      CurrentThread = *(struct _KTHREAD **)(v10 + 16);
      if ( !CurrentThread )
        return -1073741801;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
    }
    ThreadProcess = PsGetThreadProcess(CurrentThread);
    result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
    if ( result >= 0 )
    {
      v8 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
      if ( v8 >= 0 )
      {
        if ( (v15 & 1) != 0 )
        {
          v11 = &word_1C03123AC;
          if ( a2 )
            v11 = a2;
          LogFontLoadAttempt(ProcessHandle, a1, v11);
          v8 = -1073741790;
        }
        else if ( (v15 & 2) != 0 )
        {
          v12 = &word_1C03123AC;
          if ( a2 )
            v12 = a2;
          LogFontLoadAttempt(ProcessHandle, a1, v12);
        }
      }
      ZwClose(ProcessHandle);
      return v8;
    }
  }
  return result;
}
