/*
 * XREFs of ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14009CADC
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x14009C4EC (--1VIDMM_PARTITION@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiClosePerfCounters(struct VIDMM_PARTITION_ADAPTER_INFO *a1)
{
  __int64 v1; // rax
  unsigned int i; // ebx
  __int64 v4; // rdi
  struct _PCW_INSTANCE *v5; // rcx

  v1 = *((_QWORD *)a1 + 1);
  for ( i = 0; i < *(_DWORD *)(v1 + 6944); ++i )
  {
    v4 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v1 + 24) + 240LL) + *(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24)
       + 344LL * i;
    v5 = *(struct _PCW_INSTANCE **)(v4 + 336);
    if ( v5 )
    {
      if ( *(_DWORD *)v4 <= 1u )
      {
        PcwCloseInstance(v5);
        *(_QWORD *)(v4 + 336) = 0LL;
      }
    }
    v1 = *((_QWORD *)a1 + 1);
  }
}
