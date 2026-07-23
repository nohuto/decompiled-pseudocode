/*
 * XREFs of MiCompressImportList @ 0x140A11564
 * Callers:
 *     MiAddEntryToImportList @ 0x1407E78FC (MiAddEntryToImportList.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiAllocateImportList @ 0x140A11614 (MiAllocateImportList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiCompressImportList(_QWORD *P)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 ImportList; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  if ( !*P )
    goto LABEL_10;
  v5 = 0LL;
  do
  {
    v6 = P[v5 + 1];
    if ( v6 )
    {
      P[v3 + 1] = v6;
      v2 = v6 | 1;
      v3 = (unsigned int)(v3 + 1);
    }
    v5 = ++v4;
  }
  while ( (unsigned __int64)v4 < *P );
  if ( !(_DWORD)v3 )
  {
LABEL_10:
    v2 = -2LL;
    goto LABEL_11;
  }
  if ( (_DWORD)v3 == 1 )
  {
LABEL_11:
    ExFreePoolWithTag(P, 0);
    return (_QWORD *)v2;
  }
  v7 = (unsigned int)v3;
  if ( (unsigned int)v3 != *P )
  {
    ImportList = MiAllocateImportList((unsigned int)v3);
    v2 = ImportList;
    if ( ImportList )
    {
      memmove((void *)(ImportList + 8), P + 1, 8 * v7);
      goto LABEL_11;
    }
  }
  return P;
}
