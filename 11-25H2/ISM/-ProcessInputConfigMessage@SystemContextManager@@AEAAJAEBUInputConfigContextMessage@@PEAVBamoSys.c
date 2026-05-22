/*
 * XREFs of ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1800945D0
 * Callers:
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x18000BB70 (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013CB70 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057F60 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180064370 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800643A8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x180064498 (--$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@-$vector@V-$com_ptr_t@VBamoInputSpac.c)
 *     ??$_Reallocate@$0A@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAXAEA_K@Z @ 0x18008B0CC (--$_Reallocate@$0A@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAXA.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800E47BC (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x180139AF4 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemContextManager::ProcessInputConfigMessage(
        SystemContextManager *this,
        const struct InputConfigContextMessage *a2,
        struct BamoSystemContextEndpointProxy *a3)
{
  SystemContextManager *v4; // rdi
  char *v5; // r14
  char *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  char *v10; // r12
  char *v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v14; // rdx
  char *v15; // rax
  void (__fastcall ***v16)(_QWORD); // rbx
  __int64 v17; // rdi
  char *v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  char *v24; // rbx
  __int64 v26; // [rsp+20h] [rbp-58h]
  _QWORD *v27; // [rsp+28h] [rbp-50h] BYREF
  __int128 v28; // [rsp+38h] [rbp-40h] BYREF
  char *v29; // [rsp+48h] [rbp-30h]
  __int128 v30; // [rsp+50h] [rbp-28h] BYREF
  char *v31; // [rsp+60h] [rbp-18h]
  __int64 v33; // [rsp+C8h] [rbp+50h] BYREF
  struct BamoSystemContextEndpointProxy *v34; // [rsp+D0h] [rbp+58h]
  void (__fastcall ***v35)(_QWORD); // [rsp+D8h] [rbp+60h] BYREF

  v34 = a3;
  v4 = this;
  v30 = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  v33 = *(unsigned int *)a2;
  if ( (_DWORD)v33 )
  {
    std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Reallocate<0>(&v30, &v33);
    v5 = v31;
  }
  v28 = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  v33 = *(unsigned int *)a2;
  if ( (_DWORD)v33 )
  {
    std::vector<LampUpdateState>::_Reallocate<0>((__int64)&v28, (unsigned __int64 *)&v33);
    v6 = v29;
  }
  v7 = *(unsigned int *)a2;
  v8 = *((_QWORD *)a2 + 1);
  gsl::details::extent_type<-1>::extent_type<-1>(&v27, v7);
  if ( v27 == (_QWORD *)-1LL || !v8 && v27 )
  {
    _o_terminate(v9);
    JUMPOUT(0x180094898LL);
  }
  v26 = v8 + 24LL * (_QWORD)v27;
  v10 = (char *)*((_QWORD *)&v30 + 1);
  v11 = (char *)*((_QWORD *)&v28 + 1);
  if ( v8 != v26 )
  {
    do
    {
      v12 = operator new(0x58uLL);
      v27 = v12;
      v13 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
      if ( *(int *)(v13 + 8) <= 0 )
        v14 = 0LL;
      else
        v14 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v13 + 16);
      *v12 = &BamoInputSpacePayloadPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
      v12[1] = &BamoInputSpacePayloadPrincipal::`vftable'{for `IInputSpacePayloadPrincipal'};
      Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
        (Microsoft::BamoImpl::BamoPrincipalImpl *)(v12 + 2),
        v14);
      v12[2] = &BamoImpl::BamoInputSpacePayloadPrincipalImpl::`vftable';
      v12[7] = 0LL;
      *((_DWORD *)v12 + 16) = 0;
      v12[9] = 0LL;
      *((_DWORD *)v12 + 20) = 0;
      v35 = (void (__fastcall ***)(_QWORD))v12;
      if ( v10 == v5 )
      {
        v15 = std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<BamoInputSpacePayloadPrincipal *>(
                (__int64 *)&v30,
                (__int64)v10,
                &v35);
        v5 = v31;
        v10 = (char *)*((_QWORD *)&v30 + 1);
      }
      else
      {
        wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
          v10,
          (void (__fastcall ***)(_QWORD))v12);
        v15 = v10;
        v10 += 8;
        *((_QWORD *)&v30 + 1) = v10;
      }
      wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
        &v33,
        *(void (__fastcall ****)(_QWORD))v15);
      v16 = (void (__fastcall ***)(_QWORD))v33;
      v17 = v33 + 8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v33 + 8) + 32LL))(v33 + 8, v8);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 48LL))(
        v17,
        *(_QWORD *)(v8 + 16),
        *(unsigned int *)(v8 + 12));
      v35 = v16;
      if ( v11 == v6 )
      {
        std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(&v28, v11, &v35);
        v6 = v29;
        v11 = (char *)*((_QWORD *)&v28 + 1);
      }
      else
      {
        *(_QWORD *)v11 = v16;
        v11 += 8;
        *((_QWORD *)&v28 + 1) = v11;
      }
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v33);
      v8 += 24LL;
    }
    while ( v8 != v26 );
    v4 = this;
  }
  v18 = (char *)v28;
  v19 = v28;
  if ( (char *)v28 == v11 )
    v19 = 0LL;
  v20 = (__int64)&v11[-v28] >> 3;
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*((_QWORD *)v34 + 1) + 24LL))(
      (__int64)v34 + 8,
      v19,
      (unsigned int)v20);
  }
  else
  {
    v21 = *((_QWORD *)v4 + 8);
    v22 = *((_QWORD *)v4 + 7);
    if ( v22 != v21 )
    {
      v23 = v21;
      do
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v22 + 8LL) + 24LL))(
          *(_QWORD *)v22 + 8LL,
          v19,
          (unsigned int)v20);
        v22 += 8LL;
      }
      while ( v22 != v23 );
      v18 = (char *)v28;
    }
  }
  if ( v18 )
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(8 * ((v6 - v18) >> 3)));
  v24 = (char *)v30;
  if ( (_QWORD)v30 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      (__int64 *)v30,
      (__int64 *)v10);
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)((v5 - v24) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
