/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402AFE6C
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  if ( !*((_QWORD *)a1 + 5) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(*((_QWORD *)a1 + 5), *(unsigned __int16 *)(UserSessionState + 41400), 1u);
  if ( !Prop )
    return 0LL;
  v6 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v6 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v7 = (__int64 *)((char *)a1 + 24);
  if ( v6 )
  {
    v14[0] = v6 + 24;
    v14[1] = *v7;
    HMAssignmentLock(v14, 0LL);
  }
  else
  {
    v8 = *v7;
    v9 = W32GetUserSessionState(0LL, v5);
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(unsigned __int16 *)(v9 + 41400);
    if ( v8 )
      InternalSetProp(v10, v11, v8, 1u);
    else
      InternalRemoveProp(v10, v11, 1u);
  }
  v12 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject(a1);
  return (struct tagDDECONV *)v12;
}
