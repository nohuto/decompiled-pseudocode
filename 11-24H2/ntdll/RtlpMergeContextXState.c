/*
 * XREFs of RtlpMergeContextXState @ 0x1800E5620
 * Callers:
 *     RtlCaptureContext2 @ 0x18011EF70 (RtlCaptureContext2.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 */

_QWORD *__fastcall RtlpMergeContextXState(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v3 = a1 + *(int *)(a1 + 1248);
  result = RtlLocateExtendedFeature((PCONTEXT_EX)(a1 + 1232), 0xBu, 0LL);
  if ( result )
  {
    v5 = *(_QWORD *)(v3 + 1232);
    if ( a2 )
    {
      *(_QWORD *)(v3 + 1232) = v5 | 0x800;
      *result = 1LL;
      result[1] = a2;
    }
    else
    {
      *(_QWORD *)(v3 + 1232) = v5 & 0xFFFFFFFFFFFFF7FFuLL;
      *result = 0LL;
      result[1] = 0LL;
    }
  }
  return result;
}
