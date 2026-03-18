/*
 * XREFs of ?VidMmMapPagingBuffers@@YAXPEAUVIDMM_DMA_POOL@@@Z @ 0x1400B5138
 * Callers:
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400B50EC (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmMapPagingBuffers(struct VIDMM_DMA_POOL *a1)
{
  char *v2; // rsi
  char *v3; // rbx
  __int64 v4; // rdx

  if ( (*((_DWORD *)a1 + 7) & 4) == 0 )
  {
    v2 = (char *)a1 + 80;
    v3 = (char *)*((_QWORD *)a1 + 10);
    while ( v3 != v2 )
    {
      v4 = *((_QWORD *)v3 + 6);
      v3 = *(char **)v3;
      if ( v4 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 64LL) + 160LL))(*(_QWORD *)(*(_QWORD *)v4 + 64LL));
    }
    *((_DWORD *)a1 + 7) |= 4u;
  }
}
