/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180087800
 * Callers:
 *     <none>
 * Callees:
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1800375DC (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008EC94 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800E316C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::OnDeviceNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  const wchar_t *v7; // rsi
  PnpDevice *v8; // rdi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  unsigned int v14; // ebx
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // rdi
  unsigned int v18; // eax
  HSTRING string; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-38h]

  if ( !a2 || *(_QWORD *)a2 != a1 )
    return 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a3 )
  {
    v14 = 3;
    goto LABEL_27;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    v14 = 4;
LABEL_27:
    v7 = (const wchar_t *)(a4 + 24);
    goto LABEL_28;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    {
      v14 = 5;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_19:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    {
      v14 = 6;
      goto LABEL_18;
    }
    goto LABEL_21;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = 2;
      v15 = v13 - 2;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            return 0LL;
        }
        else
        {
          v14 = 1;
        }
      }
      else
      {
        v14 = 0;
      }
      v7 = (const wchar_t *)(a4 + 8);
      goto LABEL_28;
    }
    goto LABEL_23;
  }
LABEL_21:
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
  {
LABEL_23:
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
      return 0LL;
    v14 = 8;
    goto LABEL_18;
  }
  v14 = 7;
LABEL_18:
  v8 = *(PnpDevice **)(a2 + 16);
LABEL_28:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl)
    && v8 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( (int)PnpDevice::GetInterfacePath(v8, &string) >= 0 )
    {
      try
      {
        (*(void (__fastcall **)(_QWORD, HSTRING, _QWORD))(a2 + 8))(v14, string, *((_QWORD *)v8 + 18));
      }
      catch ( ... )
      {
      }
    }
    WindowsDeleteString(string);
  }
  else
  {
    v17 = (a4 + a5 - (unsigned __int64)v7) >> 1;
    if ( v17 <= 0xFFFFFFFF )
    {
      v18 = wcsnlen(v7, (a4 + a5 - (unsigned __int64)v7) >> 1);
      if ( v18 )
      {
        if ( v18 < v17 )
        {
          Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v7, v18);
          try
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 8))(v14, v22, *(_QWORD *)(a2 + 16));
          }
          catch ( ... )
          {
          }
        }
      }
    }
  }
  return 0LL;
}
