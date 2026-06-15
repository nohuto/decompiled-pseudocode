/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180022D48
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180022430 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800688C0 (-InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??$_Emplace_back@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$_Uninitialized_backout_al@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800185DC (--$_Emplace_back@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@-$_U.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ??$construct@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x1800C08A8 (--$construct@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$_Default_.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h]
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v30 = v7 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  v29 = v8;
  v28 = v8;
  v11 = std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v9,
          &v28);
  v12 = v11 + 8 * v6;
  v13 = (__int64 *)(v12 + 8);
  std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>,wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
    v14,
    v12,
    a3);
  v28 = v12;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)a1;
  v25 = v11;
  v17 = (__int64 *)v11;
  v27 = a1;
  v26 = (__int64 *)v11;
  if ( v4 == v15 )
  {
    if ( v16 != v15 )
    {
      do
      {
        std::_Uninitialized_backout_al<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::_Emplace_back<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          (__int64)&v25,
          v16);
        v16 = v23 + 8;
      }
      while ( v16 != v24 );
      v17 = v26;
    }
    v18 = v17;
  }
  else
  {
    if ( v16 != v4 )
    {
      do
      {
        std::_Uninitialized_backout_al<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::_Emplace_back<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          (__int64)&v25,
          v16);
        v16 = v20 + 8;
      }
      while ( v16 != v4 );
      v17 = v26;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v17, v17);
    v28 = v11;
    v21 = *(_QWORD *)(a1 + 8);
    v25 = v12 + 8;
    v26 = (__int64 *)(v12 + 8);
    v27 = a1;
    if ( v4 != v21 )
    {
      do
      {
        std::_Uninitialized_backout_al<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::_Emplace_back<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          (__int64)&v25,
          v4);
        v4 += 8LL;
      }
      while ( v4 != v22 );
      v13 = v26;
    }
    v18 = v13;
    v17 = v13;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v17, v18);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v11 + 8 * v30;
  *(_QWORD *)(a1 + 16) = v11 + 8 * v8;
  return v12;
}
