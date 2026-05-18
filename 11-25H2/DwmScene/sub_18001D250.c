/*
 * XREFs of sub_18001D250 @ 0x18001D250
 * Callers:
 *     sub_18001CED8 @ 0x18001CED8 (sub_18001CED8.c)
 *     sub_18001EFE0 @ 0x18001EFE0 (sub_18001EFE0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001D250(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // di
  __int64 v6; // rax

  *(_QWORD *)a1 = a2;
  v4 = std::ios::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  v5 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL))) )
  {
    v6 = std::ios::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
    if ( !v6 || v6 == a2 )
    {
      v5 = 1;
    }
    else
    {
      std::ostream::flush(v6);
      v5 = std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)));
    }
  }
  *(_BYTE *)(a1 + 8) = v5;
  return a1;
}
