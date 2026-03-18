/*
 * XREFs of ThreadUnlockWorker1 @ 0x1C0049E10
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0056F4C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C16A4 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C012CA88 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 __fastcall ThreadUnlockWorker1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  struct _HANDLEENTRY *v8; // rdi
  char v9; // al
  char *v11; // rdi
  int v12; // esi
  tagDomLock *v13; // rcx
  PERESOURCE *DomainLockRef; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+30h] [rbp-38h] BYREF
  void *v16; // [rsp+38h] [rbp-30h]
  char v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  char v19; // [rsp+50h] [rbp-18h]

  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v6 = *(_QWORD **)(v4 + 416);
  *(_QWORD *)(v4 + 416) = *v6;
  v7 = v6[1];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v8 = (struct _HANDLEENTRY *)((char *)qword_1C028FE68
                                 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*(_DWORD *)v7);
      v9 = *((_BYTE *)v8 + 25);
      if ( (v9 & 1) != 0 && (v9 & 2) == 0 )
      {
        if ( IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          v11 = &v15;
          v15 = 1;
          v16 = &gDomainDummyLock;
          v12 = 0;
          v17 = 0;
          v18 = 0LL;
          v19 = 0;
          do
          {
            v13 = (tagDomLock *)*((_QWORD *)v11 - 1);
            if ( v13 )
            {
              if ( *v11 )
                tagDomLock::LockExclusive(v13);
              else
                ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v13);
            }
            ++v12;
            v11 += 16;
          }
          while ( !v12 );
          v19 = 1;
          LockIntoSharedUserCritDeferredUnlockList(v7);
          if ( v19 && DomainLockRef )
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        else if ( !gphePrimaryDestroyTarget
               || v8 == gphePrimaryDestroyTarget
               || gbInDestroyExclusiveUserCritDeferredUnlockList )
        {
          HMDestroyUnlockedObjectWorker(v8);
        }
        else
        {
          ++gcSecondaryDestroyTargets;
          LockIntoExclusiveUserCritDeferredUnlockList(v7);
        }
        return 0LL;
      }
    }
  }
  return v7;
}
