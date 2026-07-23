/*
 * XREFs of MmIsNonPagedPoolNx @ 0x14067DF7C
 * Callers:
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsNonPagedPoolNx(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( (v1 & 0x80u) == 0LL )
    v1 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return v1 < 0;
}
