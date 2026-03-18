/*
 * XREFs of GreMarkDCUnreadable @ 0x140152E84
 * Callers:
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140035870 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall GreMarkDCUnreadable(__int64 a1)
{
  struct _BASEOBJECT *v2; // rbx
  __int64 v3; // rax
  struct _BASEOBJECT *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  HSEMAPHORE v9; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  v5 = 0;
  v8 = 0;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = (struct _BASEOBJECT *)HmgShareLockEx(a1, 1, 0);
  v2 = v4;
  SEMOBJ<20>::SEMOBJ<20>(&v9);
  if ( v4 )
  {
    *(_DWORD *)(*((_QWORD *)v4 + 62) + 112LL) |= 0x10000000u;
    v3 = *((_QWORD *)v2 + 6);
    *(_DWORD *)(v3 + 172) |= 0x10000000u;
    *(_DWORD *)(v3 + 180) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast(&v4);
  }
  SEMOBJ<20>::vUnlock(&v9);
}
