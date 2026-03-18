/*
 * XREFs of ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1401B6764
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     TouchTargetingBigTargetWindow @ 0x1401B67E8 (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingDownrank @ 0x1401B6888 (TouchTargetingDownrank.c)
 */

__int64 __fastcall _TTWindowPenalty(struct tagWND *a1, struct tagPNTRWINDOWHITTTESTARGS *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  unsigned int Prop; // eax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = *((_QWORD *)a2 + 5);
    v12 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( (unsigned int)TouchTargetingBigTargetWindow(&v12, v6) )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41412), 1u);
      return (unsigned int)TouchTargetingDownrank(*((_QWORD *)a2 + 5), Prop);
    }
  }
  return v3;
}
