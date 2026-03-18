/*
 * XREFs of UsbhD3ColdSupportInterfaceGetLastTransitionStatus @ 0x1C0053E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhD3ColdSupportInterfaceGetLastTransitionStatus(__int64 a1, _DWORD *a2))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  *a2 = 1;
  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 3040);
  if ( !result || (result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 2984)), *a2 != 2) )
  {
    if ( (*(_DWORD *)(a1 + 1420) & 0x2000000) != 0 )
      *a2 = 2;
  }
  return result;
}
