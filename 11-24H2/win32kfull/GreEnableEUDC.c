/*
 * XREFs of GreEnableEUDC @ 0x140152440
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x140145B74 (-CleanUpEUDC@@YAXXZ.c)
 *     NtGdiEnableEudc @ 0x14030D360 (NtGdiEnableEudc.c)
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B480 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     bDeleteAllFlEntry @ 0x1400FE098 (bDeleteAllFlEntry.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x140152534 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401525C4 (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140152638 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ?GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC@@YAK_N@Z @ 0x140152704 (-GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC@@YAK_N@Z.c)
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x14021F30C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rcx
  bool v12; // zf
  unsigned int v13; // esi

  v3 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4872LL;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v5, v4 + 8624);
  if ( v3 )
  {
    GreAcquirePushLockExclusive2<16,1>(v4);
    if ( *(_DWORD *)(v4 + 14692) == 1 && !*(_DWORD *)(v4 + 14696) && (unsigned int)bSetupDefaultFlEntry() )
      *(_DWORD *)(v4 + 14696) = 1;
    GreReleasePushLockExclusive2<16,1>(v4);
  }
  v6 = *(_DWORD *)(v4 + 8648);
  *(_DWORD *)(v4 + 8648) = GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC(v3 != 0) | v6;
  if ( v3 )
    v10 = bAddAllFlEntry(1LL);
  else
    v10 = bDeleteAllFlEntry(v8, v7, v9);
  v12 = *(_BYTE *)(v4 + 8632) == 0;
  v13 = v10;
  *(_DWORD *)(v4 + 8648) = v6;
  if ( v12 )
    *(_BYTE *)(v4 + 8632) = 1;
  GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v11, v4 + 8624);
  return v13;
}
