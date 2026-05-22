/*
 * XREFs of ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z @ 0x1800E3E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B4E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009A258 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@ULampArrayClientListEntry@LampArrayRawInputProvider@@U?$default_delete@ULampArrayClientListEntry@LampArrayRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800E2F70 (--1-$unique_ptr@ULampArrayClientListEntry@LampArrayRawInputProvider@@U-$default_delete@ULampArra.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800E6174 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcClientConnection(
        struct ISIPCServer *a1,
        const struct SIPC_CLIENT_INFO *a2,
        RTL_SRWLOCK *a3)
{
  char *v3; // rsi
  char *i; // rax
  RTL_SRWLOCK *v8; // rax
  unsigned int v9; // edx
  RTL_SRWLOCK *v10; // rdi
  struct LampArrayEndpoint *v11; // r15
  __int64 v12; // rcx
  __int64 Ptr_low; // rdx
  char **v14; // rax
  RTL_SRWLOCK *v15; // rdi
  LampArrayDevice *j; // rbx
  struct LampArrayDevice *k; // rbx
  RTL_SRWLOCK *v18; // [rsp+70h] [rbp+18h] BYREF

  v3 = (char *)&a3[12];
  for ( i = (char *)a3[12].Ptr; i != v3; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 6) == *((_DWORD *)a2 + 8) )
      return;
  }
  v8 = (RTL_SRWLOCK *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( !v8 )
    goto LABEL_16;
  v8->Ptr = 0LL;
  v11 = (struct LampArrayEndpoint *)&v8[2];
  v8[1].Ptr = 0LL;
  v8[3].Ptr = 0LL;
  v8[2].Ptr = 0LL;
  v12 = *(_QWORD *)a1;
  Ptr_low = LODWORD(a3[11].Ptr);
  v18 = v8;
  if ( (*(int (__fastcall **)(struct ISIPCServer *, __int64, void (__fastcall *)(BamoImpl::BamoMPCConstantManagerClientProxyImpl *, struct Microsoft::BamoImpl::BamoProxyImpl *), void (__fastcall *)(__int64, int, __int64), RTL_SRWLOCK *, RTL_SRWLOCK *))(v12 + 24))(
         a1,
         Ptr_low,
         BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp,
         LampArrayRawInputProvider::OnSipcEndpointStatus,
         a3,
         v8 + 2) >= 0 )
  {
    LODWORD(v10[3].Ptr) = *((_DWORD *)a2 + 8);
    BYTE4(v10[3].Ptr) = *((_BYTE *)a2 + 48);
    AcquireSRWLockExclusive(a3 + 18);
    v14 = (char **)*((_QWORD *)v3 + 1);
    v18 = a3 + 18;
    if ( *v14 != v3 )
      __fastfail(3u);
    v10->Ptr = v3;
    v10[1].Ptr = v14;
    *v14 = (char *)v10;
    ++*((_DWORD *)v3 + 4);
    *((_QWORD *)v3 + 1) = v10;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
    v15 = a3 + 9;
    for ( j = (LampArrayDevice *)a3[9].Ptr; j != (LampArrayDevice *)v15; j = *(LampArrayDevice **)j )
      LampArrayDevice::AddViewClient(*((LampArrayDevice **)j + 2), v11);
    if ( *((_DWORD *)a2 + 8) == LODWORD(a3[8].Ptr) )
    {
      for ( k = (struct LampArrayDevice *)v15->Ptr; k != (struct LampArrayDevice *)v15; k = *(struct LampArrayDevice **)k )
        LampArrayRawInputProvider::SetActiveViewClient(&a3->Ptr, *((struct LampArrayDevice **)k + 2), v11);
    }
LABEL_16:
    v18 = 0LL;
  }
  std::unique_ptr<LampArrayRawInputProvider::LampArrayClientListEntry>::~unique_ptr<LampArrayRawInputProvider::LampArrayClientListEntry>(
    (LampArrayRawInputProvider::LampArrayClientListEntry **)&v18,
    v9);
}
