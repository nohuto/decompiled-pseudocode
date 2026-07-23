/*
 * XREFs of MiRemoveLoaderEntry @ 0x14066D284
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402EE530 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1402EE574 (MmUnlockLoadedModuleListExclusive.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1402EF4F4 (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall MiRemoveLoaderEntry(_QWORD *a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  unsigned __int8 v4; // di
  _QWORD *v5; // rcx

  if ( (MiFlags & 0x40000) == 0 )
    RtlRemoveInvertedFunctionTable(a1[6]);
  v2 = MmLockLoadedModuleListExclusive();
  v3 = *a1;
  v4 = v2;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v3;
  *(_QWORD *)(v3 + 8) = v5;
  RtlAvlRemoveNode(&qword_140E2D9C0, (__int64)(a1 + 26));
  MmUnlockLoadedModuleListExclusive(v4);
}
