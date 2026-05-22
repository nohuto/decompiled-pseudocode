/*
 * XREFs of ??1DWMCursorBroker@@MEAA@XZ @ 0x1801C6F60
 * Callers:
 *     ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x1801C7100 (--_GDWMCursorBroker@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18009064C (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DWMCursorBroker::~DWMCursorBroker(DWMCursorBroker *this)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  char *v6; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  v2 = (unsigned __int64)this + 16;
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v3 = (_QWORD *)((char *)this + 216);
  v4 = 10LL;
  do
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 168LL))(*((_QWORD *)this + 22));
      *v3 = 0LL;
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
  v5 = *((_QWORD *)this + 59);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(
      v5,
      v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  v6 = (char *)*((_QWORD *)this + 60);
  if ( v6 )
  {
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 62) - (_QWORD)v6) >> 3)));
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 59);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((__int64)this + 112);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((__int64)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
