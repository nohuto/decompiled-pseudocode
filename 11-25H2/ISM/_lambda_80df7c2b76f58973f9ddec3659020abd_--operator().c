/*
 * XREFs of _lambda_80df7c2b76f58973f9ddec3659020abd_::operator() @ 0x18007DFC8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_80df7c2b76f58973f9ddec3659020abd__void_GestureHandler___enum_GestureCompletedReason_::_Do_call @ 0x180141C80 (std--_Func_impl_no_alloc__lambda_80df7c2b76f58973f9ddec3659020abd__void_GestureHand_ea_180141C80.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$_Erase@I@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x1800F423C (--$_Erase@I@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@IU-$.c)
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x18013F2F8 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_K.c)
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180140298 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 */

void __fastcall lambda_80df7c2b76f58973f9ddec3659020abd_::operator()(__int64 a1, __int64 a2, int a3)
{
  int v5; // r8d
  GestureServices *v6; // rsi
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF

  if ( a3 && (v5 = a3 - 1) != 0 )
  {
    if ( v5 == 1 )
    {
      v8 = *(_OWORD *)(a2 + 256);
      if ( (_QWORD)v8 )
      {
        v6 = *(GestureServices **)a1;
        std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::_Erase<unsigned __int64>(
          *(_QWORD *)a1 + 264LL,
          &v8);
        if ( *(_QWORD *)(a2 + 104) )
          GestureServices::GetDCompStatisticsAndLogTelemetry(
            v6,
            *(struct tagPOINT *)(a1 + 8),
            *(_QWORD *)(a1 + 16),
            (struct GestureHandler *)a2);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 136);
    if ( v7 )
      std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::_Erase<unsigned int>(
        *(_QWORD *)a1 + 200LL,
        &v7);
  }
}
