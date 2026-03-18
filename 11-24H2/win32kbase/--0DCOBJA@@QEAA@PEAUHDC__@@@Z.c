/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0
 * Callers:
 *     GreGetDCOrgEx @ 0x14000F3C0 (GreGetDCOrgEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x14000FDA0 (GreSelectVisRgnShared.c)
 *     GreSetDCOrg @ 0x14000FE10 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x14000FF10 (GreGetBounds.c)
 *     GreIsRendering @ 0x140010150 (GreIsRendering.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140010ED0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreValidateVisrgn @ 0x140022F24 (GreValidateVisrgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GreCopyVisRgn @ 0x140179AC0 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x140179B90 (GreIntersectVisRect.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 SessionState; // rax
  _OWORD *v5; // rcx
  DCOBJA *v6; // rdx
  __int64 v7; // rdx

  SessionState = W32GetSessionState();
  v5 = (_OWORD *)((char *)this + 40);
  v6 = this;
  *((_QWORD *)this + 2) = *(_QWORD *)(SessionState + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  if ( this == (DCOBJA *)-40LL )
    v6 = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *v5 = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  PushThreadGuardedObject(v5, v6, UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v7) = 1;
  *(_QWORD *)this = HmgShareLockEx(a2, v7, 0LL);
  return this;
}
