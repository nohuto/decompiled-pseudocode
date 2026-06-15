/*
 * XREFs of ?GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x140056F4C
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1400469D0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1400268A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004BC0C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x14004D104 (-GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x1400747AC (-GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14007485C (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetEffectPackFxPropertyStore(struct _GUID *a1, struct IPropertyStore **a2)
{
  int EffectPackDevNodeId; // eax
  unsigned int v5; // ebx
  int EffectPackDevNodeRegistryRoot; // eax
  __int64 v7; // rdx
  struct _GUID v9; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  HKEY phkDevice; // [rsp+58h] [rbp+28h] BYREF

  *a2 = 0LL;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v9 = *a1;
  EffectPackDevNodeId = GetEffectPackDevNodeId(&v9, (const wchar_t **)&pv);
  v5 = EffectPackDevNodeId;
  if ( EffectPackDevNodeId >= 0 )
  {
    phkDevice = 0LL;
    EffectPackDevNodeRegistryRoot = GetEffectPackDevNodeRegistryRoot((DEVINSTID_W)pv, &phkDevice);
    v5 = EffectPackDevNodeRegistryRoot;
    if ( EffectPackDevNodeRegistryRoot >= 0 )
    {
      v9 = *a1;
      EffectPackDevNodeRegistryRoot = GetEffectPackFxPropertyStore(phkDevice, &v9, a2);
      v5 = EffectPackDevNodeRegistryRoot;
      if ( EffectPackDevNodeRegistryRoot >= 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v7 = 102LL;
    }
    else
    {
      v7 = 100LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)(unsigned int)EffectPackDevNodeRegistryRoot);
LABEL_10:
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkDevice);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
    (const char *)(unsigned int)EffectPackDevNodeId);
  if ( pv )
    CoTaskMemFree(pv);
  return v5;
}
