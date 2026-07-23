/*
 * XREFs of PssNtFreeWalkMarker @ 0x180116380
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall PssNtFreeWalkMarker(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)a1 )
  {
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
