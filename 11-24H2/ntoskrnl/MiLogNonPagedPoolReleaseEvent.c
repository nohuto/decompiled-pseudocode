/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x1404CEE9C
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int128 *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v1 = (_QWORD *)*a1;
  do
  {
    v5 = 0LL;
    v6 = 0LL;
    v2 = v1[1] | 0x8000000000000000uLL;
    v3 = v2;
    do
    {
      v1 = (_QWORD *)*v1;
      v2 -= 8LL;
    }
    while ( v1 && (v1[1] | 0x8000000000000000uLL) == v2 );
    v9 = 0;
    *(_QWORD *)&v5 = v5 & 0xFFFFFFFFFFFFFFF0uLL | 5;
    v6 = (__int64)(v3 - v2) >> 3;
    v8 = 24;
    *((_QWORD *)&v5 + 1) = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v7 = &v5;
    result = EtwTraceKernelEvent((int)&v7, 1, 0x20000001u, 633, 290462468);
  }
  while ( v1 );
  return result;
}
