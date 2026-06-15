/*
 * XREFs of ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180045710
 * Callers:
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x18016A830 (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(
        __int64 a1)
{
  int *v1; // rdi
  int v3; // ebp
  __int64 v4; // r14
  volatile signed __int32 *v5; // rsi

  v1 = (int *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0;
    if ( *v1 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *(volatile signed __int32 **)(v4 + *(_QWORD *)a1 + 8);
        if ( v5 )
        {
          if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
            if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
          }
        }
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *v1 );
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
