/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0
 * Callers:
 *     _GetClassInfoEx @ 0x140046494 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxSetClassLongPtr @ 0x14007D1D8 (xxxSetClassLongPtr.c)
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _RegisterClassEx @ 0x1400B4534 (_RegisterClassEx.c)
 *     GetCPD @ 0x1400B4E48 (GetCPD.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1400B50EC (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     _SetClassWord @ 0x140285DB0 (_SetClassWord.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall SmartObjStackRefBase<tagCLS>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  if ( a2 != *(_QWORD *)*a1 )
  {
    v4 = *a1;
    v5 = gSmartObjNullRef;
    if ( v4 != gSmartObjNullRef )
    {
      if ( !--*(_DWORD *)(*a1 + 8) && *(_BYTE *)(*a1 + 12) )
      {
        v7 = *a1;
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v7);
      }
      v5 = gSmartObjNullRef;
    }
    if ( a2 )
    {
      *a1 = *(_QWORD *)(a2 + 128);
      ++*(_DWORD *)(*a1 + 8);
    }
    else
    {
      *a1 = v5;
    }
  }
  return a1;
}
