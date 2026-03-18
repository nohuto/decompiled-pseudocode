/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1400FDC0C
 * Callers:
 *     bAddFlEntry @ 0x1400B8A30 (bAddFlEntry.c)
 *     bUnloadEudcFont @ 0x1400FE308 (bUnloadEudcFont.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x140145B74 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x14015212C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x14021F30C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B94E0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FDAC0 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1400FDD28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FDDF8 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

_BOOL8 __fastcall PFTOBJ::bUnloadEUDCFont(PFTOBJ *this, unsigned __int16 *a2)
{
  BOOL v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rax
  const unsigned __int16 *v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  struct PFF *v13; // rax
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  struct PFF **v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v15 = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v12 = *(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96);
  v14[0] = *(_QWORD *)(v12 + 20416);
  GreAcquireSemaphore<17,>(v12 + 4872);
  v13 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v14, v7, v5, 1u, 0LL, 0, &v15, 1);
  if ( v13 )
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v14, v13, v15, 0);
  else
    GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v12 + 20344));
  FreeTmpBuffer(v7);
  return v2;
}
