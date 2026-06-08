/*
 * XREFs of sub_140007EC8 @ 0x140007EC8
 * Callers:
 *     sub_140007344 @ 0x140007344 (sub_140007344.c)
 * Callees:
 *     sub_140007DD8 @ 0x140007DD8 (sub_140007DD8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_140007EC8(
        __int64 a1,
        __int64 a2))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v2; // di
  char v3; // bl
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v5; // [rsp+70h] [rbp+18h] BYREF

  v5 = 2;
  v2 = ((unsigned int)a2 >> 12) & 0x3F;
  v3 = a2;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))sub_140007DD8(
                                                                                                     (__int64)&off_140017A70,
                                                                                                     a2,
                                                                                                     (((unsigned int)a2 >> 12) & 0x3F) + 320);
  if ( (_DWORD)result )
  {
    result = qword_140018ED0;
    if ( qword_140018ED0 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))qword_140018ED0(58222274LL, &unk_14001380C, 0LL, v3 & 1, 0LL, &v5, v2, 1LL);
  }
  return result;
}
