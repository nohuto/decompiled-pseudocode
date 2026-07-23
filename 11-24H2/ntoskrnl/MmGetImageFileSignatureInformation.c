/*
 * XREFs of MmGetImageFileSignatureInformation @ 0x140446860
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     MiDereferenceControlAreaBySection @ 0x1404468F8 (MiDereferenceControlAreaBySection.c)
 */

char __fastcall MmGetImageFileSignatureInformation(__int64 a1)
{
  _QWORD *v1; // rcx
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 v5; // dl
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0;
  v7 = 0;
  if ( !v1 )
    return 0;
  v3 = MiLockSectionControlArea(v1, 0, &v7);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v7);
  }
  else
  {
    ++*(_QWORD *)(v3 + 24);
    MiRemoveUnusedSegment(v3);
    v5 = v7;
    ++*(_QWORD *)(v4 + 48);
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v5);
    v2 = *(_BYTE *)(*(_QWORD *)v4 + 15LL) & 0xF;
    MiDereferenceControlAreaBySection(v4, 1LL);
  }
  return v2;
}
