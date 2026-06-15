/*
 * XREFs of wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::__move @ 0x180144D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_c92775e2c8766fb845a39d8dc79764fd__void___cdecl_enum_Windows::Internal::Shell::Holographic::ShellState_const____::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *a2 = &off_180175060;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = v2;
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  return result;
}
