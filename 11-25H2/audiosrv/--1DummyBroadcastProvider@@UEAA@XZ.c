/*
 * XREFs of ??1DummyBroadcastProvider@@UEAA@XZ @ 0x1800F682C
 * Callers:
 *     ??_EDummyBroadcastProvider@@UEAAPEAXI@Z @ 0x1800F70C0 (--_EDummyBroadcastProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800A6B54 (-_Tidy@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ??$_Destroy_range@V?$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@@QEAU1@AEAV?$allocator@UDummyBroadcastSession@@@0@@Z @ 0x1800DDDF0 (--$_Destroy_range@V-$allocator@UDummyBroadcastSession@@@std@@@std@@YAXPEAUDummyBroadcastSession@.c)
 */

void __fastcall DummyBroadcastProvider::~DummyBroadcastProvider(DummyBroadcastProvider *this)
{
  DummyBroadcastSession *v2; // rcx

  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::_Tidy((__int64)this + 88);
  v2 = (DummyBroadcastSession *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<DummyBroadcastSession>>(v2, *((DummyBroadcastSession **)this + 9));
    std::_Deallocate<16,0>(
      *((char **)this + 8),
      (const struct std::nothrow_t *)(16 * ((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) >> 4)));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 3) = -1073741823;
}
