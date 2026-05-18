/*
 * XREFs of sub_18002BD18 @ 0x18002BD18
 * Callers:
 *     sub_18002BD18 @ 0x18002BD18 (sub_18002BD18.c)
 *     sub_18002BDDC @ 0x18002BDDC (sub_18002BDDC.c)
 * Callees:
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18002BD18 @ 0x18002BD18 (sub_18002BD18.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002BD18(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax

  sub_180028730(a1 + 16);
  v6 = *a3;
  sub_18003BCDC(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  i = *(_QWORD *)(v6 + 384);
  while ( v7 != i )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      goto LABEL_7;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_18003BCDC(*a3);
  v7 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v7; i += 16LL )
LABEL_7:
    result = sub_18002BD18(a1, a2, i);
  return result;
}
