/*
 * XREFs of KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1400C78EC
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140003554 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     ??3?$KALLOCATOR_NONPAGED@$0ECFDEEEO@$0CAA@@@SAXPEAX@Z @ 0x14000352C (--3-$KALLOCATOR_NONPAGED@$0ECFDEEEO@$0CAA@@@SAXPEAX@Z.c)
 */

__int64 __fastcall KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop(
        __int64 a1)
{
  __int64 **v1; // rbx
  __int64 *v3; // rcx
  __int64 result; // rax

  v1 = (__int64 **)(a1 + 120);
  if ( !*(_QWORD *)(a1 + 128) )
  {
    v3 = *v1;
    result = **v1;
    if ( !result )
      return result;
    *v1 = (__int64 *)result;
    *(_QWORD *)(a1 + 128) = 7LL;
    KALLOCATOR_NONPAGED<1112753230,512>::operator delete(v3);
  }
  --*(_QWORD *)(a1 + 128);
  return (__int64)&(*v1)[2 * *(_QWORD *)(a1 + 128) + 1];
}
