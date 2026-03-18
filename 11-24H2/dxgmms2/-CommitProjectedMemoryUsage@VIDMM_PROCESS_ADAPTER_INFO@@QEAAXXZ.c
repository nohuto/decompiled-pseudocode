/*
 * XREFs of ?CommitProjectedMemoryUsage@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400F5B48
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B93C8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CommitProjectedMemoryUsage(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  _QWORD *v3; // rdx

  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6944LL); v3[13] = v3[17] )
  {
    v2 = (unsigned __int16)i++;
    v3 = (_QWORD *)(*((_QWORD *)this + 2) + 304 * v2);
    v3[10] = v3[14];
    v3[11] = v3[15];
    v3[12] = v3[16];
  }
}
