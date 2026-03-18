/*
 * XREFs of ArbBootAllocation @ 0x140097830
 * Callers:
 *     IrqArbBootAllocation @ 0x1400B19C0 (IrqArbBootAllocation.c)
 * Callees:
 *     RtlFreeRangeList_0 @ 0x14005671F (RtlFreeRangeList_0.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ArbpBuildAlternative @ 0x1400BED8C (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbBootAllocation(__int64 a1, _QWORD **a2)
{
  struct _RTL_RANGE_LIST *v4; // rdx
  struct _RTL_RANGE_LIST *v5; // rcx
  _QWORD *i; // rdi
  int v7; // esi
  __int64 result; // rax
  __int64 v9; // rcx
  _QWORD v10[10]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v11[8]; // [rsp+70h] [rbp-9h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v5 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  v10[7] = v11;
  v10[5] = v11;
  LOWORD(v10[8]) = 2;
  LODWORD(v10[6]) = 1;
  BYTE2(v10[8]) = 1;
  RtlCopyRangeList(v5, v4);
  for ( i = (_QWORD *)**a2; *a2 != i; i = (_QWORD *)*i )
  {
    v10[4] = i;
    ArbpBuildAlternative(a1, i[3], v11);
    v10[9] = 0LL;
    v10[0] = v11[0];
    v10[1] = v11[1];
    BYTE3(v10[8]) = 0;
    if ( v11[2] && v11[3] && v11[1] >= v11[0] && !(v11[0] % v11[3]) && v11[1] - v11[0] + 1LL == v11[2] )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v10);
      if ( v7 < 0 )
      {
        RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
        return (unsigned int)v7;
      }
      (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 256))(a1, v10);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 128))(*(_QWORD *)(v10[5] + 40LL), v10[0], i[9]);
      if ( (v10[8] & 0x10) != 0 )
      {
        ExFreePoolWithTag((PVOID)v10[9], 0);
        LOWORD(v10[8]) &= ~0x10u;
      }
    }
  }
  RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40));
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = v9;
  return result;
}
