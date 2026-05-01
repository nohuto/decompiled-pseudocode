/*
 * XREFs of ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1801D94D4
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18007E618 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

char **__fastcall KeyboardHosting::TabTipAdapter::GetModalityString(__int64 a1, char **a2, int a3)
{
  int v4; // r8d
  wchar_t *v5; // rdx
  char **v6; // rcx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  if ( !a3 )
  {
    v5 = (wchar_t *)L"None";
    goto LABEL_4;
  }
  v4 = a3 - 1;
  if ( !v4 )
  {
    v5 = L"Mouse";
LABEL_4:
    v6 = a2;
    goto LABEL_5;
  }
  v8 = v4 - 1;
  if ( !v8 )
  {
    v5 = L"Touch";
    goto LABEL_4;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    v5 = L"Keyboard";
    goto LABEL_4;
  }
  v10 = v9 - 12;
  if ( !v10 )
  {
    v5 = L"Pen";
    goto LABEL_4;
  }
  v6 = a2;
  if ( v10 == 496 )
    v5 = L"Gaze";
  else
    v5 = (wchar_t *)L"Unknown";
LABEL_5:
  std::wstring::wstring(v6, v5);
  return a2;
}
