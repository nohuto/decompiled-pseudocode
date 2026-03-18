/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401807D8
 * Callers:
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 *     FreeDdeXact @ 0x140269EC0 (FreeDdeXact.c)
 * Callees:
 *     <none>
 */

void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        __int64 a2)
{
  if ( *(_BYTE *)this )
    *(_QWORD *)(W32GetUserSessionState(this, a2) + 19824) = 0LL;
}
