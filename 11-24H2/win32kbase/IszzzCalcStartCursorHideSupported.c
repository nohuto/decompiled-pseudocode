/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x14011FE0C
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IszzzCalcStartCursorHideSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1072LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
