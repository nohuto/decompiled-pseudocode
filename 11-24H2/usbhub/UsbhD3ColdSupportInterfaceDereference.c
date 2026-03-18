/*
 * XREFs of UsbhD3ColdSupportInterfaceDereference @ 0x14005BE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UsbhD3ColdSupportInterfaceDereference(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 3000);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 2984));
  return result;
}
