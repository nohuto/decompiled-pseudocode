/*
 * XREFs of NvmeNamespaceIsOutstandingRequest @ 0x1401051EC
 * Callers:
 *     NvmeNamespaceWaitForOutstandingIoComplete @ 0x1401152E0 (NvmeNamespaceWaitForOutstandingIoComplete.c)
 * Callees:
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400CB764 (IsOutstandingRequestInNvmeControllerQueue.c)
 */

char __fastcall NvmeNamespaceIsOutstandingRequest(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned int v12; // r14d
  unsigned int v13; // r8d
  __int64 v14; // rdx

  v1 = (__int64 *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(v3 + 712);
  v6 = *(_DWORD *)(v5 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 88) + 136LL) & 2) == 0 )
    --v6;
  if ( IsOutstandingRequestInNvmeControllerQueue(v3, v5) )
  {
    v7 = 0;
    if ( v6 )
    {
      v8 = 0LL;
      while ( (*(_BYTE *)(v8 + *(_QWORD *)(v5 + 32) + 60) & 1) == 0
           || *(_DWORD *)(v8 + *(_QWORD *)(v5 + 32) + 88) != *(_DWORD *)(a1 + 56) )
      {
        ++v7;
        v8 += 128LL;
        if ( v7 >= v6 )
        {
          v1 = (__int64 *)(a1 + 16);
          goto LABEL_10;
        }
      }
      return 1;
    }
  }
LABEL_10:
  v9 = *v1;
  v10 = 0;
  if ( *(_WORD *)(*v1 + 22) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 728) + 192LL * v10;
      v12 = *(_DWORD *)(v11 + 124);
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 88) + 136LL) & 2) == 0 )
        --v12;
      if ( IsOutstandingRequestInNvmeControllerQueue(v9, v11) )
      {
        if ( *(_DWORD *)(*v1 + 656) == 1 )
          return 1;
        v13 = 0;
        if ( v12 )
          break;
      }
LABEL_20:
      v9 = *v1;
      if ( ++v10 >= *(unsigned __int16 *)(*v1 + 22) )
        return v4;
    }
    v14 = 0LL;
    while ( (*(_BYTE *)(v14 + *(_QWORD *)(v11 + 32) + 60) & 1) == 0
         || *(_DWORD *)(v14 + *(_QWORD *)(v11 + 32) + 88) != *(_DWORD *)(a1 + 56) )
    {
      ++v13;
      v14 += 128LL;
      if ( v13 >= v12 )
        goto LABEL_20;
    }
    return 1;
  }
  return v4;
}
