/*
 * XREFs of ArbRetestAllocation @ 0x140706240
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ArbpBuildAlternative @ 0x140706968 (ArbpBuildAlternative.c)
 *     RtlCopyRangeList @ 0x140A52170 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A52340 (RtlFreeRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x140A6BC10 (RtlDeleteOwnersRanges.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbRetestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // r8
  int v5; // edi
  __int64 *i; // rsi
  __int64 *j; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v15[6]; // [rsp+40h] [rbp-59h] BYREF
  int v16; // [rsp+70h] [rbp-29h]
  _BYTE *v17; // [rsp+78h] [rbp-21h]
  __int16 v18; // [rsp+80h] [rbp-19h]
  PVOID P; // [rsp+88h] [rbp-11h]
  _BYTE v20[64]; // [rsp+90h] [rbp-9h] BYREF

  v14 = 0LL;
  memset_0(v15, 0, 0x50uLL);
  memset_0(v20, 0, sizeof(v20));
  v4 = a2[2];
  v17 = v20;
  v16 = 1;
  v15[5] = v20;
  v18 = 1;
  if ( !v4 )
  {
    v5 = RtlCopyRangeList(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 40));
    if ( v5 >= 0 )
    {
      for ( i = **a2; *a2 != (__int64 **)i; i = (__int64 *)*i )
      {
        v5 = RtlDeleteOwnersRanges(*(_QWORD *)(a1 + 48));
        if ( v5 < 0 )
          goto LABEL_17;
      }
      goto LABEL_8;
    }
LABEL_17:
    RtlFreeRangeList(*(_QWORD *)(a1 + 48));
    return (unsigned int)v5;
  }
  v5 = guard_dispatch_icall_no_overrides(a1, *((unsigned int *)a2 + 2), v4, *(_QWORD *)(a1 + 48));
  if ( v5 < 0 )
    goto LABEL_17;
LABEL_8:
  for ( j = **a2; *a2 != (__int64 **)j; j = (__int64 *)*j )
  {
    P = 0LL;
    v15[4] = j;
    v5 = ArbpBuildAlternative(a1, j[10], v20);
    if ( *((_DWORD *)j + 22) != 2 )
    {
      guard_dispatch_icall_no_overrides(j[9], v15, &v14, v8);
      v15[1] = v15[0] - 1LL + v14;
      v5 = guard_dispatch_icall_no_overrides(a1, v15, v9, v10);
      if ( v5 < 0 )
        goto LABEL_17;
      if ( v14 )
        guard_dispatch_icall_no_overrides(a1, v15, v11, v12);
      if ( (v18 & 0x10) != 0 )
      {
        ExFreePoolWithTag(P, 0);
        v18 &= ~0x10u;
      }
    }
  }
  return (unsigned int)v5;
}
