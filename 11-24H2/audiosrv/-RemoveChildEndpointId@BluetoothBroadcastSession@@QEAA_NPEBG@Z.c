/*
 * XREFs of ?RemoveChildEndpointId@BluetoothBroadcastSession@@QEAA_NPEBG@Z @ 0x1800E6F24
 * Callers:
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800E6768 (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A2E8 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??R_lambda_41b1dd983d9c9f206ca58ce540b1c861_@@QEBA@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800E48E0 (--R_lambda_41b1dd983d9c9f206ca58ce540b1c861_@@QEBA@AEBV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     ?erase@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800E7DB8 (-erase@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 */

char __fastcall BluetoothBroadcastSession::RemoveChildEndpointId(
        BluetoothBroadcastSession *this,
        const unsigned __int16 *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rbx
  _QWORD *i; // rdi
  const unsigned __int16 *v7; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  v8 = a2;
  v7 = a2;
  while ( v4 != v2 && !_lambda_41b1dd983d9c9f206ca58ce540b1c861_::operator()(&v7, v4) )
    ++v4;
  if ( v4 != v2 )
  {
    for ( i = v4 + 1; i != v2; ++i )
    {
      if ( !_lambda_41b1dd983d9c9f206ca58ce540b1c861_::operator()(&v8, i) )
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          v4++,
          i);
    }
  }
  if ( v4 == *((_QWORD **)this + 4) )
    return 0;
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::erase(
    (char *)this + 24,
    &v7,
    v4);
  return 1;
}
