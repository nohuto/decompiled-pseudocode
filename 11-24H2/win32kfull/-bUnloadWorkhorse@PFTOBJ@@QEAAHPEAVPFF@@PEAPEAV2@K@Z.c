/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1400FD81C
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1400FDC0C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x140199568 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x140199764 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x140214100 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x140228D98 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x14025AFF0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x14030ECB0 (PFF_bUnloadWorkhorseForDCOBJ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140336918 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B6EEC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     prfntKillList @ 0x1400DCA9C (prfntKillList.c)
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FDAC0 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1400FDBA8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1400FDD28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1400FDF34 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14019F11C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     vKillRFONTList @ 0x140200E28 (vKillRFONTList.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  struct PFF **v5; // rsi
  struct PFF *v6; // rbx
  BOOL v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r13
  int v12; // eax
  struct tagPvtData *v13; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  struct PFF *v17; // r15
  int v18; // edi
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  struct PFF **v30; // [rsp+B8h] [rbp+38h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v11 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  if ( !v6 )
    goto LABEL_5;
  v12 = *((_DWORD *)v6 + 13);
  v13 = 0LL;
  v27[0] = v6;
  if ( (v12 & 1) != 0 )
  {
    v8 = 1;
    if ( *((_DWORD *)v6 + 14) || *((_DWORD *)v6 + 15) || *((_QWORD *)v6 + 19) || *((_DWORD *)v6 + 16) )
      goto LABEL_5;
  }
  else
  {
    if ( PFTOBJ::bIsPrivatePFT(this, v9, v10) )
    {
      v13 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v27);
      if ( !v13 )
      {
LABEL_5:
        GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)(v11 + 20344));
        return v8;
      }
    }
    LODWORD(v30) = 0;
    v8 = 1;
    if ( !(unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v27, a4, v13, (int *)&v30) )
    {
      if ( PFTOBJ::bIsPrivatePFT(this, v15, v16) )
        v8 = (_DWORD)v30 == 0;
      goto LABEL_5;
    }
    PFFOBJ::vRemoveHash((PFFOBJ *)v27);
    v17 = 0LL;
    v18 = *((_DWORD *)v6 + 13);
    if ( !*((_DWORD *)v6 + 16) )
      v17 = v6;
    v30 = v5;
    v19 = v18 & 0x200;
    if ( !v5 )
    {
      PUBLIC_PFTOBJ::pPFFGet(
        this,
        *((const unsigned __int16 **)v6 + 3),
        *((_DWORD *)v6 + 8),
        *((_DWORD *)v6 + 9),
        *((struct tagDESIGNVECTOR **)v6 + 5),
        *((_DWORD *)v6 + 12),
        &v30,
        0);
      v5 = v30;
    }
    if ( *v5 == v6 )
      *v5 = (struct PFF *)*((_QWORD *)v6 + 1);
    v20 = *((_QWORD *)v6 + 1);
    if ( v20 )
      *(_QWORD *)(v20 + 16) = *((_QWORD *)v6 + 2);
    v21 = *((_QWORD *)v6 + 2);
    if ( v21 )
      *(_QWORD *)(v21 + 8) = *((_QWORD *)v6 + 1);
    v22 = *(_QWORD *)this;
    if ( !v19 )
      ++*(_DWORD *)(v22 + 32);
    --*(_DWORD *)(v22 + 28);
    v6 = v17;
    v8 = 1;
    if ( !v17 )
      goto LABEL_5;
  }
  v27[0] = v6;
  v26[1] = (__int64)v26;
  v26[0] = (__int64)v26;
  prfntKillList(v27, v26, v10);
  if ( (__int64 *)v26[0] == v26 )
  {
    v23 = 0LL;
    v24 = 0;
    v29 = 0LL;
    v28 = 0LL;
    if ( !*((_DWORD *)v6 + 17) && !*((_DWORD *)v6 + 16) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v27, (struct PFFCLEANUP *)&v28);
      v24 = 1;
      v23 = v29;
    }
    v25 = *(_QWORD *)(v11 + 20344);
    if ( v24 )
    {
      GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v25);
      if ( *((_QWORD *)&v28 + 1) && !v23 )
        (*(void (**)(void))(v28 + 3048))();
    }
    else
    {
      GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v25);
    }
  }
  else
  {
    GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v11 + 20344));
    vKillRFONTList((PFFOBJ *)v27);
  }
  return 1;
}
