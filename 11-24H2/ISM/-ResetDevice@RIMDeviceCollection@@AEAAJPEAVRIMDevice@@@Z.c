/*
 * XREFs of ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180086A38
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180086850 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAA_NXZ @ 0x1800D4340 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@d_ea_1800D4340.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMDeviceCollection::ResetDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  __int64 v2; // rbx
  const char *v4; // r9
  bool v5; // zf
  int v6; // edi
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)a2 + 4);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ISMResetCrashFix>::GetImpl'::`2'::impl) )
  {
    if ( *(_DWORD *)(v2 + 8) < 0x60Cu )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4A0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
        v4);
    v5 = (*(_DWORD *)(v2 + 4) & 0xFFFFFEFF) == 0;
    *(_BYTE *)(v2 + 38) = 1;
    if ( !v5 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), v2);
      if ( v6 < 0 )
      {
        v7 = 1194LL;
        goto LABEL_11;
      }
    }
    goto LABEL_12;
  }
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) < 0x60Cu )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x48C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
        v4);
    v5 = (*(_DWORD *)(v2 + 4) & 0xFFFFFEFF) == 0;
    *(_BYTE *)(v2 + 38) = 1;
    if ( !v5 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), v2);
      if ( v6 < 0 )
      {
        v7 = 1174LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)(unsigned int)v6,
          v9);
        return (unsigned int)v6;
      }
    }
LABEL_12:
    *(_BYTE *)(v2 + 38) = 0;
  }
  return 0LL;
}
