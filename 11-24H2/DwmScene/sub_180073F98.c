/*
 * XREFs of sub_180073F98 @ 0x180073F98
 * Callers:
 *     sub_180074010 @ 0x180074010 (sub_180074010.c)
 *     sub_180076F74 @ 0x180076F74 (sub_180076F74.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180073F98(__int64 a1, __int64 a2)
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
  return sub_180012508(a1, a2);
}
