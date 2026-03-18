/*
 * XREFs of GreSuspendDirectDraw @ 0x140087130
 * Callers:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x140088E4C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1400872DC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x14013A5F0 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 v4; // rcx
  PDEV *i; // rcx
  PDEV *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 DxgkWin32kInterface; // rax
  char v10; // al
  __int64 v11; // rdx
  _BOOL8 v12; // rdx
  char v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL)
                                                  + 1573008LL));
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession(v4) )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v14);
    for ( i = 0LL; ; i = (PDEV *)v7 )
    {
      v6 = hdevEnumerate<1>(i);
      v7 = (__int64)v6;
      if ( !v6 )
        break;
      if ( (*((_DWORD *)v6 + 10) & 0x20401) == 1 )
      {
        v8 = *((_QWORD *)v6 + 321);
        if ( ((v8 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
        {
          GreLockVisRgn(v7);
          GreAcquireSemaphore<8,PDEVOBJ>(v7);
          v13 = 0;
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(DxgkWin32kInterface + 448))(
                  *(_QWORD *)(*(_QWORD *)(v7 + 2568) + 232LL),
                  *(unsigned int *)(*(_QWORD *)(v7 + 2568) + 248LL),
                  &v13);
          *(_DWORD *)(v7 + 2608) = 1;
          if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v7 + 2720) )
          {
            if ( (a2 & 4) != 0 && v13 )
              v11 = 0LL;
            else
              LOBYTE(v11) = 1;
            DrvDxgkDisplayOnOff(v7, v11, 3LL);
            v12 = (a2 & 4) == 0 || !v13;
            (*(void (__fastcall **)(_QWORD, _BOOL8))(v7 + 2720))(*(_QWORD *)(v7 + 1784), v12);
          }
          *(_DWORD *)(v7 + 2608) = 0;
          GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *(_QWORD *)(v7 + 48));
          GreUnlockVisRgn(v7);
        }
      }
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14);
  }
}
