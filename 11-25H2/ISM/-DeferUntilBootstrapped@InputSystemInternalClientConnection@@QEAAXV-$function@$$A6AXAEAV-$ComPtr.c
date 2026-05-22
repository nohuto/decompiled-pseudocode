/*
 * XREFs of ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18012BC0C
 * Callers:
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18008D698 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800C9A10 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x180024D1C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180024E94 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800BBD08 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x1800FE8B8 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ??$construct@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@1@QEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@1@AEBV31@@Z @ 0x1800FEA9C (--$construct@V-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputSystemInternalClientConnection::DeferUntilBootstrapped(
        struct Microsoft::Bamo::BaseBamoConnection *a1,
        Microsoft::BamoImpl::BamoImplObject *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  Microsoft::BamoImpl::BamoImplObject *v8[3]; // [rsp+20h] [rbp-28h] BYREF

  v8[2] = a2;
  if ( *((_QWORD *)a1 + 31) )
  {
    Microsoft::Bamo::Lock::Lock(v8, a1);
    std::_Func_class<void,>::operator()((__int64)a2);
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v8);
  }
  else
  {
    v5 = (__int64 *)((char *)a1 + 256);
    v6 = *((_QWORD *)a1 + 33);
    if ( v6 == *((_QWORD *)a1 + 34) )
    {
      std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        v5,
        v6,
        (__int64)a2);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)>>>::construct<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)>,std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)> const &>(
        (__int64)v5,
        v6,
        (__int64)a2);
      *((_QWORD *)a1 + 33) += 64LL;
    }
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)a2, v4);
}
