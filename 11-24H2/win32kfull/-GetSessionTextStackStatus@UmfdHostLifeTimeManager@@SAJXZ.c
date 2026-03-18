/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x140152534
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x140145B74 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEnableEUDC @ 0x140152440 (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030C520 (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdHostLifeTimeManager::GetSessionTextStackStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _KEVENT *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v4 = *(struct _KEVENT **)(v3 + 24224);
  if ( !v4 || !*(_QWORD *)(v3 + 24232) )
    return 3221225701LL;
  if ( KeReadStateEvent(v4) && *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v6, v5, v7) + 96) + 24290LL) )
    return KeReadStateEvent(*(PRKEVENT *)(v3 + 24232)) == 0 ? 0x103 : 0;
  return 259LL;
}
