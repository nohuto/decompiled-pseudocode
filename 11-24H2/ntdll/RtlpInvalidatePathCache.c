/*
 * XREFs of RtlpInvalidatePathCache @ 0x18010D3AC
 * Callers:
 *     RtlpSignalSystemDirsModification @ 0x18015E5B4 (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_QWORD *)(result + 80))-- != 1LL )
      return 0LL;
  }
  return result;
}
