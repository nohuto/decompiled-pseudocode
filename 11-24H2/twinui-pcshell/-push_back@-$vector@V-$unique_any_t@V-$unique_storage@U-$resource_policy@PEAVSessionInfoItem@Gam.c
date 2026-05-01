/*
 * XREFs of ?push_back@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180368838
 * Callers:
 *     ?AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180366958 (-AddItemToTempSessionMap@AppList@GamingAudio@@AEAAJK$$QEAV-$unique_any_t@V-$unique_storage@U-$re.c)
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18036863C (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::push_back(
        __int64 *a1,
        char **a2)
{
  char **v2; // r9
  char *result; // rax

  v2 = (char **)a1[1];
  if ( v2 == (char **)a1[2] )
    return std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>(
             a1,
             a1[1],
             a2);
  result = *a2;
  *v2 = *a2;
  *a2 = 0LL;
  a1[1] += 8LL;
  return result;
}
