/*
 * XREFs of ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BD720
 * Callers:
 *     xxxMNButtonDown @ 0x14009BCCC (xxxMNButtonDown.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNDoubleClick @ 0x1402BDEDC (xxxMNDoubleClick.c)
 * Callees:
 *     _SetTimer @ 0x14005F768 (_SetTimer.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r8d

  v4 = a2;
  if ( a2 != -3 && a2 != -4 )
    return 0LL;
  if ( (unsigned int)xxxMNSetTop(a1) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928) + 4976LL);
    if ( !a3 )
      v8 >>= 2;
    SetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, v8, 0, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, 0, 1, 0LL);
  }
  return 1LL;
}
