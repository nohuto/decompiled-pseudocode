/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140107CDC
 * Callers:
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(IdentifyPrimaryDestroyTarget *this)
{
  if ( *(_BYTE *)this )
    *(_QWORD *)(W32GetUserSessionState(this) + 19824) = 0LL;
}
