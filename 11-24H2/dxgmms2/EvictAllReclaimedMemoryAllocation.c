/*
 * XREFs of EvictAllReclaimedMemoryAllocation @ 0x1400ACEA8
 * Callers:
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400ACE60 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 */

_UNKNOWN **__fastcall EvictAllReclaimedMemoryAllocation(VIDMM_PHYSICAL_ADAPTER *this)
{
  _UNKNOWN **result; // rax
  char *v2; // rdi
  char *v4; // rbx
  struct VIDMM_PHYSICAL_ALLOC *v5; // rdx
  char *v6; // rsi
  _QWORD *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (char *)this + 1656;
  v4 = (char *)*((_QWORD *)this + 207);
  while ( v4 != v2 )
  {
    v5 = (struct VIDMM_PHYSICAL_ALLOC *)(v4 - 176);
    v6 = v4;
    v4 = *(char **)v4;
    VIDMM_PHYSICAL_ADAPTER::EvictResources(this, v5, 1u, 0, 0, 0LL);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    result = *(_UNKNOWN ***)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v7 = (_QWORD *)*((_QWORD *)v6 + 1), (char *)*v7 != v6) )
      __fastfail(3u);
    *v7 = result;
    result[1] = v7;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
  }
  return result;
}
