/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14025BA40
 * Callers:
 *     MiSynchronousPageWrite @ 0x14025B804 (MiSynchronousPageWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // ecx

  result = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1084);
    if ( (int)result >= v3 )
      return (unsigned int)v3;
  }
  return result;
}
