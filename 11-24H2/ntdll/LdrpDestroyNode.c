/*
 * XREFs of LdrpDestroyNode @ 0x180031528
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpCondenseGraphRecurse @ 0x1800E5BA0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall LdrpDestroyNode(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = (_QWORD *)a1[2];
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap(LdrpHeap, 0, v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(LdrpHeap, 0, a1);
}
