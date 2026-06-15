/*
 * XREFs of std::_Func_impl_no_alloc__lambda_dcd32b90bf0f22b83e9c814829ae8217__bool_ISaDeviceProxy___::_Do_call @ 0x1800F5C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_dcd32b90bf0f22b83e9c814829ae8217__bool_ISaDeviceProxy___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 96LL))(*a2) != 2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2) != 4
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2) != 3;
}
