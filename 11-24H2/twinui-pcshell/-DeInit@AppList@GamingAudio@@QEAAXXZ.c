/*
 * XREFs of ?DeInit@AppList@GamingAudio@@QEAAXXZ @ 0x180366A78
 * Callers:
 *     ?remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1803610A0 (-remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x180343024 (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVSessionI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingAudio::AppList::DeInit(GamingAudio::AppList *this)
{
  __int64 *j; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  j = (__int64 *)**((_QWORD **)this + 11);
  while ( !*((_BYTE *)j + 25) )
  {
    v3 = j[8];
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 56LL))(
             v3,
             ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BF,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(j + 8);
    }
    v5 = (__int64 **)j[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v7 = *v5;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  v8 = *((_QWORD *)this + 20);
  v9 = *((_QWORD *)this + 21);
  if ( v8 != v9 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>>(
      v8,
      v9);
    *((_QWORD *)this + 21) = *((_QWORD *)this + 20);
  }
}
