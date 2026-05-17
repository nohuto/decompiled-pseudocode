/*
 * XREFs of RtlpMergeContextXState @ 0x1800E9E90
 * Callers:
 *     RtlCaptureContext2 @ 0x180120D40 (RtlCaptureContext2.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x180018F00 (RtlLocateExtendedFeature.c)
 */

char *__fastcall RtlpMergeContextXState(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char *result; // rax
  __int64 v5; // rcx

  v3 = a1 + *(int *)(a1 + 1248);
  result = RtlLocateExtendedFeature((_DWORD *)(a1 + 1232), 0xBu, 0LL);
  if ( result )
  {
    v5 = *(_QWORD *)(v3 + 1232);
    if ( a2 )
    {
      *(_QWORD *)(v3 + 1232) = v5 | 0x800;
      *(_QWORD *)result = 1LL;
      *((_QWORD *)result + 1) = a2;
    }
    else
    {
      *(_QWORD *)(v3 + 1232) = v5 & 0xFFFFFFFFFFFFF7FFuLL;
      *(_QWORD *)result = 0LL;
      *((_QWORD *)result + 1) = 0LL;
    }
  }
  return result;
}
