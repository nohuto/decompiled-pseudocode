/*
 * XREFs of sub_180073E38 @ 0x180073E38
 * Callers:
 *     sub_180073EB0 @ 0x180073EB0 (sub_180073EB0.c)
 *     sub_180076E14 @ 0x180076E14 (sub_180076E14.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180073E38(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(a1 + 56);
    if ( !v3 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v5);
  }
  return sub_180012408(a1, a2);
}
