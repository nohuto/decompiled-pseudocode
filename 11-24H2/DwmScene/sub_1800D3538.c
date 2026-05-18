/*
 * XREFs of sub_1800D3538 @ 0x1800D3538
 * Callers:
 *     sub_1800D39D8 @ 0x1800D39D8 (sub_1800D39D8.c)
 * Callees:
 *     sub_1800D3854 @ 0x1800D3854 (sub_1800D3854.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D3538(int a1, int a2, int a3, _QWORD *a4, __int64 a5)
{
  unsigned __int8 v7; // bl
  int v8; // esi
  unsigned int v9; // edi
  __int64 result; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  char v13; // al

  if ( a3 == 1 )
  {
    v7 = 1;
    v8 = 1;
  }
  else
  {
    v7 = 0;
    v8 = 3;
  }
  v9 = 0;
  result = 2 * (unsigned int)v7;
  v11 = 0;
  v12 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a4 && v11 == 100 * (v11 / 0x64) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4);
      v13 = v7 && (v9 & 1) != 0;
      result = sub_1800D3854(a1, v9, v9 + 1, v9 + 2, v13, a5);
      v9 += v8;
      ++v11;
    }
    while ( v9 < v12 );
  }
  return result;
}
