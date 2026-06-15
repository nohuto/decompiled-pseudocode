/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C
 * Callers:
 *     ??1CProcessSubmix@@QEAA@XZ @ 0x14002AC24 (--1CProcessSubmix@@QEAA@XZ.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x14002B1F4 (--1CStreamGroup@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000E930 (-RemoveAll@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x1400277DC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140028B80 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1CFormatConverterPipe@@QEAA@XZ @ 0x14002A638 (--1CFormatConverterPipe@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXXZ @ 0x14002A6A8 (-RemoveAll@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002A70C (-RemoveAt@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x1400418E0 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAA?AV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x140056104 (-RemoveHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x1400664D8 (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAPEAVCChildSubmixInstance@@XZ @ 0x14006EA6C (-RemoveHead@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@AT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  __int64 *v2; // rsi
  struct ISubmix *v3; // rdx
  __int64 i; // rdx
  unsigned int v5; // edx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // rax
  CAudioHistoryBufferManager *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (__int64 *)((char *)this + 304);
  v3 = (struct ISubmix *)*((_QWORD *)this + 38);
  if ( v3 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v3);
  while ( *((_QWORD *)this + 11) )
  {
    ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveHead(
      (char *)this + 72,
      &v10);
    v6 = v10;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 120LL))(v10) )
    {
      v9 = 0LL;
      if ( GetHistoryBufferManager(&v9) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
        CAudioHistoryBufferManager::Remove(v9, v7);
      }
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
  }
  while ( *((_QWORD *)this + 17) )
  {
    v8 = (void *)ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveHead((char *)this + 120);
    operator delete(v8);
  }
  EnterCriticalSection(&g_CritSecSubmixList);
  for ( i = SubmixList; i; i = *(_QWORD *)i )
  {
    if ( *(CSubmixImpl **)(i + 16) == this )
    {
      ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt();
      break;
    }
  }
  LeaveCriticalSection(&g_CritSecSubmixList);
  PublishDeviceGraphWnfState();
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v2);
  CFormatConverterPipe::~CFormatConverterPipe((CSubmixImpl *)((char *)this + 272));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 33);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)this + 28,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)this + 27,
    0LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAll((__int64 *)this + 15);
  ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this + 3, v5);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 1);
}
