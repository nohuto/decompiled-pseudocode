/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30
 * Callers:
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14007C108 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     GetClassIcoCur @ 0x14007C184 (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x14007D1D8 (xxxSetClassLongPtr.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _HasCaptionIcon @ 0x1400B43E8 (_HasCaptionIcon.c)
 *     _RegisterClassEx @ 0x1400B4534 (_RegisterClassEx.c)
 *     DereferenceClass @ 0x1400B4660 (DereferenceClass.c)
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1400B4AAC (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B4D18 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1400B4E48 (GetCPD.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1400B50EC (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 *     _SetClassWord @ 0x140285DB0 (_SetClassWord.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(__int64 *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdi
  _QWORD *result; // rax
  __int64 v6; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8) )
  {
    if ( *(_BYTE *)(*a1 + 12) )
    {
      v6 = *a1;
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v6);
    }
  }
  result = *(_QWORD **)(v4 + 1672);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v4 + 1672) = result;
  }
  return result;
}
