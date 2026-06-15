/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140037FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14005C52C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(__int64 a1)
{
  unsigned int v1; // eax
  void *v2; // r10
  unsigned int v3; // ebx

  v1 = ATL::SafeDecrementReferenceMultiThread((volatile int *)(a1 + 8));
  v3 = v1;
  if ( v1 )
  {
    if ( v1 == 1 )
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  else if ( v2 )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v2);
  }
  return v3;
}
