/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x1400C6360
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x14020AA90 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x14020AD1C (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall InputConfig::Mouse::RegionFromPoint(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // ebx
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD **v10; // r15
  unsigned __int64 v11; // r12
  _DWORD *v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // r10
  char v15; // di
  _QWORD *v16; // rax
  _DWORD *v17; // r8
  int v18; // r9d
  PERESOURCE *v19; // rcx
  int v21; // ebp
  int v22; // r9d
  int v23; // ecx
  int v24; // eax
  int v25; // r9d
  int v26; // eax
  int v27; // r9d
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rax
  tagDomLock *v31; // [rsp+28h] [rbp-50h] BYREF
  tagDomLock *v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+84h] [rbp+Ch]

  v33 = HIDWORD(a1);
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v31,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v8 = *(_QWORD *)(W32GetUserSessionState(v7) + 18688);
  v9 = *(_QWORD *)(v8 + 24);
  if ( !v9 )
    v9 = v8 + 32;
  *a2 = 0LL;
  v10 = (_QWORD **)(v9 + 1456);
  v11 = -1LL;
  v12 = 0LL;
  v13 = W32GetUserSessionState(v8);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v32, (struct CEResourceLock *)(v13 + 18696));
  v14 = *v10;
  v15 = 1;
  while ( 1 )
  {
    v16 = 0LL;
    if ( v14 != v10 )
      v16 = v14 + 2;
    if ( !v16 )
      break;
    v17 = 0LL;
    if ( v14 != v10 )
      v17 = v14 + 2;
    v18 = *v17;
    if ( v5 >= *v17 && v5 < v17[2] && v33 >= v17[1] && v33 < v17[3] )
    {
      v19 = (PERESOURCE *)v32;
      *a2 = v17;
      tagDomLock::UnLockExclusive(v19);
      goto LABEL_16;
    }
    if ( a3 == 1 )
    {
      if ( v5 < v18 || v5 >= v17[2] )
      {
        v22 = v18 - v5;
        v23 = -v22;
        if ( v22 > 0 )
          v23 = v22;
        v24 = -(v5 - v17[2] + 1);
        if ( v5 - v17[2] + 1 > 0 )
          v24 = v5 - v17[2] + 1;
        if ( v23 >= v24 )
          v22 = v5 - v17[2] + 1;
        v21 = -v22;
        if ( v22 > 0 )
          v21 = v22;
      }
      else
      {
        v21 = 0;
      }
      v25 = v17[1];
      if ( v33 < v25 || v33 >= v17[3] )
      {
        v27 = v25 - v33;
        v28 = -v27;
        if ( v27 > 0 )
          v28 = v27;
        v29 = -(v33 - v17[3] + 1);
        if ( v33 - v17[3] + 1 > 0 )
          v29 = v33 - v17[3] + 1;
        if ( v28 >= v29 )
          v27 = v33 - v17[3] + 1;
        v26 = -v27;
        if ( v27 > 0 )
          v26 = v27;
      }
      else
      {
        v26 = 0;
      }
      v30 = v26 * (__int64)v26;
      if ( v30 + v21 * (__int64)v21 < v11 )
      {
        v12 = v17;
        v11 = v30 + v21 * (__int64)v21;
      }
    }
    v14 = (_QWORD *)*v14;
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v32);
  if ( v12 )
    *a2 = v12;
  else
    v15 = 0;
LABEL_16:
  tagDomLock::UnLockExclusive((PERESOURCE *)v31);
  return v15;
}
