/*
 * XREFs of _anonymous_namespace_::IsAnimationEnabled @ 0x180513030
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::IsAnimationEnabled()
{
  char v0; // bl
  __int64 pvParam; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    return HIDWORD(pvParam) != 0;
  return v0;
}
