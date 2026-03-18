/*
 * XREFs of ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140024360
 * Callers:
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140023A90 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PATH_CORE@@QEAA@XZ @ 0x140024340 (--1PATH_CORE@@QEAA@XZ.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x140124C50 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?reinit@PATH_CORE@@QEAAXXZ @ 0x14019DC94 (-reinit@PATH_CORE@@QEAAXXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C0A70 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 * Callees:
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x140025200 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
 */

void __fastcall PATH_CORE::vFreeBlocks(PATH_CORE *this)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rdi

  v2 = *(_DWORD **)this;
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD **)v2;
      if ( v2[4] == 4032 )
        freepathalloc(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
