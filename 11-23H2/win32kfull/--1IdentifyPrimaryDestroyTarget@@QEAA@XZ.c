/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C0040918
 * Callers:
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C00404F0 (NtUserKillTimer.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004829C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(IdentifyPrimaryDestroyTarget *this)
{
  if ( *(_BYTE *)this )
    gphePrimaryDestroyTarget = 0LL;
}
