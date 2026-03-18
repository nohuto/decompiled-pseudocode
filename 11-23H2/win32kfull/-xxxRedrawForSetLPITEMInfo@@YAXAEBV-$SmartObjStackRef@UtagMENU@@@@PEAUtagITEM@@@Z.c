/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E5A80
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C00E3ECC (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00E4DD0 (xxxInsertMenuItem.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00214C8 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C00E5540 (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C00E5C20 (MNGetPopupFromMenu.c)
 *     xxxMNUpdateShownMenu @ 0x1C0230C20 (xxxMNUpdateShownMenu.c)
 */

_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  _QWORD *result; // rax
  int ClassStyle; // eax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v18 = gSmartObjNullRef;
  v19 = *(_QWORD *)(v4 + 1512);
  *(_QWORD *)(v4 + 1512) = &v19;
  v6 = a1[2];
  if ( !v6 )
    v6 = (__int64 *)**a1;
  v7 = MNGetPopupFromMenu(v6, 0LL);
  if ( v7 != *(_QWORD *)v18 )
  {
    if ( v18 != gSmartObjNullRef && !--*(_DWORD *)(v18 + 8) )
    {
      if ( *(_BYTE *)(v18 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v18);
    }
    if ( v7 )
    {
      v18 = *(_QWORD *)(v7 + 88);
      ++*(_DWORD *)(v18 + 8);
    }
    else
    {
      v18 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v18 )
  {
    xxxMNUpdateShownMenu(&v18, a2, 1LL);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 )
      return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v18);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0
    && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536
    && *(_QWORD *)(**a1 + 80)
    && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80)) )
  {
    DirtyVisRgnTrackers(*(_QWORD *)(**a1 + 80));
    ClassStyle = DwmGetClassStyle(*(_QWORD *)(**a1 + 80));
    v12 = (__int64)*a1;
    v13 = ClassStyle;
    v14 = **a1;
    if ( *(_QWORD *)(v14 + 80) )
    {
      v12 = **a1;
      v15 = **(_QWORD **)(v12 + 80);
    }
    else
    {
      v15 = 0LL;
    }
    v16 = (void *)ReferenceDwmApiPort(v12, v14);
    DwmAsyncChildStyleChange(v16, v15, -26, v13);
  }
  v8 = 0LL;
  v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 )
    v8 = *v9;
  if ( v18 != gSmartObjNullRef && !--*(_DWORD *)(v18 + 8) )
  {
    if ( *(_BYTE *)(v18 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v18);
  }
  result = *(_QWORD **)(v8 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v8 + 1512) = result;
  }
  return result;
}
