/*
 * XREFs of sub_18002BC0C @ 0x18002BC0C
 * Callers:
 *     sub_180033120 @ 0x180033120 (sub_180033120.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 sub_18002BC0C(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h]
  va_list va1; // [rsp+78h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 48LL);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[2] + 8LL))(a1[2], (__int64 *)va);
    return v6(v5, v10, *v7);
  }
  return result;
}
