/*
 * XREFs of PfTTraceListTrim @ 0x140745204
 * Callers:
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x140972A00 (PfTTraceListAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTTraceListTrim(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r11
  __int64 result; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  int v10; // edx
  __int64 *v11; // rdx

  v4 = 708LL;
  if ( a2 != 1 )
    v4 = 704LL;
  v6 = 608LL;
  if ( a2 != 1 )
    v6 = 600LL;
  result = 584LL;
  if ( a2 != 1 )
    result = 568LL;
  v8 = (__int64 *)(result + a1);
  while ( *(_DWORD *)(v6 + a1) > a3 )
  {
    result = *v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *(__int64 **)(result + 8) != v8
      || (v9 = *(_QWORD *)result, *(_QWORD *)(*(_QWORD *)result + 8LL) != result)
      || ((*v8 = v9, *(_QWORD *)(v9 + 8) = v8, *(_DWORD *)(result + 28))
        ? (v10 = *(_DWORD *)(result + 48))
        : (v10 = *(_DWORD *)(result + 36)),
          --*(_DWORD *)(v6 + a1),
          *(_DWORD *)(v4 + a1) += v10,
          v11 = *(__int64 **)(a4 + 8),
          *v11 != a4) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)result = a4;
    *(_QWORD *)(result + 8) = v11;
    *v11 = result;
    *(_QWORD *)(a4 + 8) = result;
  }
  return result;
}
