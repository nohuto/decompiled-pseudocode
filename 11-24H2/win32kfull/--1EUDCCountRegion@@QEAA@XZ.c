/*
 * XREFs of ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC
 * Callers:
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     GreGetTextMetricsW @ 0x14007CF54 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401D6720 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetStringBitmapW @ 0x140259660 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetWidthTable @ 0x14025B180 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x14025B490 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiGetLinkedUFIs @ 0x14025CFA0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 *     NtGdiExtTextOutW @ 0x14025F050 (NtGdiExtTextOutW.c)
 *     NtGdiFontIsLinked @ 0x14025F5D0 (NtGdiFontIsLinked.c)
 *     NtGdiGetCharABCWidthsW @ 0x14025F670 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetCharWidthInfo @ 0x14025F910 (NtGdiGetCharWidthInfo.c)
 *     NtGdiGetCharWidthW @ 0x14025FA10 (NtGdiGetCharWidthW.c)
 *     NtGdiGetFontData @ 0x14025FC90 (NtGdiGetFontData.c)
 *     NtGdiGetFontUnicodeRanges @ 0x14025FEE0 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetGlyphOutline @ 0x140260020 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetKerningPairs @ 0x1402602F0 (NtGdiGetKerningPairs.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140260450 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetRealizationInfo @ 0x140260620 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextCharsetInfo @ 0x140260790 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetTextExtent @ 0x1402608F0 (NtGdiGetTextExtent.c)
 *     NtGdiGetTextExtentExW @ 0x140260B20 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetTextMetricsW @ 0x140260F20 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetUFI @ 0x140261040 (NtGdiGetUFI.c)
 *     NtGdiPolyTextOutW @ 0x140261230 (NtGdiPolyTextOutW.c)
 *     GreGetTextCharsetInfo @ 0x140303DBC (GreGetTextCharsetInfo.c)
 *     NtGdiGetETM @ 0x140310070 (NtGdiGetETM.c)
 *     NtGdiStartDoc @ 0x140327FB0 (NtGdiStartDoc.c)
 *     NtGdiGetCharacterPlacementW @ 0x140337120 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140337750 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EUDCCountRegion::~EUDCCountRegion(EUDCCountRegion *this)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rbx
  __int64 v7; // r8
  char v8; // dl
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v18; // ebx
  __int64 v19; // rax
  int v20; // edx
  unsigned __int64 i; // rcx
  int v22; // eax

  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
  v2 = *((_QWORD *)this + 5);
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v6 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v6 )
  {
    v7 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFF0000uLL) != 0 && (*v6 & 0x10000) == 0 )
    {
      v20 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v22 = i;
        if ( !_bittest64(&v7, i) )
          v22 = v20;
        v20 = v22;
      }
      if ( v22 > 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v22, v7);
    }
    v8 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x18) = v8 + 1;
    if ( !v8 )
      *v6 |= 0x10000uLL;
  }
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v2 + 8608), 2u);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8636LL));
  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)(*((_QWORD *)this + 5) + 8608LL), 2u);
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v18 = W32GetCurrentWin32kSessionId(),
        v19 = PsGetCurrentThreadProcess(),
        v18 == (unsigned int)PsGetProcessSessionIdEx(v19)) )
  {
    v11 = (__int64 *)PsGetThreadWin32Thread(v9);
    if ( v11 )
      v10 = *v11;
  }
  v12 = v10 + 8;
  v13 = -v10;
  v14 = (_QWORD *)(v12 & -(__int64)(v13 != 0));
  if ( v14 )
  {
    if ( (*(_BYTE *)((v12 & -(__int64)(v13 != 0)) + 0x18))-- == 1 )
      *v14 &= ~0x10000uLL;
    if ( !*v14 )
      GrepOnAllLocksReleased();
  }
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
