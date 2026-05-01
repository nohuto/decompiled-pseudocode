/*
 * XREFs of wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::__clone @ 0x180201500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::__clone(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = &off_1807C62C8;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef((__int64 *)(a2 + 16), (volatile int *)a2);
}
