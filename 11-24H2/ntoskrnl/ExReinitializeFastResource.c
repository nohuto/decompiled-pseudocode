/*
 * XREFs of ExReinitializeFastResource @ 0x1403C3910
 * Callers:
 *     DifExReinitializeFastResourceWrapper @ 0x14061E440 (DifExReinitializeFastResourceWrapper.c)
 * Callees:
 *     ExpIsFastResourceOwned @ 0x1403C3A60 (ExpIsFastResourceOwned.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReinitializeFastResource(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // cx
  char v5; // al
  __int64 result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (unsigned __int8)ExpIsFastResourceOwned(BugCheckParameter2, BugCheckParameter2) )
    KeBugCheckEx(0x1C6u, 4uLL, v2, 0LL, 0LL);
  v4 = *(_WORD *)(v3 + 26);
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  v5 = *(_BYTE *)(v2 + 101);
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  *(_BYTE *)(v2 + 101) = v5 & 0xF8 | 2;
  result = 0LL;
  *(_BYTE *)(v2 + 100) = 0;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_WORD *)(v2 + 26) = v4 & 0x49;
  return result;
}
