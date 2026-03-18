/*
 * XREFs of ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1403864F8
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x140386330 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x140386498 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

unsigned __int8 __fastcall DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(
        union _SLIST_HEADER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _SLIST_ENTRY *v5; // rax
  struct _SLIST_ENTRY *v6; // rbx
  union _SLIST_HEADER *v7; // rsi
  struct _SLIST_ENTRY *v8; // rbx
  __int64 v9; // rdi

  v5 = (struct _SLIST_ENTRY *)operator new(0x2290uLL, 0x4B677844u, 256LL, a4);
  v6 = v5;
  if ( v5 )
  {
    ExpInterlockedPushEntrySList(this + 2, v5);
    v7 = this + 3;
    v8 = v6 + 1;
    v9 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList(v7, v8);
      v8 += 69;
      --v9;
    }
    while ( v9 );
    return 1;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 388;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to grow present history buffer, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
