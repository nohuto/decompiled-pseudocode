/*
 * XREFs of PspUnlinkSessionId @ 0x14077BFAC
 * Callers:
 *     PspReleaseReferenceToSession @ 0x140A81850 (PspReleaseReferenceToSession.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

_QWORD *__fastcall PspUnlinkSessionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  v3 = a1 + 80;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 8) != v3 || (v5 = *(_QWORD **)(a1 + 88), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    RtlAvlRemoveNode((unsigned __int64 *)&PspSessionIdNodes, a1 + 96);
  }
  return PspUnlockProcessListExclusive((__int64)CurrentThread);
}
