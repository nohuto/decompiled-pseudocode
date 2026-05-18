/*
 * XREFs of sub_1800103B0 @ 0x1800103B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010660 @ 0x180010660 (sub_180010660.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800103B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)sub_180010660(a2, &unk_1800F7220, a3, a1)
    || (unsigned int)sub_180010660(v4, &unk_1800F7210, v5, v6) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
