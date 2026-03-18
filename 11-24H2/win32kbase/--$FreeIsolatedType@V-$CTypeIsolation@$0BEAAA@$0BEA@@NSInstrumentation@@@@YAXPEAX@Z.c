/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400243B0
 * Callers:
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140023A90 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140068670 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C0A70 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003FF38 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL);
  v3 = *(_QWORD *)(result + 32);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<81920,320>::Free(v3, a1);
  return result;
}
