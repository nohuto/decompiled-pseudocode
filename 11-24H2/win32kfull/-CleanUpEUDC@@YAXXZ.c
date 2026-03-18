/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x140145B74
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x140145B00 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1400FDC0C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     bUnloadEudcFont @ 0x1400FE308 (bUnloadEudcFont.c)
 *     GreEnableEUDC @ 0x140152440 (GreEnableEUDC.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x140152534 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

void __fastcall CleanUpEUDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v4; // rbx
  char v5; // al
  void *v6; // rcx
  void *v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rdi
  void *v10; // rcx

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = *(_QWORD *)(SessionState + 96) + 4872LL;
  if ( !*(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20416LL) || (v5 = 1, !*(_QWORD *)(v4 + 15472)) )
    v5 = 0;
  *(_DWORD *)(v4 + 8648) |= 2u;
  if ( v5 && !(unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    GreEnableEUDC(0LL);
  v6 = *(void **)(v4 + 9208);
  if ( v6 )
  {
    Win32FreePool(v6);
    *(_QWORD *)(v4 + 9208) = 0LL;
  }
  v7 = *(void **)(v4 + 9224);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(v4 + 9224) = 0LL;
  }
  if ( *(_DWORD *)(v4 + 14696) )
  {
    v8 = 0;
    v9 = v4 + 9548;
    do
    {
      if ( *(_DWORD *)(v9 - 124) && *(_WORD *)v9 && *(_QWORD *)(v9 + 524) )
        bUnloadEudcFont((struct PFE **)(v4 + 664LL * v8 + 10072));
      ++v8;
      v9 += 664LL;
    }
    while ( v8 < 7 );
  }
  v10 = *(void **)(v4 + 14712);
  if ( v10 )
  {
    Win32FreePool(v10);
    *(_QWORD *)(v4 + 14712) = 0LL;
  }
  if ( *(_DWORD *)(v4 + 14688) )
    PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v10, (unsigned __int16 *)(v4 + 14084));
}
