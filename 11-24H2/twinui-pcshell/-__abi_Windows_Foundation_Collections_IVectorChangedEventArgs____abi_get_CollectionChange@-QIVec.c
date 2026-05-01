/*
 * XREFs of ?__abi_Windows_Foundation_Collections_IVectorChangedEventArgs____abi_get_CollectionChange@?QIVectorChangedEventArgs@Collections@Foundation@Windows@@VectorChangedEventArgs@Details@2Platform@@UE$AAAJPEAW4CollectionChange@234@@Z @ 0x1806B8530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections_IVectorChangedEventArgs____abi_get_CollectionChange__QIVectorChangedEventArgs_Collections_Foundation_Windows__VectorChangedEventArgs_Details_2Platform__UE_AAAJPEAW4CollectionChange_234__Z(
        __int64 a1,
        _DWORD *a2)
{
  try
  {
    *a2 = 0;
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
