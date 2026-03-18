/*
 * XREFs of ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x14010C870
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x140100F5C (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PROCESS *__fastcall VIDMM_PROCESS::GetVmwpProcess(VIDMM_PROCESS *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  struct VIDMM_PROCESS *result; // rax

  v1 = *((_QWORD *)this + 4);
  v2 = *(_DWORD *)(v1 + 408);
  if ( (v2 & 0x100) != 0 )
    v3 = *(_QWORD *)(v1 + 592);
  else
    v3 = v1 & -(__int64)((v2 & 0x80u) != 0);
  v4 = *(_QWORD *)(v3 + 64);
  result = 0LL;
  if ( v4 )
    return *(struct VIDMM_PROCESS **)(v4 + 8);
  return result;
}
