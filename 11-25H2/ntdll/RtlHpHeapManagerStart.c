/*
 * XREFs of RtlHpHeapManagerStart @ 0x1800B9E8C
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1800B97BC (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapStart @ 0x1800B9EF0 (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x1800BA024 (RtlpHpVaMgrCtxStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d

  qword_1801D0978 = 0LL;
  result = RtlCSparseBitmapStart(&BaseAddress);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((unsigned int)&unk_1801D09C8, v6, v7, v8, a5 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
