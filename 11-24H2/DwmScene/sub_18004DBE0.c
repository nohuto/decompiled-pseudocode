/*
 * XREFs of sub_18004DBE0 @ 0x18004DBE0
 * Callers:
 *     sub_18004D7D4 @ 0x18004D7D4 (sub_18004D7D4.c)
 *     sub_180084BFC @ 0x180084BFC (sub_180084BFC.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004DBE0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx

  *(_QWORD *)a1 = a2;
  v5 = std::ios::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  LOBYTE(v6) = a3;
  *(_BYTE *)(a1 + 8) = std::istream::_Ipfx(*(_QWORD *)a1, v6);
  return a1;
}
