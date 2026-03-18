/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C00AE710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE784 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetForegroundWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  const struct tagWND *v7; // rcx
  struct tagTHREADINFO *v8; // rax

  EnterSharedCrit(a1, a2, a3);
  v6 = 0LL;
  v7 = (const struct tagWND *)gpqForeground;
  if ( gpqForeground )
  {
    if ( *(_QWORD *)(gpqForeground + 128LL) )
    {
      v8 = PtiCurrentShared();
      v7 = *(const struct tagWND **)(gpqForeground + 128LL);
      v3 = *((_QWORD *)v7 + 3);
      if ( *((_QWORD *)v8 + 57) == v3 )
        v6 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v7);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v3, v4, v5);
  return v6;
}
