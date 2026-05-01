/*
 * XREFs of ?PositionNewCreatedApp@CClassicWindowActivationBasedCollection@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x1800CAD70
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800CADEC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPoli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowActivationBasedCollection::PositionNewCreatedApp(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rcx

  v3 = a1 + 1;
  v4 = 0;
  v5 = a1[2];
  if ( v5 != a1[4]
    || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::_EnsureCapacity(
               a1 + 1,
               v5 + 1),
        v4 >= 0) )
  {
    v6 = v3[1];
    v3[1] = v6 + 1;
    v7 = (__int64 *)(*v3 + 8 * v6);
    if ( v7 )
    {
      v8 = *a2;
      *v7 = *a2;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return (unsigned int)v4;
}
