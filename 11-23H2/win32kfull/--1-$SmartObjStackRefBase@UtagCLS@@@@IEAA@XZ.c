/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C00B4B74
 * Callers:
 *     GetCPD @ 0x1C000ECE4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013354 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C003D2A4 (xxxGetWindowSmIcon.c)
 *     GetClassIcoCur @ 0x1C0087EBC (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C008C5A8 (xxxSetClassLongPtr.c)
 *     DereferenceClass @ 0x1C0097DA0 (DereferenceClass.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 *     _HasCaptionIcon @ 0x1C00E62B8 (_HasCaptionIcon.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00F442C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00F4678 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A390 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _RegisterClassEx @ 0x1C013A408 (_RegisterClassEx.c)
 *     _SetClassWord @ 0x1C01BDAB0 (_SetClassWord.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00F4CA8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(a1);
  result = *(_QWORD **)(v2 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v2 + 1512) = result;
  }
  return result;
}
