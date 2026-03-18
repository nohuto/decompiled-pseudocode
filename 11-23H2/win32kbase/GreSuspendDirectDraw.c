/*
 * XREFs of GreSuspendDirectDraw @ 0x1C001C510
 * Callers:
 *     DrvDisableMDEV @ 0x1C001A570 (DrvDisableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C001AF6C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001CAB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001CB24 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C001CBA0 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C001CBF0 (GreLockDisplayDevice.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00C2000 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(__int64 a1, char a2)
{
  int v4; // eax
  PDEV *j; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  char v12; // al
  __int64 v13; // rdx
  _BOOL8 v14; // rdx
  PDEV *i; // rcx
  int v16; // ecx
  __int64 v17; // rax
  PDEV *v18; // rdi
  __int64 v19; // [rsp+40h] [rbp+20h] BYREF
  char v20; // [rsp+48h] [rbp+28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL)
                                                  + 1573008LL));
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
  v19 = a1;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v18 )
        {
          v17 = hdevEnumerate<1>(i);
          v18 = (PDEV *)v17;
          if ( !v17 )
            break;
          v16 = *(_DWORD *)(v17 + 40) & 0x20001;
          v19 = v17;
          if ( v16 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v19) && *((_QWORD *)v18 + 3) == a1 )
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v19);
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v19) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v19);
      }
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
    for ( j = 0LL; ; j = (PDEV *)v7 )
    {
      v6 = hdevEnumerate<1>(j);
      v7 = v6;
      if ( !v6 )
        break;
      v8 = *(_DWORD *)(v6 + 40) & 0x20401;
      v19 = v6;
      if ( v8 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v19) )
      {
        GreLockVisRgn(v7);
        GreLockDisplayDevice(v7);
        v20 = 0;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10, v9);
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(DxgkWin32kInterface + 448))(
                *(_QWORD *)(*(_QWORD *)(v7 + 2552) + 232LL),
                *(unsigned int *)(*(_QWORD *)(v7 + 2552) + 248LL),
                &v20);
        *(_DWORD *)(v7 + 2592) = 1;
        if ( ((a2 & 8) == 0 || v12) && *(_QWORD *)(v7 + 2704) )
        {
          if ( (a2 & 4) != 0 && v20 )
            v13 = 0LL;
          else
            LOBYTE(v13) = 1;
          DrvDxgkDisplayOnOff(v7, v13, 3LL);
          v14 = (a2 & 4) == 0 || !v20;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v7 + 2704))(*(_QWORD *)(v7 + 1768), v14);
        }
        *(_DWORD *)(v7 + 2592) = 0;
        GreUnlockDisplayDevice(v7);
        GreUnlockVisRgn(v7);
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
  }
}
