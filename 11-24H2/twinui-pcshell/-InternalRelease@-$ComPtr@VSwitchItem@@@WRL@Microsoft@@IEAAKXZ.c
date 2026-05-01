/*
 * XREFs of ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1804BF45C
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x1804BEF68 (--$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Mi.c)
 *     ??1?$ComPtr@VSwitchItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1804BF114 (--1-$ComPtr@VSwitchItem@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BF688 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804BF510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::Release(v1);
  }
  return result;
}
