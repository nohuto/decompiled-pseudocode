/*
 * XREFs of ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BF688
 * Callers:
 *     ?CreateSwitchItem@SwitchItemFactory@@UEAAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B2780 (-CreateSwitchItem@SwitchItemFactory@@UEAAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804BEEBC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@.c)
 *     ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x1804BEF68 (--$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1804BF45C (-InternalRelease@-$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItem_CreateInstance(__int64 a1, unsigned int a2, const struct _GUID *a3, _QWORD *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  SwitchItem *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  v11 = a1;
  *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease((__int64 *)&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<SwitchItem,SwitchItem,IApplicationView * &,enum GroupingType &>(
         &v13,
         &v11,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 197LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>>(
         (__int64)v13,
         a3,
         a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 198LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease((__int64 *)&v13);
  return v7;
}
