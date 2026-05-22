/*
 * XREFs of ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x18010D97C
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x18010CC98 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x180110470 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009DC44 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall NtList<AggregateWaitHandle::WaitListEntry>::Clear(_DWORD *a1)
{
  _DWORD *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(_DWORD **)a1;
    if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 || (result = *(_QWORD *)v2, *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    operator delete(v2);
    --a1[4];
  }
  return result;
}
