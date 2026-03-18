/*
 * XREFs of GreDxgkPreSessionDisconnected @ 0x1401DFD3C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkPreSessionDisconnected(Gre::Base *a1)
{
  char v1; // bl
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char)a1;
  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v6, v2);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  LOBYTE(v4) = v1;
  (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 368))(v4);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v6);
}
