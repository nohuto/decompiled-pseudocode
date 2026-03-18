/*
 * XREFs of GreEudcUnloadLinkW @ 0x14030C520
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x14030D380 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B480 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     bUnloadEudcFont @ 0x1400FE308 (bUnloadEudcFont.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x140152534 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140152638 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1401ED0FC (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402595F8 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140269890 (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     bDeleteFlEntry @ 0x14030C64C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030C84C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(wchar_t *Str1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct W32_PUSH_LOCK *v12; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus((__int64)Str1, a2, (__int64)a3) )
    return 0LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96) + 4872LL;
  PushLockExclusiveObj<0,1>::PushLockExclusiveObj<0,1>(&v12, v9);
  GreAcquirePushLockExclusive2<16,1>(v9);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v9);
  if ( Str1 )
  {
    v5 = bDeleteFlEntry(Str1, a3);
    if ( !v5 )
      v5 = bDeleteFlEntry(Str1, a3);
  }
  else if ( *(_QWORD *)(v9 + 8656) || *(_QWORD *)(v9 + 8664) )
  {
    vUnlinkAllEudcRFONTsAndPFEs(0, v10);
    bUnloadEudcFont((struct PFE **)(v9 + 8656));
    *(_OWORD *)(v9 + 8656) = 0LL;
    ++*(_DWORD *)(v9 + 9232);
    *(_WORD *)(v9 + 8672) = 0;
    bWriteUserSystemEUDCRegistry((PVOID)&FLOAT_0_0);
  }
  GreReleasePushLockExclusive2<16,1>(v9);
  GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v11, v12);
  return v5;
}
