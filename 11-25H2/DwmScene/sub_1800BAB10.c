/*
 * XREFs of sub_1800BAB10 @ 0x1800BAB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BAB10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_1800287EC(a1 + 24, (__int64)a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_180025970(a1, a2);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}
