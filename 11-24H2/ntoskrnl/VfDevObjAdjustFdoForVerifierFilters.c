/*
 * XREFs of VfDevObjAdjustFdoForVerifierFilters @ 0x140B94204
 * Callers:
 *     IovUtilMarkStack @ 0x1404A78B4 (IovUtilMarkStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfDevObjAdjustFdoForVerifierFilters(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( *(__int64 (__fastcall **)(PDEVICE_OBJECT, PIRP))(result + 328) == ViFilterDispatchPnp )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *(_QWORD *)a1 = result;
  }
  return result;
}
