/*
 * XREFs of wistd::__function::__func__lambda_03899bd9ba5a14c04410ab955a36d1b6__void___cdecl(enum_wil::RegistryChangeKind)_::__move @ 0x180616890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_03899bd9ba5a14c04410ab955a36d1b6__void___cdecl_enum_wil::RegistryChangeKind__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180759068;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
