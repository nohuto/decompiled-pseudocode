/*
 * XREFs of ??3?$KALLOCATOR_NONPAGED@$0ECFDEEEO@$0CAA@@@SAXPEAX@Z @ 0x14000352C
 * Callers:
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_ @ 0x1400C78B8 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--_KSta.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1400C78EC (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Pop.c)
 * Callees:
 *     <none>
 */

void __fastcall KALLOCATOR_NONPAGED<1112753230,512>::operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4253444Eu);
}
