/*
 * XREFs of sub_18006B38C @ 0x18006B38C
 * Callers:
 *     sub_18005F440 @ 0x18005F440 (sub_18005F440.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_18006B38C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  void *result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = unknown_libname_81(v8, a2);
  sub_18006CC9C(a1, v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD **)(a1 + 48);
  if ( v5 == *(_QWORD **)(a1 + 56) )
  {
    result = sub_18006A4B8((__int64 *)(a1 + 40), *(_QWORD *)(a1 + 48), a2);
  }
  else
  {
    result = j_unknown_libname_81(v5, a2);
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v7 = a2[1];
  if ( v7 )
    return (void *)sub_18001050C(v7);
  return result;
}
