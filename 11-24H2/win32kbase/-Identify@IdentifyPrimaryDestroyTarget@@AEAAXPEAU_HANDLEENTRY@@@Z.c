/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400415C0
 * Callers:
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 *     DestroyKL @ 0x14006379C (DestroyKL.c)
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  if ( !*(_DWORD *)(W32GetUserSessionState(this) + 19816) && IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v4) + 19824);
    *(_BYTE *)this = v5 == 0;
    if ( v5 )
    {
      if ( a2 != *(struct _HANDLEENTRY **)(W32GetUserSessionState(v5) + 19824) )
      {
        UserSessionState = W32GetUserSessionState(v6);
        ++*(_DWORD *)(UserSessionState + 19832);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL) + 19824) = a2;
    }
  }
}
