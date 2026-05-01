/*
 * XREFs of ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1800AC204
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18009AC6C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1800AC018 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801958CC (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KBViewInfo::IsAppDefaultView(KBViewInfo *this)
{
  HSTRING v1; // rcx
  const WCHAR *StringRawBuffer; // rax

  v1 = (HSTRING)*((_QWORD *)this + 14);
  if ( !v1 )
    return 1;
  StringRawBuffer = WindowsGetStringRawBuffer(v1, 0LL);
  return CompareStringOrdinal(StringRawBuffer, -1, L"Windows.Internal.ShellExperience.TopLevelApplication", -1, 1) == 2;
}
