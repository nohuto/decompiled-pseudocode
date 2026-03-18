/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x140459914
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x140247DCC (FsRtlpOplockEnqueueRH.c)
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x14045995C (IoGetOplockFullFoExt.c)
 */

_QWORD *__fastcall FsRtlpOplockDequeueRH(__int64 a1, __int64 a2)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *result; // rax

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24), a2, a1);
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (result = (_QWORD *)v3[1], (_QWORD *)*result != v3) )
    __fastfail(3u);
  *result = v4;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
