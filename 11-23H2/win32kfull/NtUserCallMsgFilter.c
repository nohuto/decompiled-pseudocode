/*
 * XREFs of NtUserCallMsgFilter @ 0x1C0153630
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C003F2AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C01517DE (xxxCallMsgFilter.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+48h] [rbp-40h]
  __int128 v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity((__int64)&v20, 7u, 0);
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[47] = v6[47];
  *(_OWORD *)v17 = *a1;
  v18 = a1[1];
  v19 = a1[2];
  if ( (v17[1] & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
    return 0LL;
  }
  else
  {
    v12 = (int)xxxCallMsgFilter((__int64)v17, a2, v4, v5);
    *a1 = *(_OWORD *)v17;
    a1[1] = v18;
    a1[2] = v19;
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    return v12;
  }
}
