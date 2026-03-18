/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A53F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, _QWORD, _DWORD))(*(_QWORD *)this + 208LL))(
    this,
    a2,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) >> 12,
    *(_QWORD *)(*(_QWORD *)a2 + 72LL) / 4096LL,
    *(_QWORD *)(*(_QWORD *)a2 + 72LL) / 4096LL,
    *((_QWORD *)a2 + 7),
    0);
  *((_DWORD *)a2 + 6) |= 0x800000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 152LL))(this);
}
