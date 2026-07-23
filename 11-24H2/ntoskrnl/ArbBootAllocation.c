/*
 * XREFs of ArbBootAllocation @ 0x140702750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ArbpBuildAlternative @ 0x140704528 (ArbpBuildAlternative.c)
 *     RtlCopyRangeList @ 0x140A4A0A0 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A4A270 (RtlFreeRangeList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBootAllocation(__int64 a1, _QWORD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *i; // rdi
  int v7; // esi
  __int64 result; // rax
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 *v11; // [rsp+48h] [rbp-31h]
  int v12; // [rsp+50h] [rbp-29h]
  unsigned __int64 *v13; // [rsp+58h] [rbp-21h]
  __int16 v14; // [rsp+60h] [rbp-19h]
  char v15; // [rsp+62h] [rbp-17h]
  char v16; // [rsp+63h] [rbp-16h]
  PVOID P; // [rsp+68h] [rbp-11h]
  unsigned __int64 v18; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-1h]
  __int64 v20; // [rsp+80h] [rbp+7h]
  unsigned __int64 v21; // [rsp+88h] [rbp+Fh]

  memset_0(v10, 0, 0x50uLL);
  memset_0(&v18, 0, 0x40uLL);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 48);
  v13 = &v18;
  v11 = &v18;
  v14 = 2;
  v12 = 1;
  v15 = 1;
  RtlCopyRangeList(v5, v4);
  for ( i = (_QWORD *)**a2; *a2 != i; i = (_QWORD *)*i )
  {
    v10[4] = i;
    ArbpBuildAlternative(a1, i[3], &v18);
    P = 0LL;
    v10[0] = v18;
    v10[1] = v19;
    v16 = 0;
    if ( v20 && v21 && v19 >= v18 && !(v18 % v21) && v19 - v18 + 1 == v20 )
    {
      v7 = guard_dispatch_icall_no_overrides(a1, v10);
      if ( v7 < 0 )
      {
        RtlFreeRangeList(*(_QWORD *)(a1 + 48));
        return (unsigned int)v7;
      }
      guard_dispatch_icall_no_overrides(a1, v10);
      guard_dispatch_icall_no_overrides(v11[5], v10[0]);
      if ( (v14 & 0x10) != 0 )
      {
        ExFreePoolWithTag(P, 0);
        v14 &= ~0x10u;
      }
    }
  }
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = v9;
  return result;
}
