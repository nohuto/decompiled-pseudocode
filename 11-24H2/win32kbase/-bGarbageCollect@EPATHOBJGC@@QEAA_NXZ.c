/*
 * XREFs of ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C0A70
 * Callers:
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE0E8 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140024360 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400243B0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

char __fastcall EPATHOBJGC::bGarbageCollect(EPATHOBJGC *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 88) & 1) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 2, 7, 0LL) )
    return 0;
  PATH_CORE::vFreeBlocks((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  return 1;
}
