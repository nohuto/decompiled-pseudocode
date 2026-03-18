/*
 * XREFs of RtlCSparseBitmapInitialize @ 0x1405FACF4
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x1405E6450 (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlCSparseBitmapInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, a2);
  *(_QWORD *)(a1 + 32) = -1LL;
  result = a2 - 56;
  *(_DWORD *)(a1 + 52) = result;
  if ( a2 < 0x38 )
    *(_DWORD *)(a1 + 52) = 0;
  return result;
}
