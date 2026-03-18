/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013926C
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1400872DC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     GreLockSprite @ 0x1400143C0 (GreLockSprite.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400146AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     vSpUnTearDownSprites @ 0x14023AD50 (vSpUnTearDownSprites.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1)
{
  __int64 v2; // rdx
  _QWORD **v3; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rcx
  __int64 SessionState; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  int v10; // ecx

  GreLockVisRgn(*(_QWORD *)a1);
  GreLockSprite(*(_QWORD *)a1, v2);
  GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)a1);
  v3 = (_QWORD **)(*(_QWORD *)a1 + 2616LL);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v7 = (_QWORD *)*v4;
    v8 = v4;
    v4 = v7;
    if ( (_QWORD *)v7[1] != v8 || (v9 = (_QWORD *)v8[1], (_QWORD *)*v9 != v8) )
      __fastfail(3u);
    *v9 = v7;
    v7[1] = v9;
    v10 = *((_DWORD *)v8 + 5);
    if ( v10 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2632LL) -= v10;
      vSpUnTearDownSprites(*(_QWORD *)a1, (char *)v8 + 28);
    }
    GreDeleteFastMutex((char *)v8);
  }
  GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)(*(_QWORD *)a1 + 48LL));
  SessionState = W32GetSessionState(v5);
  GreReleaseSemaphoreExclusive<6,>(*(__int64 **)(SessionState + 88));
  GreUnlockVisRgn(*(_QWORD *)a1);
}
