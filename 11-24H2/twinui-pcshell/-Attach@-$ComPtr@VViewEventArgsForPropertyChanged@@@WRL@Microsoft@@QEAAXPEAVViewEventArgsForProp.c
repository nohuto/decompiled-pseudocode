/*
 * XREFs of ?Attach@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForPropertyChanged@@@Z @ 0x1800191D8
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@Z @ 0x180415DA4 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEBQEBG@Z @ 0x180415E94 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v4);
  *a1 = a2;
  return result;
}
