/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1401F9A88
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreLddmProcessDesktopSwitch(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rax
  int v2; // edi
  __int64 i; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v9, v1);
  v2 = UserRemoteConnectedSessionUsingXddm();
  for ( i = 0LL; ; i = v5 )
  {
    v4 = hdevEnumerateDisplayOnly(i);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (*(_DWORD *)(v4 + 40) & 0x20401) == 1 )
    {
      if ( (v7 = *(_QWORD *)(v4 + 2568), ((v7 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0)
        && (*(_DWORD *)(v7 + 160) & 0x800000) != 0
        || v2 )
      {
        GreLockVisRgn(v4);
        GreLockDisplayDevice(v5);
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
        (*(void (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 408))(
          *(_QWORD *)(*(_QWORD *)(v5 + 2568) + 232LL),
          *(unsigned int *)(*(_QWORD *)(v5 + 2568) + 248LL));
        GreUnlockDisplayDevice(v5);
        GreUnlockVisRgn(v5);
      }
    }
  }
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v9);
}
