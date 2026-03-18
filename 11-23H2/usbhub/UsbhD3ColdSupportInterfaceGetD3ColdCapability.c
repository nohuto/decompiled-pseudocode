/*
 * XREFs of UsbhD3ColdSupportInterfaceGetD3ColdCapability @ 0x1C0073A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhD3ColdSupportInterfaceGetD3ColdCapability(__int64 a1, _BYTE *a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = *(__int64 (__fastcall **)(_QWORD))(a1 + 3024);
  if ( v2 )
    return v2(*(_QWORD *)(a1 + 2984));
  *a2 = 0;
  return 0LL;
}
