/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0040A18
 * Callers:
 *     FreeHidData @ 0x1C000E950 (FreeHidData.c)
 *     DestroyEventHook @ 0x1C003F570 (DestroyEventHook.c)
 *     FreeHook @ 0x1C003F9E0 (FreeHook.c)
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 *     FreeDdeXact @ 0x1C01FA700 (FreeDdeXact.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0040A50 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        void *a2)
{
  struct _HANDLEENTRY *v3; // rax

  *(_BYTE *)this = 0;
  v3 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a2);
  IdentifyPrimaryDestroyTarget::Identify(this, v3);
  return this;
}
