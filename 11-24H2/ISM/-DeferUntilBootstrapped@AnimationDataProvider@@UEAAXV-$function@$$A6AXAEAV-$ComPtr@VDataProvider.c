/*
 * XREFs of ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180102710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000AB8C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x180100588 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ??$construct@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@1@QEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@1@AEBV31@@Z @ 0x18010076C (--$construct@V-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@st.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x180100960 (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::DeferUntilBootstrapped(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx

  if ( a1[4] )
  {
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()(a2);
  }
  else
  {
    v5 = a1 + 5;
    v6 = a1[6];
    if ( v6 == a1[7] )
    {
      std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        v5,
        v6,
        a2);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)>>>::construct<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)>,std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)> const &>(
        (__int64)v5,
        v6,
        a2);
      a1[6] += 64LL;
    }
  }
  return std::_Func_class<void,>::~_Func_class<void,>(a2, v4);
}
