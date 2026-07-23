/*
 * XREFs of BapdpParseEventParts @ 0x1404F4170
 * Callers:
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 * Callees:
 *     <none>
 */

int *__fastcall BapdpParseEventParts(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v5; // rcx
  int v6; // r10d
  char *v7; // rdi
  __int64 v8; // rbx
  int *result; // rax

  if ( *(_BYTE *)(a1 + 3) == 11
    && a3 >= 7
    && (v5 = *a2, v6 = 3, (unsigned int)v5 >= 3)
    && (unsigned int)v5 <= a3 - 4
    && (v7 = (char *)a2 + v5, v8 = *(unsigned __int16 *)((char *)a2 + v5), (unsigned int)v8 >= 4)
    && (unsigned int)v8 <= a3 - (unsigned int)v5 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_QWORD *)a4 = a2;
    *(_DWORD *)(a4 + 8) = v5;
    *(_BYTE *)(a4 + 12) = 2;
    *(_DWORD *)(a4 + 28) = 0;
    *(_QWORD *)(a4 + 16) = v7;
    *(_DWORD *)(a4 + 24) = v8;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 44) = 0;
    *(_QWORD *)(a4 + 32) = &v7[v8];
    *(_DWORD *)(a4 + 40) = a3 - v5 - v8;
  }
  else
  {
    *(_DWORD *)(a4 + 12) = 0;
    v6 = 1;
    *(_QWORD *)a4 = a2;
    *(_DWORD *)(a4 + 8) = a3;
  }
  result = a5;
  *a5 = v6;
  return result;
}
