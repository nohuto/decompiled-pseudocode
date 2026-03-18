/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140091FC0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016494C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400923C0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdi
  int v5; // esi
  tagDomLock *v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(13LL);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v2);
  *(_BYTE *)(a1 + 24) = 0;
  v4 = a1;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42424;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v6 = *(tagDomLock **)v4;
    if ( *(_QWORD *)v4 )
    {
      if ( *(_BYTE *)(v4 + 8) )
        tagDomLock::LockExclusive(v6);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v6);
    }
    ++v5;
    v4 += 16LL;
  }
  while ( !v5 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
