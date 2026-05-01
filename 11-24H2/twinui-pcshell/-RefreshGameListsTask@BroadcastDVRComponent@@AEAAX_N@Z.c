/*
 * XREFs of ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803189B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___::Run @ 0x180318FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18005B990 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803162A4 (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180317BB0 (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::RefreshGameListsTask(BroadcastDVRComponent *this, unsigned __int8 a2)
{
  _QWORD **v3; // rbx
  __int64 v4; // rcx
  unsigned __int8 v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  int v11; // edi
  HWND v12; // rbx
  int v13; // r9d
  char v14; // r8
  _QWORD **v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v17; // [rsp+50h] [rbp-18h]
  void *Src; // [rsp+A0h] [rbp+38h] BYREF
  unsigned __int8 v19; // [rsp+A8h] [rbp+40h] BYREF
  HWND v20; // [rsp+B0h] [rbp+48h] BYREF
  void *v21; // [rsp+B8h] [rbp+50h] BYREF

  v19 = a2;
  v3 = (_QWORD **)*((_QWORD *)this + 38);
  v15 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v16, (_QWORD *)this + 39);
  v5 = 0;
  v6 = v16;
  if ( v16 )
    v5 = *(_BYTE *)(v16 + 16);
  GameDVRTraceProvider::BroadcastDVRComponent_RefreshGameListsTask(v4, v5);
  v10 = (_QWORD *)**((_QWORD **)this + 33);
  Src = v10;
  while ( v10 != *((_QWORD **)this + 33) )
  {
    *(_DWORD *)(v10[5] + 56LL) |= 1u;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&Src,
      v7,
      v8,
      v9);
    v10 = Src;
  }
  if ( v3 )
  {
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v11 = *(unsigned __int8 *)(v6 + 16);
    Src = 0LL;
    BroadcastDVRComponent::EvaluateIfViewIsGame((__int64)this, v3, v6 + 16, (char *)&v19, &v20, &v21, &Src);
    *(_DWORD *)(v6 + 56) ^= (*(_DWORD *)(v6 + 56) ^ (4 * v19)) & 4;
    if ( (*(_BYTE *)(v6 + 16) == 0) == v11 )
    {
      v12 = v20;
      *(_QWORD *)v6 = v20;
      *(_QWORD *)(v6 + 8) = v21;
      *(_DWORD *)(v6 + 56) &= ~1u;
      if ( Src )
        std::wstring::operator=((void **)(v6 + 72), Src);
      if ( *(_BYTE *)(v6 + 16) )
      {
        v13 = 5;
        v14 = 1;
      }
      else
      {
        v13 = 0;
        v14 = 0;
      }
      BroadcastDVRComponent::OnAddRemoveGameTask((__int64)this, v12, v14, v13, 0);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
  }
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
}
