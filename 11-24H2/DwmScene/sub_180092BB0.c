/*
 * XREFs of sub_180092BB0 @ 0x180092BB0
 * Callers:
 *     sub_180094C30 @ 0x180094C30 (sub_180094C30.c)
 * Callees:
 *     sub_180039344 @ 0x180039344 (sub_180039344.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180092BB0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi
  _QWORD *v4; // rdx
  _QWORD *v6; // rbp
  _BYTE *v7; // rsi
  __int64 result; // rax

  v2 = (_BYTE *)(a1 + 68);
  v4 = (_QWORD *)(a1 + 8);
  v6 = (_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 68) )
  {
    v7 = (_BYTE *)(a1 + 68);
    goto LABEL_6;
  }
  if ( *v6 != *v4 )
  {
    v7 = (_BYTE *)(a1 + 68);
LABEL_6:
    sub_180039344((_QWORD *)(a1 + 24), v4);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 152LL))(a2, v6);
    goto LABEL_7;
  }
  v7 = (_BYTE *)(a1 + 68);
LABEL_7:
  if ( *v2 || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  }
  *v7 = 0;
  return result;
}
