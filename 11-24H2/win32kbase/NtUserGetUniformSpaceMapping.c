/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x14000B3C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetUniformSpaceMapping @ 0x14000B784 (DrvGetUniformSpaceMapping.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateSharedHandle @ 0x140042DB0 (HMValidateSharedHandle.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  _BYTE *v9; // rdx
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 88);
    if ( v7 )
    {
      UserSessionState = W32GetUserSessionState();
      if ( (unsigned int)DrvGetUniformSpaceMapping(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL), v7, &v10) )
      {
        v4 = 1;
        v9 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v9 = (_BYTE *)MmUserProbeAddress;
        *v9 = *v9;
        v9[15] = v9[15];
        *a2 = v10;
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
