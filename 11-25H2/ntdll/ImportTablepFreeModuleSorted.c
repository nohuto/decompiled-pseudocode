/*
 * XREFs of ImportTablepFreeModuleSorted @ 0x180136578
 * Callers:
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall ImportTablepFreeModuleSorted(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  _QWORD *i; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    v4 = *a1;
    v5 = (__int64)a1;
    while ( 1 )
    {
      v6 = *(_QWORD **)(v5 + 16);
      if ( v6 )
      {
        for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6, a4);
          v6 = i;
          if ( !i )
            break;
        }
      }
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, a4);
      v5 = (__int64)v4;
      if ( !v4 )
        break;
      v4 = (_QWORD *)*v4;
    }
  }
  return result;
}
