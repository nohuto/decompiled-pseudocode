/*
 * XREFs of sub_18003C9BC @ 0x18003C9BC
 * Callers:
 *     sub_18003C9BC @ 0x18003C9BC (sub_18003C9BC.c)
 *     sub_18003E770 @ 0x18003E770 (sub_18003E770.c)
 * Callees:
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003C9BC @ 0x18003C9BC (sub_18003C9BC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18003C9BC(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rbp
  __int64 i; // rbx

  v2 = *a2;
  sub_18003BCDC(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 40);
    for ( i = *(_QWORD *)(v2 + 32); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)sub_18003C9BC(a1, i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
