/*
 * XREFs of EmonPebsOverflowHandler @ 0x14055B32C
 * Callers:
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055AB6C (EmonOverflowHandlerInternalV2Original.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EmonPebsOverflowHandler()
{
  __int64 v0; // rax
  __int64 *v1; // r9
  __int64 v2; // rbx
  __int64 v3; // r11
  __int64 result; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = (__int64 *)EmonReservedResourcesList;
  v2 = EmonDsManagementAreas + 160 * v0;
  while ( v1 != &EmonReservedResourcesList )
  {
    if ( v1[3] )
    {
      if ( EmonPebs64Bit )
        v3 = *(_QWORD *)(v2 + 32);
      else
        v3 = *(unsigned int *)(v2 + 16);
      guard_dispatch_icall_no_overrides(v3, (unsigned int)EmonPebsEntrySizeInUse);
      break;
    }
    v1 = (__int64 *)*v1;
  }
  if ( EmonPebs64Bit )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = result;
  }
  else
  {
    result = *(unsigned int *)(v2 + 16);
    *(_DWORD *)(v2 + 20) = result;
  }
  return result;
}
