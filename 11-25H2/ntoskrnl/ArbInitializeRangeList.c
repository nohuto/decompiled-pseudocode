/*
 * XREFs of ArbInitializeRangeList @ 0x1406F9A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeRangeList @ 0x140A4EBF0 (RtlFreeRangeList.c)
 *     RtlInvertRangeListEx @ 0x140A748C0 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x140A749C0 (RtlAddRange.c)
 */

__int64 __fastcall ArbInitializeRangeList(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // r14
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  _QWORD v12[5]; // [rsp+48h] [rbp-28h] BYREF

  v12[1] = v12;
  v12[3] = 0LL;
  v12[0] = v12;
  v6 = a3;
  v12[2] = 0LL;
  v7 = (unsigned __int64)&a3[20 * a2];
  while ( (unsigned __int64)v6 < v7 )
  {
    v8 = *v6;
    v9 = *(_DWORD *)(a1 + 32);
    if ( v8 == v9 || (_BYTE)v8 == 7 && v9 == 3 )
    {
      v10 = guard_dispatch_icall_no_overrides(v6);
      if ( v10 < 0 )
        goto LABEL_10;
    }
    v6 += 20;
  }
  v10 = RtlInvertRangeListEx(a4, (unsigned int)v12, 0, 0, 0LL);
  if ( v10 >= 0 )
    v10 = 0;
LABEL_10:
  RtlFreeRangeList(v12);
  return (unsigned int)v10;
}
