/*
 * XREFs of ??1SystemEffectDescriptor@@QEAA@XZ @ 0x180076A30
 * Callers:
 *     ??1EffectPack@@QEAA@XZ @ 0x180076920 (--1EffectPack@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180036D50 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 */

void __fastcall SystemEffectDescriptor::~SystemEffectDescriptor(SystemEffectDescriptor *this)
{
  std::_Ref_count_base *v2; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll((__int64)this + 32);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
