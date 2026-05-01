/*
 * XREFs of ??4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z @ 0x18004FD3C
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18004ED50 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047E800 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall ViewOptions::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi

  v2 = (_QWORD *)(a2 + 32);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v3 = (_QWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 32 )
  {
    std::vector<Geometry::CRect>::_Tidy(a1 + 32);
    *v3 = *v2;
    v3[1] = v2[1];
    v3[2] = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  return a1;
}
