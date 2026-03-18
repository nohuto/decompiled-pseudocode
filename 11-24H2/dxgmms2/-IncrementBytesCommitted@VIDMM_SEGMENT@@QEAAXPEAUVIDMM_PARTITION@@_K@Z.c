/*
 * XREFs of ?IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400CE0FC
 * Callers:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400CDA94 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::IncrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  *((_QWORD *)this + 32) += a3;
  v3 = *((_QWORD *)this + 3);
  v4 = *((unsigned __int16 *)this + 210);
  v5 = *((int *)this + 129);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 40232) + 8 * v4);
  if ( (*(_BYTE *)(v6 + 24 * v5 + 552) & 1) != 0 )
    v7 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v3 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v4;
  else
    v7 = v6 + 344 * v5 + 584;
  *(_QWORD *)(v7 + 120) += a3;
}
