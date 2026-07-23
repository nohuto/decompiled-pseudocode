/*
 * XREFs of EtwpAllocateSchematizedFilter @ 0x1407B3DB4
 * Callers:
 *     EtwpAllocateFilter @ 0x1409E773C (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateSchematizedFilter(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ecx
  _DWORD *Pool2; // rax
  _DWORD *v6; // rdi
  __int64 result; // rax
  unsigned int v8; // ebx

  if ( *a2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 - 24 > 0x3E8 )
    return 3221225485LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v4, 0x46777445u);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = *(_DWORD *)(a1 + 8);
  memmove(Pool2, *(const void **)a1, v8);
  v6[5] = 0;
  v6[4] = v8;
  result = 0LL;
  *a2 = v6;
  return result;
}
