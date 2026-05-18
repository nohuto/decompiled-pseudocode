/*
 * XREFs of sub_1800CA160 @ 0x1800CA160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800CA7A0 @ 0x1800CA7A0 (sub_1800CA7A0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800CA160(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64 *, __int64); // rdi
  int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      LODWORD(v11) = 2;
    }
    else if ( a3 == 2 )
    {
      LODWORD(v11) = 4;
    }
  }
  else
  {
    LODWORD(v11) = 3;
  }
  v6 = sub_1800B9A04(a2, &v12);
  v7 = *v6;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)*v6 + 192LL);
  sub_18000E854((__int64 *)(a1 + 96));
  v9 = v8(v7, &v11, a1 + 96);
  sub_18000E854(&v12);
  sub_1800BB198(a2, v9);
  if ( v9 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  sub_1800CA7A0(a1);
  return 1;
}
