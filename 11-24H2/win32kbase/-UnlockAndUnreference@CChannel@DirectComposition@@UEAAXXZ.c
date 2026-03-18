/*
 * XREFs of ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1402251B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x14006D6D4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CChannel::UnlockAndUnreference(PERESOURCE *this)
{
  DirectComposition::CChannel::Unlock(this);
  DirectComposition::CChannel::Release((DirectComposition::CChannel *)this);
}
