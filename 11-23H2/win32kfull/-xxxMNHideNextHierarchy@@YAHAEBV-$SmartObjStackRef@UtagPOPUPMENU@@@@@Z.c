/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0215780
 * Callers:
 *     xxxMNButtonDown @ 0x1C0216338 (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C02180A0 (xxxMNMouseMove.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 *a1)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( !*(_QWORD *)(*(_QWORD *)*a1 + 24LL) )
    return 0LL;
  v9 = 0LL;
  v2 = *a1;
  v8 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
  ThreadLockAlways(v3, &v8);
  if ( v3 != *(_QWORD *)(*(_QWORD *)*a1 + 56LL) )
    xxxSendMessage(v3);
  xxxSendMessage(v3);
  ThreadUnlock1(v5, v4, v6);
  return 1LL;
}
