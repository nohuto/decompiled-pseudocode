/*
 * XREFs of ??H?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x1803667BC
 * Callers:
 *     ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x1803669C0 (-ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Vector_iterator<std::_Vector_val<std::_Simple_types<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>>>::operator+(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *a1 + 8 * a3;
  return result;
}
