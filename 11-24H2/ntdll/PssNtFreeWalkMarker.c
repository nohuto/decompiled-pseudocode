/*
 * XREFs of PssNtFreeWalkMarker @ 0x1801133F0
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall PssNtFreeWalkMarker(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = NtUnmapViewOfSection(-1LL);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
