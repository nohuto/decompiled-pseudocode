/*
 * XREFs of PnpQueuePendingEject @ 0x140717D94
 * Callers:
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1LL);
  v2 = (_QWORD *)qword_140F8B0A8;
  if ( *(__int64 **)qword_140F8B0A8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140F8B0A8 = (__int64)a1;
  PpDevNodeUnlockTree(1LL);
  return 1;
}
