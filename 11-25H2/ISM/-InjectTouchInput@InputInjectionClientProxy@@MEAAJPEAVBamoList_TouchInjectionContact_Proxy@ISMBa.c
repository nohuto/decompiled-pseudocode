/*
 * XREFs of ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180195D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x180023084 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800DF318 (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800DF454 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x180137EF4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@AEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x18015BA04 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InputInjectionClientProxy::InjectTouchInput(
        InputInjectionClientProxy *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *a2)
{
  InjectionRawInputProvider *v4; // rbx
  char *v5; // r13
  __int64 v6; // r12
  unsigned int v7; // r15d
  char *v8; // rsi
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  const char *v10; // r9
  _OWORD *v11; // r8
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  char *v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  InjectionRawInputProvider *v16; // [rsp+80h] [rbp+40h]
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *v17; // [rsp+90h] [rbp+50h] BYREF

  v4 = InjectionRawInputProvider::s_rawInputProvider;
  v16 = InjectionRawInputProvider::s_rawInputProvider;
  if ( InjectionRawInputProvider::s_rawInputProvider )
  {
    _InterlockedIncrement((volatile signed __int32 *)InjectionRawInputProvider::s_rawInputProvider + 4);
    v4 = v16;
  }
  if ( !*((_BYTE *)this + 56) )
  {
    if ( (int)InjectionRawInputProvider::OnAttachDevice(v4, this) < 0 )
      goto LABEL_18;
    *((_BYTE *)this + 56) = 1;
  }
  v17 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *))a2)(a2);
  v13 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v6 = (__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 4;
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    v8 = (char *)*((_QWORD *)&v13 + 1);
    do
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(a2);
      Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(Connection);
      if ( v7 >= (unsigned __int64)((__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 4) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x5C,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          v10);
      v11 = (_OWORD *)(*((_QWORD *)a2 + 6) + 16LL * v7);
      if ( v8 == v5 )
      {
        std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>((__int64)&v13, v8, v11);
        v5 = v14;
        v8 = (char *)*((_QWORD *)&v13 + 1);
      }
      else
      {
        *(_OWORD *)v8 = *v11;
        v8 += 16;
        *((_QWORD *)&v13 + 1) = v8;
      }
      ++v7;
    }
    while ( v7 < (unsigned int)v6 );
  }
  InjectionRawInputProvider::OnInputReport((__int64)v4, (__int64)this, &v13);
  if ( (_QWORD)v13 )
    std::_Deallocate<16,0>(
      (char *)v13,
      (const struct std::nothrow_t *)((unsigned __int64)&v14[-v13] & 0xFFFFFFFFFFFFFFF0uLL));
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v17);
LABEL_18:
  if ( v4 )
    InputContext::Release((InjectionRawInputProvider *)((char *)v4 + 8));
  return 0LL;
}
