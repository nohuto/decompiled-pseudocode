/*
 * XREFs of DrvNotifySessionStateChange @ 0x14008A3A0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x14015573C (InitializeGreCSRSS.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     SysEntrySMgrNotifySessionChange @ 0x14008A420 (SysEntrySMgrNotifySessionChange.c)
 *     ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x14019B480 (--9-$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int CurrentProcessSessionId; // eax

  v1 = a1;
  if ( (unsigned int)SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=()
    && IS_USERCRIT_OWNED_AT_ALL()
    && (unsigned int)(v1 - 3) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 19600;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(4LL, v1, CurrentProcessSessionId);
  WdLogGlobalForLineNumber = 19603;
  return SysEntrySMgrNotifySessionChange((unsigned int)v1);
}
