/*
 * XREFs of MiRemoveLoaderEntry @ 0x140660574
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14040F6A0 (RtlRemoveInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x14040F854 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14040F898 (MmUnlockLoadedModuleListExclusive.c)
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
  RtlAvlRemoveNode(&qword_140E2D640, (__int64)(a1 + 26));
  MmUnlockLoadedModuleListExclusive(v4);
}
