/*
 * XREFs of ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A3490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, _QWORD, _DWORD, bool))(*(_QWORD *)this + 200LL))(
    this,
    a2,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) >> 12,
    *(_QWORD *)(*(_QWORD *)a2 + 72LL) / 4096LL,
    *(_QWORD *)(*(_QWORD *)a2 + 72LL) / 4096LL,
    *((_QWORD *)a2 + 7),
    0,
    (**((_DWORD **)a2 + 47) & 0x800004) == 4);
  *((_DWORD *)a2 + 6) &= ~0x800000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 152LL))(this);
}
