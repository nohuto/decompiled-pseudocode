/*
 * XREFs of ArbBootAllocation @ 0x140704B90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ArbpBuildAlternative @ 0x140706968 (ArbpBuildAlternative.c)
 *     RtlCopyRangeList @ 0x140A52170 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A52340 (RtlFreeRangeList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBootAllocation(__int64 a1, _QWORD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *i; // rdi
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 *v14; // [rsp+48h] [rbp-31h]
  int v15; // [rsp+50h] [rbp-29h]
  unsigned __int64 *v16; // [rsp+58h] [rbp-21h]
  __int16 v17; // [rsp+60h] [rbp-19h]
  char v18; // [rsp+62h] [rbp-17h]
  char v19; // [rsp+63h] [rbp-16h]
  PVOID P; // [rsp+68h] [rbp-11h]
  unsigned __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+80h] [rbp+7h]
  unsigned __int64 v24; // [rsp+88h] [rbp+Fh]

  memset_0(v13, 0, 0x50uLL);
  memset_0(&v21, 0, 0x40uLL);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 48);
  v16 = &v21;
  v14 = &v21;
  v17 = 2;
  v15 = 1;
  v18 = 1;
  RtlCopyRangeList(v5, v4);
  for ( i = (_QWORD *)**a2; *a2 != i; i = (_QWORD *)*i )
  {
    v13[4] = i;
    ArbpBuildAlternative(a1, i[3], &v21);
    P = 0LL;
    v13[0] = v21;
    v13[1] = v22;
    v19 = 0;
    if ( v23 && v24 && v22 >= v21 && !(v21 % v24) && v22 - v21 + 1 == v23 )
    {
      v7 = guard_dispatch_icall_no_overrides(a1, v13, v21, v24);
      if ( v7 < 0 )
      {
        RtlFreeRangeList(*(_QWORD *)(a1 + 48));
        return (unsigned int)v7;
      }
      guard_dispatch_icall_no_overrides(a1, v13, v8, v9);
      guard_dispatch_icall_no_overrides(v14[5], v13[0], i[9], v10);
      if ( (v17 & 0x10) != 0 )
      {
        ExFreePoolWithTag(P, 0);
        v17 &= ~0x10u;
      }
    }
  }
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = v12;
  return result;
}
