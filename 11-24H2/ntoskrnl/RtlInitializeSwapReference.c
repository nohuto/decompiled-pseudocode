/*
 * XREFs of RtlInitializeSwapReference @ 0x14078D874
 * Callers:
 *     CmFcManagerInitialize @ 0x140C4EFE8 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSwapReference(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
