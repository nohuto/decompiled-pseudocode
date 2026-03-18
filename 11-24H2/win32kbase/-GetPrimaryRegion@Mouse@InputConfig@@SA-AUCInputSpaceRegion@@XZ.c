/*
 * XREFs of ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053D70
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140053904 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

_OWORD *__fastcall InputConfig::Mouse::GetPrimaryRegion(_OWORD *a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  tagDomLock *v21; // [rsp+28h] [rbp-10h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v21,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v4 = *(_QWORD *)(W32GetUserSessionState(v3) + 18688);
  v5 = *(_QWORD *)(v4 + 24);
  if ( !v5 )
    v5 = v4 + 32;
  v6 = 5LL;
  v7 = a1;
  v8 = (_OWORD *)(v5 + 736);
  do
  {
    v9 = v8[1];
    *v7 = *v8;
    v10 = v8[2];
    v7[1] = v9;
    v11 = v8[3];
    v7[2] = v10;
    v12 = v8[4];
    v7[3] = v11;
    v13 = v8[5];
    v7[4] = v12;
    v14 = v8[6];
    v7[5] = v13;
    v15 = v8[7];
    v8 += 8;
    v7[6] = v14;
    v7 += 8;
    *(v7 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = v8[1];
  *v7 = *v8;
  v17 = v8[2];
  v7[1] = v16;
  v18 = v8[3];
  v19 = *((_QWORD *)v8 + 8);
  v7[2] = v17;
  v7[3] = v18;
  *((_QWORD *)v7 + 8) = v19;
  tagDomLock::UnLockExclusive(v21);
  return a1;
}
