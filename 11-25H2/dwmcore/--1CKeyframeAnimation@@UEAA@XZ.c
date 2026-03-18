/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x180068960
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180068F50 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x1802317AC (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18005D270 (-_Tidy@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Mi.c)
 *     ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18005D38C (--1-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Reset@?$DynArray@PEAVCResource@@$0A@@@QEAAXH@Z @ 0x1801F8DAC (-Reset@-$DynArray@PEAVCResource@@$0A@@@QEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  __int64 v1; // rbp
  _QWORD *i; // rsi

  *((_BYTE *)this + 536) &= ~1u;
  v1 = 0LL;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  for ( i = (_QWORD *)((char *)this + 360); (unsigned int)v1 < *((_DWORD *)this + 96); v1 = (unsigned int)(v1 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*i + 8 * v1) + 208LL))(*(_QWORD *)(*i + 8 * v1), 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*i + 8 * v1) + 16LL))(*(_QWORD *)(*i + 8 * v1));
  }
  DynArray<CResource *,0>::Reset(i);
  if ( (*((_BYTE *)this + 537) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Tidy((_QWORD *)this + 52);
  DynArrayImpl<0>::~DynArrayImpl<0>(i);
  std::unique_ptr<KeyframeSequence>::~unique_ptr<KeyframeSequence>((KeyframeSequence **)this + 44);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 43);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((char *)this + 336);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 41);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 40);
  CBaseExpression::~CBaseExpression((void **)this);
}
