/*
 * XREFs of ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654
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
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0?$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400A39F4 (--0-$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400A3B04 (--$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1401679D8 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14031D494 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 */

EUDCCountRegion *__fastcall EUDCCountRegion::EUDCCountRegion(EUDCCountRegion *this, struct Gre::Font::GLOBALS *a2)
{
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct W32_PUSH_LOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = 1;
  if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline(this, a2) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        LOBYTE(v6) = *(_BYTE *)(CurrentProcessWin32Process + 296);
        if ( (_BYTE)v6 )
        {
          if ( UmfdHostLifeTimeManager::EnsureUmfdHost(v6, v5, v7) )
            *(_BYTE *)(v8 + 296) = 0;
          else
            *((_BYTE *)this + 48) = 0;
        }
      }
    }
  }
  PushLockSharedObj<0,0>::PushLockSharedObj<0,0>(&v11, *((_QWORD *)this + 5));
  GreAcquirePushLockShared2<16,0>(*((_QWORD *)this + 5));
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 5) + 8636LL));
  GreReleasePushLockShared2<16,0>(*((_QWORD *)this + 5));
  CAutoTGO::vGuard(
    this,
    0LL,
    (void (*)(void *))EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_);
  GrepReleasePushLockCommon<0,0,void (*)(W32_PUSH_LOCK *,unsigned long)>(v9, v11);
  return this;
}
