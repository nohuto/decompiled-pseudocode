/*
 * XREFs of ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802A6EF8
 * Callers:
 *     ??_GCSynchronousSuperWetInk@@EEAAPEAXI@Z @ 0x1802A6FC0 (--_GCSynchronousSuperWetInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18017E4B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801A2C14 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x18021E888 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18024BD78 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAA_NXZ @ 0x180299B7C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1732988217@@@details@wil@@QEAA_NX.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1802A6EC8 (--1-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSynchronousSuperWetInk::~CSynchronousSuperWetInk(CSynchronousSuperWetInk *this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable';
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_1732988217>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1732988217>::GetImpl'::`2'::impl)
    || CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
  {
    CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &EVTDESC_SYNCHRONOUSSUPERWETINK_DESTROYED, (__int64)this);
  std::vector<unsigned char>::_Tidy((__int64)this + 264);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>((_QWORD **)this + 28);
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>((void **)this + 27);
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>((struct CResource **)this);
}
