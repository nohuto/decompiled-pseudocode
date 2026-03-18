/*
 * XREFs of NtUserBuildPropList @ 0x1C003C3D0
 * Callers:
 *     <none>
 * Callees:
 *     _BuildPropList @ 0x1C003C22C (_BuildPropList.c)
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C003F2AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, char *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int128 v20; // [rsp+28h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(&v19, 3LL, 0LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v13 = PtiCurrentShared();
    *(_QWORD *)&v20 = *((_QWORD *)v13 + 52);
    *((_QWORD *)v13 + 52) = &v20;
    *((_QWORD *)&v20 + 1) = v10;
    HMLockObject(v10);
    if ( a2 )
      v17 = BuildPropList(v10, a3, a2, a4);
    else
      v17 = -1073741816;
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v17 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v17;
}
