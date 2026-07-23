/*
 * XREFs of IoIsKernelPagingRead @ 0x140447B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IoIsKernelPagingRead(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx

  v1 = *(_QWORD *)(a1 + 200);
  LOBYTE(v2) = 0;
  if ( *(char *)(a1 + 71) >= 0 && v1 && (*(_WORD *)(v1 + 2) & 0x100) != 0 )
    v2 = *(_WORD *)(*(_QWORD *)(a1 + 200) + 60LL);
  return (v2 & 1) == 0;
}
