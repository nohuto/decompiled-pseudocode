/*
 * XREFs of sub_180050D44 @ 0x180050D44
 * Callers:
 *     sub_180050C18 @ 0x180050C18 (sub_180050C18.c)
 *     sub_180051DD4 @ 0x180051DD4 (sub_180051DD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180050D44(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rcx
  int v9; // edi
  int v10; // r11d
  int v11; // r10d
  __int64 result; // rax

  v8 = *a4;
  v9 = *a8;
  v10 = *a6;
  v11 = *a5;
  result = *a3;
  *(_DWORD *)(a2 + 24) = *a7;
  *(_DWORD *)(a2 + 28) = v9;
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v8;
  *(_DWORD *)(a2 + 16) = v11;
  *(_DWORD *)(a2 + 20) = v10;
  return result;
}
