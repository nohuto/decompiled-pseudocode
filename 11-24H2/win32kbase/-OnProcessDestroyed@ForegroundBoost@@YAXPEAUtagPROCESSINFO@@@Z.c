/*
 * XREFs of ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AC7A0
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ForegroundBoost::OnProcessDestroyed(ForegroundBoost *this, struct tagPROCESSINFO *a2)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rcx
  ForegroundBoost **i; // rcx
  ForegroundBoost *v7; // rax

  if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v3);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18912), 0);
    if ( !ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      *((_QWORD *)this + 102) &= 0xFFFFFFC03FFFFFFFuLL;
      for ( i = (ForegroundBoost **)(W32GetUserSessionState(v5) + 36432); ; i = (ForegroundBoost **)((char *)v7 + 1120) )
      {
        v7 = *i;
        if ( !*i )
          break;
        if ( v7 == this )
        {
          *i = (ForegroundBoost *)*((_QWORD *)this + 140);
          break;
        }
      }
      *((_QWORD *)this + 140) = 0LL;
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18912), 0LL);
  }
}
