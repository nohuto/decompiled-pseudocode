/*
 * XREFs of MmGetSectionRange @ 0x1407E8480
 * Callers:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x1402C6E88 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 */

__int64 __fastcall MmGetSectionRange(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
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
    v9 = *(_QWORD *)(v7 + 48);
    v10 = a1 - v9;
    v11 = RtlImageNtHeader(v9);
    v12 = 0;
    v13 = (unsigned int *)(*(unsigned __int16 *)(v11 + 20) + v11 + 32);
    while ( v12 < *(unsigned __int16 *)(v11 + 6) )
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
