/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1400E097C
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401BAE60 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

struct _LUID __fastcall InputConfig::Mouse::GetInputSpaceId(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rbx
  tagDomLock *v7; // [rsp+28h] [rbp-10h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v7,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v3 = *(_QWORD *)(W32GetUserSessionState(v2) + 18688);
  v4 = *(__int64 **)(v3 + 24);
  if ( !v4 )
    v4 = (__int64 *)(v3 + 32);
  v5 = *v4;
  tagDomLock::UnLockExclusive((PERESOURCE *)v7);
  return (struct _LUID)v5;
}
