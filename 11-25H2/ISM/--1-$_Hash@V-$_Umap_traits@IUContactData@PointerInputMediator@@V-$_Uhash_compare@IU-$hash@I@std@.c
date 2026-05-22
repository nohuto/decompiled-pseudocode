/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800159E0
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800156F0 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800159A8 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??1?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAA@XZ @ 0x18007480C (--1-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180017320 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::~_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  _QWORD **v4; // rcx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  char *v7; // r8
  char *v8; // rcx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v7 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v8 = (char *)(v2 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v3);
        __debugbreak();
        JUMPOUT(0x180015AA1LL);
      }
      v2 = v7;
    }
    operator delete(v2, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v4 = *(_QWORD ***)(a1 + 8);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(v5 + 5);
      operator delete(v5, (const struct std::nothrow_t *)0x38);
      v5 = v6;
    }
    while ( v6 );
  }
  operator delete(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x38);
}
