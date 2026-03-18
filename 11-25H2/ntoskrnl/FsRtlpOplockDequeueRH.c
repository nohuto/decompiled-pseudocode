/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x14045A5B0
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x140375544 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x14045A5F8 (IoGetOplockFullFoExt.c)
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
