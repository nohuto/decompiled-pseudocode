/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x140090F80
 * Callers:
 *     ?TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER@@QEAAX_K@Z @ 0x140091008 (-TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER@@QEAAX_K@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x140110C84 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 */

void __fastcall VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(VIDMM_PHYSICAL_ADAPTER **this, unsigned __int64 *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rcx

  v3 = this + 27;
  while ( 1 )
  {
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    VIDMM_PHYSICAL_ADAPTER::EvictResources(this[4], (struct VIDMM_PHYSICAL_ALLOC *)*(v5 - 31), 1u, 0, 0, 0LL);
    v6 = *(_QWORD *)(*(v5 - 31) + 16LL);
    if ( v6 >= *a2 )
    {
      *a2 = 0LL;
      return;
    }
    *a2 -= v6;
  }
}
