/*
 * XREFs of ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400CE188
 * Callers:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400CDA94 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400418F0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::IncrementBytesResident(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION *a2,
        __int64 a3,
        char a4)
{
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi

  *((_QWORD *)this + 33) += a3;
  if ( *((_DWORD *)this + 102) != -1 && !a4 )
  {
    v12 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = v12 + a3;
    if ( v12 + a3 > qword_1400815C8 && v12 <= qword_1400815C8 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 40016LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 40080LL));
    if ( !v12 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 3), this);
  }
  v7 = *((_QWORD *)this + 3);
  v8 = *((unsigned __int16 *)this + 210);
  v9 = *((int *)this + 129);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 40232) + 8 * v8);
  if ( (*(_BYTE *)(v10 + 24 * v9 + 552) & 1) != 0 )
    v11 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v7 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v8;
  else
    v11 = v10 + 344 * v9 + 584;
  *(_QWORD *)(v11 + 128) += a3;
}
