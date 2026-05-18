/*
 * XREFs of sub_1800C30E4 @ 0x1800C30E4
 * Callers:
 *     sub_1800C2CA0 @ 0x1800C2CA0 (sub_1800C2CA0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180037284 @ 0x180037284 (sub_180037284.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C2568 @ 0x1800C2568 (sub_1800C2568.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C30E4(_QWORD **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, int *, __int64 *); // rbx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+84h] [rbp+34h]

  v13 = 0;
  v14 = 0;
  v12 = 0LL;
  sub_180011B04((__int64)(a1 + 9), &v9);
  sub_1800C2568(&v7, &v9);
  if ( v10 )
    sub_18001050C(v10);
  v2 = sub_1800B9A04(v7, &v11);
  v3 = *v2;
  v4 = *(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)*v2 + 192LL);
  sub_18000E854(&v12);
  LODWORD(v4) = v4(v3, &v13, &v12);
  sub_18000E854(&v11);
  if ( (int)v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[18] + 224LL))(a1[18], v12);
    sub_180037284(a1);
    LODWORD(v11) = 0;
    do
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *, __int64, _DWORD))(*a1[18] + 232LL))(
             a1[18],
             v12,
             &v11,
             4LL,
             0);
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          sub_1800BB198(v7, v5);
          break;
        }
        Thrd_yield();
      }
    }
    while ( !(_DWORD)v11 );
  }
  if ( v8 )
    sub_18001050C(v8);
  return sub_18000E854(&v12);
}
