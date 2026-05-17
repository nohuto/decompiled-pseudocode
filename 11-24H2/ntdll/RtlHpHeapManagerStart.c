/*
 * XREFs of RtlHpHeapManagerStart @ 0x180090B0C
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18009043C (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapStart @ 0x180090B70 (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x180090CA4 (RtlpHpVaMgrCtxStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d

  qword_1801CE928 = 0LL;
  result = RtlCSparseBitmapStart(&unk_1801CE930, 2 * (a5 >> 20), a3, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((unsigned int)&unk_1801CE978, v6, v7, v8, a5 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
