/*
 * XREFs of ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802B0A38
 * Callers:
 *     ??_GCSynchronousSuperWetInk@@EEAAPEAXI@Z @ 0x1802B0AF0 (--_GCSynchronousSuperWetInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18005CAE0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801A9184 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x180229C74 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180257148 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1802B0A08 (--1-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSynchronousSuperWetInk::~CSynchronousSuperWetInk(void **this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  void *v4; // rcx

  *this = &CSynchronousSuperWetInk::`vftable';
  if ( CSynchronousSuperWetInk::IsSuperWetCompatible((CSynchronousSuperWetInk *)this) )
    CSuperWetInkManager::RemoveSource(
      *(CSuperWetInkManager **)(*(_QWORD *)(v2 + 24) + 656LL),
      (struct CSuperWetSource *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &EVTDESC_SYNCHRONOUSSUPERWETINK_DESTROYED, (__int64)this);
  std::vector<unsigned char>::_Tidy((__int64)(this + 33));
  v3 = (std::_Ref_count_base *)this[32];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>((_QWORD **)this + 28);
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(this + 27);
  v4 = this[26];
  if ( v4 )
  {
    this[26] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>((struct CResource **)this);
}
