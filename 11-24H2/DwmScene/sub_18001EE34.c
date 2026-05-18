/*
 * XREFs of sub_18001EE34 @ 0x18001EE34
 * Callers:
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_180036028 @ 0x180036028 (sub_180036028.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001EE34(_QWORD *a1, unsigned int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, int); // rbx
  _QWORD *v13; // rax
  char v14; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v11 = *a1;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)*a1 + 24LL);
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)a1[2] + 8LL))(a1[2], &v14);
    return v12(v11, a6, *v13, a2, a5, a3, a4);
  }
  return result;
}
