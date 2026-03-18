/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C007E6A0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C026D3A0 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+4Ch] [rbp+14h]

  v11 = HIDWORD(a2);
  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2)) )
  {
    v8 = (void *)ReferenceDwmApiPort(v7, v6);
    DwmAsyncTopLevelMouseLeave(v8);
  }
  v4 = *(_DWORD **)(a1 + 40);
  if ( (int)a2 < v4[26] || (int)a2 >= v4[28] || v11 < v4[27] || v11 >= v4[29] )
  {
    v10 = a1;
    v9 = &gspwndCursorNC;
    HMAssignmentLock(&v9, 1LL);
  }
  else
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  v10 = a1;
  v9 = &gspwndCursor;
  return HMAssignmentLock(&v9, 1LL);
}
