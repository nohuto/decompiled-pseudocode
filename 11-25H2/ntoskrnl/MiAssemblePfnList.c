/*
 * XREFs of MiAssemblePfnList @ 0x140472ABC
 * Callers:
 *     MiProcessPageGroupInfo @ 0x14038D61C (MiProcessPageGroupInfo.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAssemblePfnList(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  _QWORD *v4; // rcx

  result = a1 + 24LL * a3;
  v4 = *(_QWORD **)(result + 8);
  if ( *v4 != result )
    __fastfail(3u);
  *a2 = result;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  ++*(_QWORD *)(result + 16);
  return result;
}
