/*
 * XREFs of RtlStringCchCopyNW @ 0x1800921D4
 * Callers:
 *     SdbpSafeAllocAndConcatW @ 0x1800942C0 (SdbpSafeAllocAndConcatW.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x180092254 (RtlStringCopyWorkerW_0.c)
 */

__int64 __fastcall RtlStringCchCopyNW(_WORD *a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( !a2 )
      return result;
    goto LABEL_6;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
LABEL_6:
    *a1 = 0;
    return result;
  }
  return RtlStringCopyWorkerW_0((_DWORD)a1, a2, a3, a3, a4);
}
