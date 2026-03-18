/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50
 * Callers:
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BB41C (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BFD00 (-GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400C0454 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C1550 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x14018C724 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401BD138 (-GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D9C14 (-GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1401DA444 (-GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoi.c)
 *     ?GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DEEC8 (-GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiGetWidthTable @ 0x14025B180 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x14025B490 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiGetLinkedUFIs @ 0x14025CFA0 (NtGdiGetLinkedUFIs.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x14026D754 (-GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiGetETM @ 0x140310070 (NtGdiGetETM.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RFONTOBJ::vInit(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        int a3,
        unsigned int a4,
        const struct RFONTOBJ::Tag *a5)
{
  HSEMAPHORE v6; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  char v12; // cl
  unsigned __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( (unsigned int)RFONTOBJ::bInit(this, a2, a3, a4, a5) )
  {
    v6 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONT_Cache", v6, 0LL);
    GreAcquireSemaphoreInternal(v6);
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v8 = *ThreadWin32Thread;
    }
    v10 = (__int64 *)((v8 + 8) & -(__int64)(v8 != 0));
    if ( v10 )
    {
      v11 = *v10;
      if ( (*v10 & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (*v10 & 0x20) == 0 )
      {
        v13 = 0LL;
        v14 = 37;
        do
        {
          v15 = v13;
          if ( !_bittest64(&v11, v13) )
            v15 = v14;
          ++v13;
          v14 = v15;
        }
        while ( v13 < 0x40 );
        if ( v15 > 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11, (unsigned int)v15);
      }
      v12 = *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xD);
      *(_BYTE *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0xD) = v12 + 1;
      if ( !v12 )
        *v10 |= 0x20uLL;
    }
  }
}
