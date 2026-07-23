/*
 * XREFs of RtlHpHeapManagerStart @ 0x18009B698
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18009AFC8 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapStart @ 0x18009B6FC (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x18009B830 (RtlpHpVaMgrCtxStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d

  qword_1801CD918 = 0LL;
  result = RtlCSparseBitmapStart(&BaseAddress);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((unsigned int)&unk_1801CD968, v6, v7, v8, a5 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
