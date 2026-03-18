/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D8054
 * Callers:
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7CEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x140035820 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D81A0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 SessionState; // rax
  __int64 v9; // rax
  struct _BASEOBJECT *v10; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-30h]
  struct _BASEOBJECT *v15; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+68h] [rbp-8h]

  if ( !(unsigned int)XEPALOBJ::bIsPalDefault(this) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
    if ( v5 )
    {
      v13 = 0LL;
      v11 = 0;
      v14 = 0;
      v12 = *(_QWORD *)(W32GetSessionState(v4) + 88);
      v7 = HmgShareLockEx(v5, 1, 4);
      v10 = (struct _BASEOBJECT *)v7;
      if ( v7 )
        *(_QWORD *)(v7 + 992) = *(_QWORD *)(*(_QWORD *)a2 + 992LL);
      XDCOBJ::vAltUnlockNoNullSet(&v10);
    }
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 992LL);
    if ( v6 )
    {
      SessionState = W32GetSessionState(v4);
      v18 = 0LL;
      v16 = 0;
      v19 = 0;
      v17 = *(_QWORD *)(SessionState + 88);
      v9 = HmgShareLockEx(v6, 1, 4);
      v15 = (struct _BASEOBJECT *)v9;
      if ( v9 )
        *(_QWORD *)(v9 + 984) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
      XDCOBJ::vAltUnlockNoNullSet(&v15);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
}
