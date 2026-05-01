/*
 * XREFs of ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A4430
 * Callers:
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3668 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

char **__fastcall CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(__int64 a1, char **a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  char **v11; // rcx
  wchar_t *v12; // rdx

  v4 = a3 - 1;
  if ( !v4 )
  {
    v12 = L"PenButton";
    goto LABEL_18;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v12 = L"QuickActions";
    goto LABEL_18;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v12 = L"PrintScreen";
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v12 = L"HotKey";
    goto LABEL_18;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v12 = L"ScreenSketch";
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v12 = L"SearchBox";
    goto LABEL_18;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v12 = L"ScreenRecorderHotKey";
LABEL_18:
    v11 = a2;
    goto LABEL_19;
  }
  v11 = a2;
  if ( v10 == 1 )
    v12 = L"TextExtractorHotKey";
  else
    v12 = L"ExperienceManager";
LABEL_19:
  std::wstring::wstring(v11, v12);
  return a2;
}
