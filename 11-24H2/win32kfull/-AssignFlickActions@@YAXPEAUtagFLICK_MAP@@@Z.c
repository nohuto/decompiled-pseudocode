/*
 * XREFs of ?AssignFlickActions@@YAXPEAUtagFLICK_MAP@@@Z @ 0x14012C584
 * Callers:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x14012C34C (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AssignFlickActions(struct tagFLICK_MAP *a1, __int64 a2)
{
  _OWORD *UserSessionState; // rax

  UserSessionState = (_OWORD *)W32GetUserSessionState(a1, a2);
  *(_OWORD *)a1 = *(_OWORD *)((char *)UserSessionState + 18280);
  *((_OWORD *)a1 + 1) = UserSessionState[1144];
  *((_OWORD *)a1 + 2) = *(_OWORD *)((char *)UserSessionState + 18328);
  *((_OWORD *)a1 + 3) = UserSessionState[1147];
  *((_OWORD *)a1 + 4) = *(_OWORD *)((char *)UserSessionState + 18376);
  *((_OWORD *)a1 + 5) = UserSessionState[1150];
  *((_OWORD *)a1 + 6) = *(_OWORD *)((char *)UserSessionState + 18424);
  *((_OWORD *)a1 + 7) = UserSessionState[1153];
}
