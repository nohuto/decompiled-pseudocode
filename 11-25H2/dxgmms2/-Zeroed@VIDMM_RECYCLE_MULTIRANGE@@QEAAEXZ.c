/*
 * XREFs of ?Zeroed@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1400ECD90
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_RECYCLE_MULTIRANGE::Zeroed(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rdx
  char v2; // r8
  __int64 v3; // r9
  char v4; // cl
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 8);
  v2 = 1;
  v3 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    v4 = *(_DWORD *)(v1 + 80) <= 1u ? v2 : 0;
    v2 = v4;
    if ( v1 == v3 )
      break;
    v5 = *(_QWORD *)(v1 + 120);
    if ( v5 == *(_QWORD *)(v1 + 72) + 72LL )
      v1 = 0LL;
    else
      v1 = v5 - 120;
  }
  return v4;
}
