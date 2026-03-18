/*
 * XREFs of ?reinit@PATH_CORE@@QEAAXXZ @ 0x14019DC94
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14006A178 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1401C0AD4 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140024360 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall PATH_CORE::reinit(PATH_CORE *this)
{
  PATH_CORE::vFreeBlocks(this);
  *((_DWORD *)this + 12) = 3;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
