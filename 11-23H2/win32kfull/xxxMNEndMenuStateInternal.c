/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C01FF260
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01FF140 (xxxMNEndMenuState.c)
 * Callees:
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002D8D8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     IsMiPEnabledForThread @ 0x1C007FB08 (IsMiPEnabledForThread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C0139C2E (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C014F820 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNDestroyAnimationBitmap @ 0x1C01FEA70 (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C0216164 (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C0219854 (xxxMNSetCapture.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v11; // [rsp+40h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 64);
  UnlockMFMWFPWindow(a2 + 80);
  v4 = *(_QWORD *)(a1 + 608);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 608) = *(_QWORD *)(a2 + 48);
  }
  else
  {
    while ( v4 )
    {
      v5 = (_QWORD *)(v4 + 48);
      v4 = *(_QWORD *)(v4 + 48);
      if ( v4 == a2 )
      {
        *v5 = *(_QWORD *)(a2 + 48);
        break;
      }
    }
  }
  if ( IsMiPEnabledForThread(a1) && *(_QWORD *)(a1 + 1352) )
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = 0LL;
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v6 & 0xFDFFFFFF;
  }
  if ( *(_QWORD *)(a2 + 128) )
    MNDestroyAnimationBitmap(a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreCleanDCAndSetOwnerEx(gMenuState[17], 2147483666LL, 0LL, 1LL);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 136);
    if ( v7 )
      GreDeleteDC(v7);
    Win32FreePool((void *)a2);
  }
  v8 = *(_QWORD *)(a1 + 608);
  if ( v8 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v11,
      *(struct tagMENUSTATE **)(a1 + 608));
    v9 = *(_QWORD *)v8;
    if ( (*(_DWORD *)(v8 + 8) & 0x100) != 0 )
    {
      xxxActivateWindow(*(struct tagWND **)(v9 + 56));
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, v9);
      xxxMNSetCapture(v10, v8);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v11);
  }
}
