/*
 * XREFs of UpdateDirtyVisRgnTrackers @ 0x140046E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1400489D4 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void __fastcall UpdateDirtyVisRgnTrackers(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  CVisRgnTrackerProp *v4; // rcx

  v2 = W32GetUserSessionState(a1, a2) + 19728;
  for ( i = *(_QWORD **)v2; i != (_QWORD *)v2; i = (_QWORD *)*i )
  {
    if ( i )
      v4 = (CVisRgnTrackerProp *)(i - 3);
    else
      v4 = 0LL;
    CVisRgnTrackerProp::Update(v4);
  }
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
}
