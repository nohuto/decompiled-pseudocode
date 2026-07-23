/*
 * XREFs of MmGetSectionRange @ 0x1407D85C0
 * Callers:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x14036D7C4 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 */

__int64 __fastcall MmGetSectionRange(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // rcx
  unsigned __int64 v10; // rdi
  PIMAGE_NT_HEADERS v11; // rax
  unsigned int v12; // r8d
  unsigned int *v13; // rdx
  unsigned int v14; // r9d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx

  v6 = -1073741275;
  v7 = MmLockLoadedDataTableEntry(a1);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(void **)(v7 + 48);
    v10 = a1 - (_QWORD)v9;
    v11 = RtlImageNtHeader(v9);
    v12 = 0;
    v13 = (unsigned int *)((char *)&v11->OptionalHeader.SizeOfInitializedData + v11->FileHeader.SizeOfOptionalHeader);
    while ( v12 < v11->FileHeader.NumberOfSections )
    {
      v14 = v13[2];
      v15 = v13[1];
      if ( v14 < *v13 )
        v14 = *v13;
      if ( v10 >= v15 && v10 < v14 + (unsigned int)v15 )
      {
        v16 = v15 + *(_QWORD *)(v8 + 48);
        *a3 = v14;
        *a2 = v16;
        v6 = 0;
        break;
      }
      v13 += 10;
      ++v12;
    }
    MmUnlockLoadedDataTableEntry(v8);
  }
  return v6;
}
