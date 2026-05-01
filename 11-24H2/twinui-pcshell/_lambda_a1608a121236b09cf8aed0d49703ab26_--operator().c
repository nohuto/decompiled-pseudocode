/*
 * XREFs of _lambda_a1608a121236b09cf8aed0d49703ab26_::operator() @ 0x1805A5CF4
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_a1608a121236b09cf8aed0d49703ab26___ @ 0x1805A5320 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x1805AA838 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_a1608a121236b09cf8aed0d49703ab26_::operator()(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = **(_DWORD **)(a1 + 8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 56LL))(*a2, &v6);
  return SnapLayoutHelpers::DoSnapRegionsOverlap(1LL, v4, *(_QWORD *)a1, v3, v6);
}
