/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1400F3984
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1401B7A50 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  tagDomLock::UnLockExclusive(this[1]);
}
